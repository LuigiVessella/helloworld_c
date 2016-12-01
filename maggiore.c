#include <stdio.h>

int main(){

int num1,num2;

printf("Inserisci primo numero: ");
scanf("%d",&num1);
printf("Inserisci secondo numero: ");
scanf("%d",&num2);

if(num1 > num2)
   { printf("%d is larger\n. ", num1);} 

if(num2 > num1)
  { printf("%d is larger\n. ", num2);}

if(num1==num2)
   { printf("These numbers are equal. ");}


return 0;
}
