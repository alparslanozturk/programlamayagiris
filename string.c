



#include <stdio.h>


int main(){

int i;
char ad[] = { 'a','l', 'p'};
char ad2[100];

printf("Ad : %s \n ", ad);


while( ad[i] != '\0' ){
 printf("karakter: %c  \n", ad[i]);
 i++;
}



printf( "ad2 giriniz: ");
scanf("%s", ad2);
printf("girilendeger: %s dir. \n", ad2);







return 0;
}
