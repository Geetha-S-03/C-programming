#include<stdio.h>
int main()
{
   int M;
   scanf("%d",&M);
   if(M==1 || M==3 || M==5 ||  M==7 ||M==8 || M==10 || M==12 ){
       printf("It has 31 days");
   }
   else if (M==2){
       printf("it is leap year month ");
   }
   else{
       printf("it has 30 dayss");
   }

 return 0;
}
