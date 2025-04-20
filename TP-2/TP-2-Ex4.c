#include<stdio.h>
permuter(int *p1,int *p2){
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("les valeur de a et b apres permutation sans variable temp sont :\n");
    printf("a=%d || b=%d\n",*p1,*p2);
}
permutertemp(int *p1,int *p2){
    int temp;
    temp=*p2;
    *p2=*p1;
    *p1=temp;
    printf("les valeur de a et b apres permutation avec variable temp sont :\n");
    printf("a=%d || b=%d \n",*p1,*p2);
}
int main() { 
    int a,b,c,d;
    int *p1,*p2;
    printf("Donner la valeur de a = : ");
    scanf("%d",&a);
    printf("Donner la valeur de b = : ");
    scanf("%d",&b);
    c=a;
    d=b;
    p1=&a;
    p2=&b;
    permuter(p1,p2);
    p1=&c;
    p2=&d;
    permutertemp(p1,p2);
    return 0 ;
}