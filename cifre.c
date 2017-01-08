#include<stdio.h>

int main(){

int num,modulo;

printf("Inserisci numero di 5 cifre: ");
scanf("%d",&num);

modulo = num%10;
printf("%d   ", modulo);
num = num/10;
modulo = num%10;
printf("%d   ", modulo);
num = num/10;
modulo = num%10;
printf("%d   ", modulo);
num = num/10;
modulo = num%10;
printf("%d   ", modulo);
num=num/10;
modulo = num%10;
printf("%d   ", modulo);

return 0;
}
