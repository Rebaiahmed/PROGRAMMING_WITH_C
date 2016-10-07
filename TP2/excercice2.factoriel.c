#include <stdio.h>
#include <stdlib.h>

int main()
{


//décalrer les variables et les initializer
int fact=1,n=0,result=0,i=0;



do
{
printf("entrer un nombre entier \n");
result = scanf("%d",&n);



/* Si le nombre est négatif alors sortir du boucle une interruption systéme */
if(n<0)
{
break;
}
/*Vérifier si la valeur saise est un entier et positif*/

if(result==1)
{
for(i=2;i<=n;i++)
{
fact*=i;
}
printf("factoriel du nombre %d est  %d \n",n,fact);
}

//réintializeer le factoriel a 1;
fact=1;
}while(result !=0);

//display the result


    return 0 ;

    }



