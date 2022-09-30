/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int recursividad(int m)
  {
   int res=0;
   if(m>0)
     {
   	return res=5*pow(3,m-1); 
     }
   else
     {
   	return 0;
     }
  }

int main(){
    int k=0;
    int res=0;
    printf("ingrese hasta donde quiere que finalice: \n");
    scanf("%d", &k);
    for(int m=1;m<=k;m++){
        res= recursividad(m);
        printf("%d,",res);
    }
    return 0;
    
}
