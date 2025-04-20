#include<stdio.h>
int main(){
    int T[10];
    int *p1,*p2;
    int x,occ=0,t=10;
    printf("Entrer les valeur des element du tableau \n");
    for (p1 = T; p1 < T + t; p1++) {
        printf("T[%d]= ", p1 - T);
        scanf("%d", p1);
    }
    printf("Les valeur des element du tableau sont \n");
    for (p1=T;p1<T+t;p1++){
        printf("T[%d]= %d\n",p1-T,*(p1));
    }
    printf("Donner un entier x : ");
    scanf("%d",&x);
    p1 = T;
    while (p1<T+t) {
        if (*p1 == x) {
            occ++;
            for (p2 = p1; p2<T+t-1;p2++) {
                *p2 = *(p2 + 1);
            }
            t--; // Reduce array size
        } else {
            p1++; // Move forward only if no deletion
        }
    }
    printf("Nbre d'occurrences de %d est : %d\n",x,occ);
    printf("les element apres elimination de %d sont :\n",x);
    for (p1=T;p1<T+t;p1++){
        printf("T[%d]= %d\n",p1-T,*(p1));
    }

    return 0;
}