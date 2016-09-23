#include <stdio.h>
#include <stdlib.h>

int main()
{
int n =0 , fact = 1,i=0 ;
    printf("calcul factoriel !\n");
    do {

 printf("saisir un entier \n");
    scanf("%d",&n);
    } while(n<=0);

    for(i=2;i<=n;i++)
    {
    fact*= i ;
    }
    printf("le factoriel est %d \n",fact);
    return 0;
}

