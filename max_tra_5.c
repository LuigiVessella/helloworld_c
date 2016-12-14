#include<stdio.h>

int main(){

int a,b,c,d,e,max=0;

printf("Inserisci 5 numeri interi: ");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
max = a;
if(a==b && b==c && c==d && d==e){
   printf("I numeri sono uguali.\n");

}
if(b>max){
max=b;
}
if(c>max){
max=c;
}
if(d>max){
 max=d;
}

if(e>max){
max=e;
}

printf("Il maggiore e':%d\n",max);
return 0;
}
