%{
typedef struct _node{
  char* type;
  struct _node* first;
  struct _node* second;
  struct _node* third;
  struct _node* fourth;
  char* value;
} node;
	
node* setConst(char* type);
node *opr1(char* type, node *first);
node* opr2(char* type, node* first, node* second);
node *opr3(char* type, node *first, node *second, node *third);
node *opr4(char* type, node *first, node *second, node *third ,node *fourth);
void printpre(node *opr,int nr);


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"
#include <mysql/mysql.h>


#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int state=0;
MYSQL* con;	
char numeMedicament[50];
char numeSimptom[50];
int treeFile=-1;

char* getList(char* a,char* b);
char* getL(char* a);
char* getString(char* a,char* b);
char* getString1(char* a,char* b);
%}


%union 
{
	char* str;
    node* tree;
}

%token <str> DRUG GAT SIMPTOM
%token SALUT
%token<tree> HOW MEDS
%token BENEFITS DRAWBACK 
%token HELP EATING NOT 
%start program 
%type<str>  drugs_prescriptions drugs_drawbacks drugs_benefits
%type<tree> program salut_exec medicine simple_exec meds how exec_reteta
%type<tree> help gat drawback simptom benefits not eating drug
%type<tree> medicine_benefits food  exec_medicament medicine_drawbacks
%type<tree>  exec_tratement exec_general general_benefits general_drawbacks general_prescriptions
%type<tree> simptom_prescriptions  

%%

program			:	
                |   program help  '\n'  {helpUser();}
                |   program simple_exec     {printpre($2,1);}
                |   program salut_exec simple_exec {$$=opr2("root",$2,$3);printpre($$,1);}
                |   program salut_exec    {printpre($2,1);}
                |   program error   {puts("eroaredsA");}  
				|	/* NULL */
				;

simple_exec     :   exec_reteta '\n'   {state=1; $$=opr1("simple_exec",$1);}
                |   exec_medicament '\n' {state=2;$$=opr1("simple_exec",$1);}
                |   exec_general '\n'   {$$=opr1("simple_exec",$1);}
                |   exec_tratement '\n'   {state=3;$$=opr1("simple_exec",$1);}
                ;



salut_exec      :   SALUT   {  $$=setConst("SALUT");puts("Salut");}
                ;

exec_tratement  :
                    simptom_prescriptions   {$$=opr1("Exec_tratament",$1);}
                |
                ; 


simptom_prescriptions    :
                            simptom gat { puts(numeSimptom);
                                    print_treatment();$$=opr2("Simptom_prescriptions",$1,$2);}
                        |   simptom    {  puts(numeSimptom);
                                    print_treatment();$$=opr1("Simptom_prescriptions",$1);}
                        |   gat     {  puts(numeSimptom);
                                    print_treatment();$$=opr1("Simptom_prescriptions",$1);}
                        |   gat simptom    {  puts(numeSimptom);
                                    print_treatment();$$=opr2("Simptom_prescriptions",$1,$2);}
                        |   simptom gat simptom    {  puts(numeSimptom);
                                    print_treatment();$$=opr3("Simptom_prescriptions",$1,$2,$3);}
                        |   simptom simptom gat     {  puts(numeSimptom);
                                    print_treatment();$$=opr3("Simptom_prescriptions",$1,$2,$3);}
                        |   gat simptom simptom    {  puts(numeSimptom);
                                    print_treatment();$$=opr3("Simptom_prescriptions",$1,$2,$3);}

                ;


exec_general :
                	general_prescriptions   {$$=opr1("Exec_general",$1);}
                |	general_drawbacks   {$$=opr1("Exec_general",$1);}
		        |	general_benefits    {$$=opr1("Exec_general",$1);}
                ;

general_prescriptions    :
                            how   {  
                                    print_general(0);$$=opr1("General_prescriptions",$1);}
                        |   
                        ;
general_benefits:  
                    benefits   {  print_general(1);$$=opr1("General_prescriptions",$1);}
                |   how benefits    { print_general(1);$$=opr2("General_prescriptions",$1,$2);}
                |   benefits how  {  print_general(1);$$=opr2("General_prescriptions",$1,$2);}
                ; 

