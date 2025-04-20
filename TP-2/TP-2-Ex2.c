#include<stdio.h>
int main(){
    float T[50];
    float *p,*io;
    int n;
    do{
    printf("Donner la taille du tableau 1 < n < 50  : ");
    scanf("%d",&n);}while(n<1 || n>50);
    printf("Entrer les valeur des element du tableau \n");
    for (p = T; p < T + n; p++) {
        printf("T[%d]= ", p - T);
        scanf("%f", p);
    }
    printf("Les valeur des element du tableau sont \n");
    for (p=T;p<T+n;p++){
        printf("T[%d]= %.2f\n",p-T,*(p));
    }
    printf("Les indices des element nulle du tableaux sont :\n");
    for (p=T;p<T+n;p++){
        if(*p==0){
            io=p;
            printf(" '%d' || T[%d]=%.2f \n",io-T,io-T,*io);
        }      
    }

    return 0;
}