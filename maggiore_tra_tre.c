#include <stdio.h>

int main(){
int a,b,c;
int max = 0,min=0;
printf("Inserisci tre interi: ");
scanf(" %d %d %d",&a, &b, &c);
printf("La somma e' %d\n", a+b+c );
printf("Il prodotto e' %d\n",a*b*c);
printf("La media e' %d\n",(a+b+c)/3);

max=a;
if (a==b && b==c)
{
    printf("I tre numeri sono uguali\n");
}
if (b>max)
{
    max=b;
}
if (c>max)
{
    max=c;
}

min = a;

if (b<min)
{
    min=b;
}
if (c<b)
{
    min=c;
}
printf("%d e' il maggiore\n", max);
printf("%d e' il minore\n", min);
return 0;
}
















