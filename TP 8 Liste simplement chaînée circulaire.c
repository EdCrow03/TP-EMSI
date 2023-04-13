#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Checkpoint{
    int num;
    int classement;
    float vitesse;
    struct Checkpoint *suivant;
}checkpoint, *liste;


liste AjoutFin(int num, float vs, int cls, liste l){
    liste l1,l2;
    l1->num=num;
    l1->classement=cls;
    l1->vitesse=vs;
    if (l==NULL){
        l1->suivant=l1;
        return l1;
    }
    l1->suivant=l;
    if(l->suivant==l){
        l->suivant=l1;
        l1->suivant=l;
        return l;
    }
    l2=l;
    while(l2->suivant!=l)
        l2=l2->suivant;
    l2->suivant=l1;
    return l;
}

void Affiche(liste l){
    liste l2=l;
    while(l2->suivant!=l){
        printf("%d - %.2f - %d \n",l2->num,l2->vs,l2->cls);
        l2=l2->suivant;
    }
    printf("%d - %.2f - %d \n",l2->num,l2->vs,l2->cls);
}

liste SuppTete(liste l){
    liste l2=l->suivant,l3=l->suivant;;
    while(l3->suivant!=l)
        l3=l3->suivant;
    l3->suivant=l2;
    free(l);
    return(l1);
}


liste SuppCheckImp (liste l){
    liste l1=l,l2;
    if(l==NULL)
        return l;
    if(l->suivant==l && l->num%2!=0){
        free(l);
        return NULL;
    }
    while(l1->suivant!=l){
        if(l->num%2!=0)
        l=SuppTete(l);
        l1=l;
        else
        {

            if(l1->suivant->num%2!=0)
            {
            l2=l1->suivant;
            l1->suivant=l2->suivant;
            free(l2);
            }
            else
            l1=l1->suivant;
        }
        
    }
    return l;
}

int ClassMoto(liste l){
    int resultat=0;
    if(l==NULL)
        return 0;
    if(l->suivant==l)
        if(l->cls<3)
            return 1;
    liste l1=l;
    while(l1->suivant!=l){
        if(l1->cls<3)
            resultat++;
    l1=l1->suivant;
    if(l1->cls<3)
        resultat++;
    return resultat;
}
}

