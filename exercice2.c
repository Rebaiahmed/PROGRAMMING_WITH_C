#include <stdio.h>
#include <stdlib.h>

int main()
{
int n= 0 , nb=0 ,somme=0, max= 0,result=0,  a=0,nbr=0;
float f=0;
   printf("--_-_-_-_-_-__saisir_-_-_-_-_-_-_-_-_ \n");

   do
   {
   printf("saisir un entier \n");
   //resulr si entier a valeur 1 , si non 0
    result = scanf("%f",&f);

a = (int)f;
printf("the a is %f %f %d \n",(f-a),f,a);

    if( result==1)
    {

     somme+=f ;
       nb++ ;

    if(f>max)
    {
        max = f ;
    }
    }


   }while(result == 1 || (f-a)==0.0000);
   printf("vous avez saisi %d nombres , la somme est %d , le maximum est %d \n", nb,somme,max);

    return 0;
}


