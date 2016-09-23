#include <stdio.h>
#include <stdlib.h>

int main()
{
char c ;

do {
printf("entrez un caractére  \n");
    scanf(" %c",&c);

if(c>=65 && c<=90)
{
  printf(" vous avez saisi un majuscule , le caractére est %c , son code asci est %d \n",c,c);
}else

 if(c>=97 && c<=122)
 {
   printf("vous avez saisi un caractére minuscule ,le caractére est %c , son code asci est %d \n",c,c);
 }
 else
  if(c>=48 && c<=57)
 {
   printf("vous avez saisi un chiffre ,le caractére est %c , son code asci est %d \n",c,c);
 }else
 {
   printf(" vous avez saisi autre ! ,le caractére est %c , son code asci est %d \n",c,c);
 }


} while(c!=27);

    return 0;
}

