#include<stdio.h>
int main () {
    //Question : 1
    int i = 3;
    int *p,*q;
    //Question : 2
    printf("&i=%x || p = %x || q = %x \n ",&i,p,q);
    //Question : 3
    // *p=i; ---> provoque un problème mémoire car le pointeur p n'a pas été initialisé
    //Question : 4-5-6-7-8-9
    p=&i;
    printf("p = %x || *p = %d || i = %d \n ",p,*p,i);
    *p=2025;
    printf("p = %x || *p = %d || i = %d \n ",p,*p,i);
    i=34;
    printf("p = %x || *p = %d || i = %d \n ",p,*p,i);
    q=p;
    printf("i = %d || *p = %d || *q = %d \n ",i,*p,*q);
    printf("&i = %x || p = %x || q = %x \n ",&i,p,q);
    return 0;
}
