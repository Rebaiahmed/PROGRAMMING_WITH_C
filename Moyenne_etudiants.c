#include <stdio.h>
#include <stdlib.h>

int main()
{
int tab[30] ;
int moyenne=0,somme=0,n=0,i=0,a=0;

    printf("Hello world!\n");


do{

 printf("entrez le nombre d'etudiants a saisir %d \n");
    scanf("%d",&n);
}while(n<0);

for(i=0;i<n;i++)
{

do{
printf("donnez la moyenne %d, il doit etre entre 0 et 20 ! \n");
 scanf("%d",&n);
 tab[i]=n ;
}while(n<=0 || n>20);

}
    return 0;
}

