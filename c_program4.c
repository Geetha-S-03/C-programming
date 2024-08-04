#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("a is larger");
    }
    else  if((b>a)&&(b>c)){
        printf("b is larger");
    }
    else{
        printf("c is larger ");
    }
    
    return 0;
}
