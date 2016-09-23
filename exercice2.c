#include <stdio.h>
#include <stdlib.h>

int main()
{
int n= 0 , nb=0 ,somme=0, max= 0,result=0;
   printf("--_-_-_-_-_-__saisir_-_-_-_-_-_-_-_-_ \n");

   do
   {
   printf("saisir un entier \n");
   //resulr si entier a valeur 1 , si non 0
    result = scanf("%d",&n);





    if(result==1)
    {
     somme+=n ;
       nb++ ;

    if(n>max)
    {
        max = n ;
    }
    }


   }while(result == 1);
   printf("vous avez saisi %d nombres , la somme est %d , le maximum est %d \n", nb,somme,max);
   somme=0;
   max = 0 ;
    return 0;
}


