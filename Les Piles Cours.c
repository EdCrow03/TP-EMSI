#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Pile{
    int val;
    struct pile *precedant;
}cellule, *pile;

pile Empiler(Pile P,int val){
    Pile P1=malloc(sizeof(cellule));
    P1->valeur=val;
    P1->precedant=P;
    return P1
}

Pile Depiler(Pile P){
    if(P==NULL)
        return NULL;
    else{
        Pile P1=P;
        P=P->precedant;
        free(P1);
        return P;
    }
}

int RecupSommet(Pile *P){
    int Val;
    if(*P==NULL)
        return -1;
    else{
        Pile P1=*P;
        Val=(*P)->valeur;
        (*P)=(*P)->precedant;
        free(P1);
        return Val;
    }
}

pile RenversePile(pile P){
    Pile P1=NULL;
    int Val;
    if (P==NULL)
        return NULL;
    else{
        while(P!=NULL){
            Val=RecupSommet(&P);
            P1=Empiler(P1,Val);
        }
    return P1;
}
}