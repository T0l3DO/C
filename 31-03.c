#include <stdio.h>
#include <stdlib.h>


int main() {

	int var1;
	int var2;
	int divisao;
	printf("Digite um numero de 0 a 100:");
	scanf("%d",&var1);  	  
	printf("voce digitou o numero %d",var1);
	
  	if(var1 <= 100){
    printf(" O valor esta certo\n");}
 	if(var1 > 100){
	printf(" O numero e maior que 100");
	scanf("%d",&var1);}
        
    divisao=var1/2;
    if (var1==divisao*2)
    {
        printf("o seu numero eh par");
    }
    else 
    {
        printf("o seu numero eh impar");
    }  
  
  getch(); 	
  return 0; 

}




















































