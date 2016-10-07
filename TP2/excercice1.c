#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0,nbr_marche =0;
   for(i=0;i<=60;i++)
   {
   printf("Nombre de marches est %d \n",nbr_marche);

nbr_marche+=1;
//********************************

   if(nbr_marche==20)
   {
   printf("*************************************************\n");
   printf("Vous étes dans l'étage 1 \n");
    printf("*************************************************\n");

   }
   else if(nbr_marche==40)
   {
    printf("*************************************************\n");
  printf("Vous étes dans l'étage 2 \n");
   printf("*************************************************\n");
    }else if(nbr_marche==60)
    {
     printf("*************************************************\n");
      printf("Vous étes dans l'étage 3 \n");
       printf("*************************************************\n");
      break ;

}



}
    return 0 ;

    }

