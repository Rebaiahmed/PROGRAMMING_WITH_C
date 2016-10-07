#include <stdio.h>
#include <stdlib.h>

int main()
{



int nb_marche =0,nb_etage=0,j=0;

do
{
printf("entrez le nombre d'etages \n");
scanf("%d",&nb_etage);

printf("entrez le nombre de marches par étage\n");
scanf("%d",&nb_marche);
}while(nb_marche<0 && nb_etage<0);

//*******************************************************//

while(j<=nb_marche*nb_etage)
{
// j div nombre de macrhes nous indique l'etage , par exemple 13 pas effectuées,nombre_demarche=5 nous sommes dans l'etage 13/5=2
printf("Vous avez %d marches , vous étes dans l'etage  %d \n",j,j/nb_marche);
j++;
}








    return 0 ;

    }




