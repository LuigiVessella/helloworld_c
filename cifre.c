#include<stdio.h>

int main(){

int num,modulo;
int a,b,c,d,e;
printf("Inserisci numero di 5 cifre: ");
scanf("%d",&num);

modulo = num%10;
a = modulo;

num = num/10;
modulo = num%10;
b=modulo;

num = num/10;
modulo = num%10;
c=modulo;

num = num/10;
modulo = num%10;
d=modulo;

num=num/10;
modulo = num%10;
e=modulo;
printf("%d %d %d %d %d   ", e,d,c,b,a);

return 0;
}