general_drawbacks   :
                    drawback   {  print_general(2);$$=opr1("General_drawbacks",$1);}
                |   how drawback {   print_general(2);$$=opr2("General_prescriptions",$1,$2);}
                |   drawback benefits   {   print_general(2);$$=opr2("General_prescriptions",$1,$2);}
                |   how drawback benefits {print_general(2);$$=opr3("General_prescriptions",$1,$2,$3);}
                |   benefits drawback  {   print_general(2);$$=opr2("General_prescriptions",$1,$2);}
                |   benefits drawback drawback {   print_general(2);$$=opr3("General_prescriptions",$1,$2,$3);}
                |   how  benefits drawback {print_general(2);$$=opr3("General_prescriptions",$1,$2,$3);}
                ;

exec_medicament :
                	drugs_prescriptions {$$=opr1("Exec_medicament",$1);}
                |	drugs_drawbacks     {$$=opr1("Exec_medicament",$1);}
		        |	drugs_benefits      {$$=opr1("Exec_medicament",$1);}
                ;

drugs_prescriptions    :
                            how drug   { puts(numeMedicament);
                                    print_medicament_prescriptie();$$=opr2("Drug_prescription",$1,$2);}
                        |   drug how    {
                                    print_medicament_prescriptie();$$=opr2("Drug_prescription",$1,$2);}
                        ;
drugs_benefits:  
                    benefits drug   {puts(numeMedicament); print_medicament_beneficii();$$=opr2("drugs_benefits",$1,$2);}
                |   how benefits drug   {puts(numeMedicament); print_medicament_beneficii();$$=opr3("drugs_benefits",$1,$2,$3);}
                |   drug benefits   {puts(numeMedicament); print_medicament_beneficii();$$=opr2("drugs_benefits",$1,$2);}
                |   how drug benefits  {puts(numeMedicament); print_medicament_beneficii();$$=opr3("drugs_benefits",$1,$2,$3);}
                ; 

