#include<stdio.h>
int main()
{
    int mat,phy,chem ,total;
    scanf("%d%d%d",&mat,&phy,&chem);
     total=mat+phy+chem;
    if(mat>=65 &&  phy>=55  &&  chem>=50){
     if(total>=190  ||  mat+phy>=140){
         printf("eligiable for admission");
     }
    
    }
    else{
        printf("not   eligiable for admission ");
    }
    return  0;
}


