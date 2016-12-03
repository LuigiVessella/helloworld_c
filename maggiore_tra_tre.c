#include <stdio.h>

int main(){
int a,b,c;
printf("Inserisci tre interi: ");
scanf("%d %d %d",&a, &b, &c);
printf("La somma e' %d\n", a+b+c );
printf("Il prodotto e' %d\n",a*b+c);

if(a > b && b > c){
   printf("Il maggiore e' %d\n",a);
}
if(b > a && b > c)
{
    printf("Il maggiore e' %d\n",b);
}
if(c>a && c>b)
{
    printf("Il maggiore e' %d\n",c);
}
return 0;
}
