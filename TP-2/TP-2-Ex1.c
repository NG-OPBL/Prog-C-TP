#include<stdio.h>
int main() {
    float T[50],max,min,temp,S=0;
    float *p,*pmax,*pmin;//pmx=index du max dans T de meme pmn = index du min dans T
    int n;
    do{
    printf("Donner la taille du tableau 1 < n < 50  : ");
    scanf("%d",&n);}while(n<1 || n>50);
    printf("Entrer les valeur des element du tableau \n");
    for (p = T; p < T + n; p++) {
        printf("T[%ld]= ", p - T);
        scanf("%f", p);
    }
    printf("Les valeur des element du tableau sont \n");
    for (p=T;p<T+n;p++){
        printf("T[%d]= %.2f\n",p-T,*(p));
    }
    p=T;
    pmin=pmax=T;
    for (p=T;p<T+n;p++) {
        if (*p < min) {
            pmin= p;        }
        if (*p > max) {
            pmax= p;
        }
    }
    max=(*pmax);
    min=(*pmin);
    printf(" max = %.2f min = %.2f \n",max,min );
    printf("index max est pmx= %d \n",pmax-T);//pmx = index du max dans T  
    printf("index min est pmn= %d \n",pmin-T);//pmn = index du min dans T
    printf("apres permutation\n");
    temp = *pmax;
    *pmax = *pmin;
    *pmin = temp;
    for (p=T;p<T+n;p++){
        printf("T[%d]= %.2f\n",p-T,*(p));
    }
    printf(" max = %.2f min = %.2f \n",max,min);
    for (p=T;p<T+n;p++){
        S+=*p;
    }
    printf("La sommme des element du tableaux S = %.2f",S);
    return 0 ;
}