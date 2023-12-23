%{	
typedef struct _node{
  char* type;
  struct _node* first;
  struct _node* second;
  struct _node* third;
  struct _node* fourth;
  char* value;
} node;
#include "y.tab.h"
%}

%%


"Salut"|"salut"|"buna"|"Buna"     return SALUT;
"--ajutor"|"--Ajutor"   return HELP;



"boseala"|"bosit"|"somn"    {yylval.str = "oboseala";return SIMPTOM;}
"urer"|"dor"|"Dor"|"doare"|"Doare"|"migrena"|"Migrena"|"durut"|"Durut"|"disconfort"|"Disconfort"|"ran"|"Ran"    {yylval.str = "durere";return SIMPTOM;}
"gat"|"Gat"|"nghit"     {yylval.str = "gat";return GAT;}
"greata"|"Greata"|"rau"|"Rau"|"vomit"|"Vomit"|"vars"|"Vars"|"Voma"|"voma"|"stomac"|"Stomac"     {yylval.str = "greata";return SIMPTOM;}


("edicament "|"edicamentul ")[a-zA-Z]+    {
    char word[256];
    char t[256];
    
    if (sscanf(yytext, "%s %s", t,word) == 2) {
        yylval.str = strdup(word);
        
        return DRUG;
    }
}

"mananc"|"Mananc"|"manc"|"Manc"|"aliment"|"Aliment"|"mancare"|"Mancare"|"hrana"|"Hrana"|"mancaruri"|"Mancaruri"   return EATING;
"n-am"|"nu"|"n-are"|"not"|"n-ar"|"n am"|"n are"|"n ar"|"N-am"|"Nu"|"N-are"|"Not"|"N-ar"|"N am"|"N are"|"N ar"|"restrictie"|"Restrictie"    return NOT;
"ratament"|"astile"|"ilule"|"edicament"|"reteta"|"Reteta" return MEDS;
"care"|"Care"|"Cum"|"cum"|"Cate"|"cate"|"cand"|"Cand" return HOW;
"fac"|"Fac"|"benefic"|"Benefic"|"benefic"|"actioneaza"|"Actioneaza"|"impact"|"Impact"|"efect"|"Efect"|"rol"|"Rol"|"ajut"|"Ajut"|"contribuie"|"bun"|"Bun"|"Contribuie" return BENEFITS;
"nedorit"|"Nedorit"|"risc"|"Risc"|"negativ"|"Negativ"|"Advers"|"advers"|"secund"|"Secund"|"Contraindicat"|"contraindicat"|"complicat"|"Complicat" return DRAWBACK;



"\n"	return *yytext;



.		;

%%
