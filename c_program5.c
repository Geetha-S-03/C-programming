#include<stdio.h>
int main()
{
    char check;
    scanf("%c",&check);
  if(check>='A' && check<='Z' || check>='a' && check<='z' ) {
     printf("it is a alphabet" ) ;
  } 
  else if (check>='1' && check<='9'){
      printf("it is a digit");
  }
  else{
      printf("special character ");
  }
  return 0;
}