drugs_drawbacks   :
                    drawback drug   {puts(numeMedicament); print_medicament_riscuri();$$=opr2("Drug_drawback",$1,$2);}
                |   how drawback drug   {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   drug drawback   {puts(numeMedicament); print_medicament_riscuri();$$=opr2("Drub_drawbacks",$1,$2);}
                |   how drug drawback  {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   drawback benefits drug   {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   how drawback benefits drug   {puts(numeMedicament);print_medicament_riscuri();$$=opr4("Drub_drawbacks",$1,$2,$3,$4);}
                |   drug drawback benefits  {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   how drug drawback  benefits {puts(numeMedicament); print_medicament_riscuri();$$=opr4("Drub_drawbacks",$1,$2,$3,$4);}
                |   benefits drawback drug   {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   how  benefits drawback drug  {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   drug benefits drawback   {puts(numeMedicament); print_medicament_riscuri();$$=opr3("Drub_drawbacks",$1,$2,$3);}
                |   how drug benefits drawback  {puts(numeMedicament); print_medicament_riscuri();$$=opr4("Drub_drawbacks",$1,$2,$3,$4);}
                ;


exec_reteta	 :      food  
                |   medicine   
                ;		

medicine    :       meds    {print_medicamente();
                                $$=opr1("Medicine",$1);}
                |   medicine meds
                |   how meds    {print_medicamente_administrare();
                                $$ = opr2("Medicine",$1,$2);}                      
                |   medicine_benefits   {$$=opr1("Medicine",$1);}
                |   medicine_drawbacks  {$$=opr1("Medicine",$1);}
                ;



medicine_benefits:  
                   benefits meds   {print_medicamente_beneficii();$$=opr2("Medicine_benefits",$1,$2);}
                |   how benefits meds   {print_medicamente_beneficii();$$=opr3("Medicine_benefits",$1,$2,$3);}
                |   meds benefits   {print_medicamente_beneficii();$$=opr2("Medicine_benefits",$1,$2);}
                |   how meds benefits  {print_medicamente_beneficii();$$=opr3("Medicine_benefits",$1,$2,$3);}
                ;  
                
                
medicine_drawbacks   :
                    drawback meds   {print_medicamente_riscuri();$$=opr2("Medicine_drawbacks11",$1,$2);}
                |   how drawback meds   {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   meds drawback   {print_medicamente_riscuri();$$=opr2("Medicine_drawbacks3",$1,$2);}
                |   how meds drawback  {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   drawback benefits meds   {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   how drawback benefits meds   {print_medicamente_riscuri();$$=opr4("Medicine_drawbacks",$1,$2,$3,$4);}
                |   meds drawback benefits  {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   how meds drawback  benefits {print_medicamente_riscuri();$$=opr4("Medicine_drawbacks",$1,$2,$3,$4);}
                |   benefits drawback meds   {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   how  benefits drawback meds   {print_medicamente_riscuri();$$=opr4("Medicine_drawbacks",$1,$2,$3,$4);}
                |   meds benefits drawback   {print_medicamente_riscuri();$$=opr3("Medicine_drawbacks",$1,$2,$3);}
                |   how meds benefits drawback  {print_medicamente_riscuri();$$=opr4("Medicine_drawbacks",$1,$2,$3,$4);}
                |   drawback benefits drawback meds  {print_medicamente_riscuri();$$=opr4("Medicine_drawbacks",$1,$2,$3,$4);}
                ;
                
food    :       |   eating {print_goodFoodList();{$$=opr1("Food",$1);}}
                |   eating meds {print_goodFoodList();$$=opr2("Food",$1,$2);}  
                |   not eating {print_badFoodList();$$=opr2("Food",$1,$2);}  
                |   eating not {print_badFoodList();$$=opr2("Food",$1,$2);}    
                |   not eating meds {print_badFoodList();$$=opr3("Food",$1,$2,$3);}  
                |   eating not meds {print_badFoodList();$$=opr3("Food",$1,$2,$3);}             
				;

help        :   HELP    {$$=setConst("HELP");}
            ;

simptom     :   SIMPTOM    {strcpy(numeSimptom,$1);$$=setConst("SIMPTOM");}  
            ;

gat         :   GAT     {strcpy(numeSimptom,$1);$$=setConst("GAT");}  
            ;

drug        :   DRUG    {strcpy(numeMedicament,$1);$$=setConst("DRUG");}
            ;


drawback    :   DRAWBACK    {$$=setConst("DRAWBACK");}
            ;

not         :   NOT     {$$=setConst("NOT");}
            ;


how         :   HOW     {$$=setConst("HOW");}
                ;

meds        :   MEDS    {$$=setConst("MEDS");}
                ;


benefits    :   BENEFITS    {$$=setConst("BENEFITS");}
                ;

eating      :   EATING      {$$=setConst("EATING");}
            ;
	
	
%%

void helpUser(){

    puts("Sunt asistentul tau virtual si am ca misiune sa asist si sprijin urmarea tratamentului prescris de dl doctor. \nRaspund la orice fel de intrebari legate de medicamentele din reteta din ziua curenta cat si despre dieta, ofer informatii despre fiecare medicament in parte.\nSi in plus poti sa-mi descrii o afectiune simpla (cum ar fi o durere) pe care incerc sa o tratez.\nCu ce iti pot fi de folos?\n");

}
void print_treatment(){
    

    char interogare[200];

    sprintf(interogare, "SELECT nume, mod_administrare FROM tratament WHERE simptom = \'%s\'",numeSimptom);


    if (mysql_query(con, interogare)) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }
    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru afectiunea ta iti recomanda sa iei: ");
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
    
}

void print_general(int type){
    printf("%d\n",state);
    char var[50]="medicament";

    if(state==3){
        strcpy(var,"tratament");
    } 

    if( state == 0 ){
        puts("Nu inteleg exact la ce anume te referi, poti sa fii mai specific?");
        return 1;
    }

    char interogare[400];
    char intrebare[400];
    if(type == 0)
        sprintf(intrebare, "SELECT nume, mod_administrare FROM %s",var);
    else if(type == 1)
        sprintf(intrebare, "SELECT nume, beneficii FROM %s",var);
    else
        sprintf(intrebare, "SELECT nume, efecte_adverse FROM %s",var);

    if(state == 1)
    {
        sprintf(interogare,intrebare);
    }
    else if(state == 2)
    {
        sprintf(interogare, "%s WHERE nume = \'%s\'",intrebare, numeMedicament);
    }
    else
    {
        sprintf(interogare, "%s WHERE simptom = \'%s\'",intrebare, numeSimptom);
    }
    
    if (mysql_query(con, interogare)) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }
    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_riscuri(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, efecte_adverse FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_prescriptie(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, mod_administrare FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;


    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicament_beneficii(){

    if(numeMedicament[0]>='a' && numeMedicament[0]<='z')
        numeMedicament[0]-=32;
    else numeMedicament[0]+=32;

    char interogare[400];
    
    sprintf(interogare, "SELECT nume, beneficii FROM medicament WHERE nume = \'%s\'", numeMedicament);


    if (mysql_query(con, interogare)) {
        puts("eroare");
       mysql_close(con);
       return 1;
        
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    int q=0;

    while ((row = mysql_fetch_row(result))) {
        q=1;
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    if(q==0){
        puts("NU am gasit medicamentul cautat");
    }

    puts(""); 
}

void print_medicamente_administrare(){

   
    if (mysql_query(con, "SELECT nume,mod_administrare FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru astazi, conform retetei, trebuie sa iei urmatoarele medicamente:\n ");
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente_beneficii(){

   
    if (mysql_query(con, "SELECT nume,beneficii FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente_riscuri(){

   
    if (mysql_query(con, "SELECT nume,efecte_adverse FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
            if(i==0)
                printf(": ");
        }
       puts("");
    }
    puts("");
}

void print_goodFoodList(){

    if (mysql_query(con, "SELECT nume FROM mancare_recomandata")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    puts("Din reteta eu iti recomand sa incerci din urmatoarele preparate");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
        }
       puts("");
    } 
    puts("");
}

void print_badFoodList(){

    if (mysql_query(con, "SELECT nume FROM mancare_nerecomandata")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

     puts("Din reteta iti recomand sa  eviti urmatoarele preparate: ");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s",row[i]);
        }
       puts("");
    }
    puts(""); 
}

void print_medicamente(){

   
    if (mysql_query(con, "SELECT nume FROM medicament")) {
        puts("eroare");
        mysql_close(con);
        return 1;
    }

    MYSQL_RES *result = mysql_use_result(con);
    MYSQL_ROW row;

    printf("Pentru astazi, conform retetei aveti de luat urmatoarele medicamente: \n");

    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); i++) {
            printf("%s\n",row[i]);
        }
      
    } 
    puts("");
}

void yyerror(){
    puts("Nu inteleg intrebarea pusa!\nPentru asistenta , tastati : --ajutor \n");
}

node *opr1(char* type, node *first){
    

   node *p;
   p=(node*)malloc(sizeof(node));
   p->type=type;
   p->first=first;

    p->second=NULL;
    p->third=NULL;
    p->fourth=NULL;

   return p;
}

node *opr2(char* type, node *first, node *second){
    

   node *p;
   p=(node*)malloc(sizeof(node));
   p->type=type;

   p->first=first;
   p->second = second;
    
    p->third=NULL;
    p->fourth=NULL;

    

   return p;
}

node *opr4(char* type, node *first, node *second, node *third,node *fourth){
   node *p;
   p=(node*)malloc(sizeof(node));
   p->type= type;
   p->first=first;
   p->second = second;
   p->third = third;
   p->fourth = fourth;

   
   return p;
}

node *opr3(char* type, node *first, node *second, node *third){
   node *p;
   p=(node*)malloc(sizeof(node));
   p->type= type;
   p->first=first;
   p->second = second;
   p->third = third;

    p->fourth=NULL;
   return p;
}

node* setConst(char* type){
   
   node* p;
   p=(node*)malloc(sizeof(node));

    p->first=NULL;
    p->second=NULL;
    p->third=NULL;
    p->fourth=NULL;
   p->type = type;
   return p;
}

void printpre(node *opr,int nr){
    

    if (opr == NULL)
       return ;
    
        
        write(treeFile,"\n",1);
        for(int i=0;i<nr;i++)
            write(treeFile," ",1);
		  
          write(treeFile,opr->type,strlen(opr->type));
          if(opr->first!=NULL)
            printpre(opr->first,nr+2);
		  if(opr->second!=NULL)
            printpre(opr->second,nr+2);
          if(opr->third!=NULL)
            printpre(opr->third,nr+2);
		  if(opr->fourth!=NULL)
            printpre(opr->fourth,nr+2);
		  
		  
    
    write(treeFile,"\n",1);
}


int main(){

    
    
    con = mysql_init(NULL);
    if (con == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }
    if (mysql_real_connect(con, "localhost", "root", "12345678",
        NULL, 0, NULL, 0) == NULL)
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        exit(1);
    }


    if (mysql_query(con, "USE lftProiect"))
    {
        fprintf(stderr, "%s\n", mysql_error(con));
        mysql_close(con);
        exit(1);
    }

    treeFile = open("/home/claudiu/Desktop/Limbaje Formale si Translatoare/Project/arbore.txt",
                O_WRONLY | O_CREAT | O_TRUNC,777);
  
    if(treeFile==-1){
        puts("fisier creare eroare");
        return -1;
    }
    

    yyparse();

    fclose(treeFile);
    mysql_close(con);
    exit(0);

}
