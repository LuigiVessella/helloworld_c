#include<stdio.h>


int main(){
 
 int num1,num2;

 printf("Inserisci numero: ");
 scanf("%d", &num1);
 
 printf("Inserisci numero: ");
 scanf("%d", &num2);
 
 printf("La somma di %d e %d e': %d\n", num1,num2,num1+num2);
 printf("La differenza di %d e %d e': %d\n",num1,num2,num1-num2);
 printf("Il prodotto tra %d e %d e': %d\n",num1,num2,num1*num2);
 printf("Il quoziente di %d e %d e':%d\n",num1,num2,num1/num2);
 printf("Il modulo di %d e %d e': %d\n",num1,num2,num1%num2);


 return 0;
}
