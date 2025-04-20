#include<stdio.h>
int main () {
    int n,m;
    int *p;
    int i,j,S=0;
    do{
    printf("Entrer le nbre des lignes 1<=n<=10 du tableaux n = ");
    scanf("%d",&n);
    printf("Entrer le nbre des colonnes 1<=m<=10 du tableaux m =");
    scanf("%d",&m);
    }while(n<=0 || m<=0);
    int T[n][m];
    int X[m];
    p=&T[0][0];
    printf("Entrer les element du tableaux T[%d][%d]:\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Entrer T[%d][%d] =",i,j);
            scanf("%d",p+i*m+j);
        }
    }
    printf("Les element du T[%d][%d] = \n ",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d \t || ",*(p+i*m+j));
        }
        printf("\n");
    }
    p=&X[0];
    for(i=0;i<m;i++){
        printf("Entrer X[%d] =",i);
        scanf("%d",p+i);
    }
    printf("Les element du X[%d] = \n ",m);
    for(j=0;j<m;j++){
        printf("%d \t || ",*(p+j));
    }
    int Y[n];//matrice qui contient T*X [n,m]x[m,1]=[n,1] de taille finale n lignes et 1 collones --> tableaux de taille n
    for(i=0;i<n;i++){
        S=0;
        for(j=0;j<m;j++){
            S=S+T[i][j]*X[j];
        }
        Y[i]=S;
    }
    printf("\n");
    printf("Resultat de Y=T[%d][%d] x X[%d] est : \n ",n,m,m);
    for (p = Y; p < Y + n; p++) {
        printf("Y[%d]= %d \n", p - Y,*p);
        
    }
    return 0;
}