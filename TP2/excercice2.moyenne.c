#include <stdio.h>
#include <stdlib.h>

int main()
{


//décalrer les variables et les initializer
int nbr_terms=0,result=0;
float moy=0,somme=0,n = 0;

do
{
printf("entrer une note \n");
result = scanf("%f",&n);



/* Si le nombre est négatif alors sortir du boucle une interruption systéme */
if(n<0)
{
break;
}
/*Vérifier si la valeur saise est un entier ou réel est différent de -1*/

if(result==1 && n>=0)
{
nbr_terms++;
somme+=n;
}

}while(result !=0);

//display the result
printf("la moyenne est %f",(somme/nbr_terms));

    return 0 ;

    }


