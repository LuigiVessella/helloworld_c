#include <stdio.h>
#define pi 3.14159
int main(){
 
 int  raggio;
 
 printf("Inserisci il raggio: ");
 scanf("%d",&raggio);
  
 printf("L'area e': %f\nLa cironferenza e':%f\n", raggio*raggio*pi, 2*raggio*pi);


 return 0;
}
