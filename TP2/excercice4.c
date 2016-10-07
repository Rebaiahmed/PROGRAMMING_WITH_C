#include <stdio.h>
#include <stdlib.h>

int main()
{

int lon=0 ,larg=0,i=0,j=0;


do
{
printf("entrez le longeur du rectangle \n");
scanf("%d",&lon);

printf("entrez le largeur du rectangle \n");
scanf("%d",&larg);
}while(lon<0 && larg<0);






//affciher la 1éer ligne

for(j=0;j<larg;j++)
{
printf("`");
}

//*******************************************************************************//
for(i=1;i<lon;i++)
{

for(j=0;j<larg;j++)
{
if(j ==0 || j== larg-1)
{
printf("`");
}else
{
printf(" ");
}

}
printf("\n");
}



//affciher la derniére ligne
for(j=0;j<larg;j++)
{
printf("`");
}














    return 0 ;

    }


