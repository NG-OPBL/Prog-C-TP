#include<stdio.h>
int main (){
    int n,m;
    int *p,*q;
    p=&n;
    q=&m;
    printf("Entrer la valeur de n =  ");
    scanf("%d",p);
    printf("Entrer la valeur de m =  ");
    scanf("%d",q);
    (*p)++;
    (*q)--;
    printf(" apres n = %d et m = %d ",*p,*q);
    return 0;
}