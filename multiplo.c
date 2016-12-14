#include<stdio.h>

int main(){

int num1,num2;

printf("Inserisci numeri: ");
scanf("%d %d", &num1, &num2);

if(num1%num2 == 0){
   
   printf("%d e' un multiplo di %d\n", num1,num2);
}


return 0;
}
