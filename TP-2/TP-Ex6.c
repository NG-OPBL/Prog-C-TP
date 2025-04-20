#include<stdio.h>
int main(){
    //Question : 1
    int n,m;
    int *p;
    int i,j,som=0;
    do{
    printf("Entrer le nbre des lignes 1<=n<=10 du tableaux n = ");
    scanf("%d",&n);
    printf("Entrer le nbre des colonnes 1<=m<=10 du tableaux m =");
    scanf("%d",&m);
    }while(n<=0 || m<=0);
    int T[n][m],S[n][m];
    //Question : 2
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
    p=&S[0][0];
    printf("Entrer les element du tableaux S[%d][%d]:\n",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Entrer S[%d][%d] =",i,j);
            scanf("%d",p+i*m+j);
        }
    }
    printf("Les element du S[%d][%d] = \n ",n,m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d \t || ",*(p+i*m+j));
        }
        printf("\n");
    }
    //Question : 3
int P[n][n];//matrice produit de S x T -->[n,m]x[n,m]  on !!!!!  remarque bien que la condition de produit est n=m pour donner P[n,m=n]
    if(n==m){
        for(i=0;i<n;i++){
            som=0;
            for(j=0;j<m;j++){
                som=som+T[i][j]*S[i][j];
            }
            P[i][i]=som;
        }
    
     printf("Resultat de P=T[%d][%d] x S[%d][%d] est : \n ",n,m,n,m);
     printf("Les element du P[%d][%d] = \n ",n,m);
     for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d \t || ",*(p+i*m+j));
        }
        printf("\n");
     }}
     else{
      printf("ne peut pas faire le produit car n =! m");
     }
     
return 0;
}