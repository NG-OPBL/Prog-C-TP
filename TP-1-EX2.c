#include<stdio.h>
int main (){
    int a,b,c;
    int *p1 , *p2;
    a=-2;
    b=a++;
    c=--b-2;
    p1=&a;
    p2=&b;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    *p1 = (*p2)++ +2;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d",*p1);printf("|| *p2=%d \n",*p2);
    (p1) = (p2);
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    (p2) =&c;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    *p1-=(*p2)++;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    ++*p2;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    (*p1) *= ++(*p2);
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    a = ++(*p2) * (*p1);
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    (p1) = &a;
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d \n",*p2);
    (*p2) = (*p1) /= (*p2);
    printf("a=%d ",a);printf("|| b=%d ",b);printf("|| c=%d ",c);printf("|| *p1=%d ",*p1);printf("|| *p2=%d ",*p2);

    return 0;
}