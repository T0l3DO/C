#include <stdio.h>
#include <conio.h>
int main (void )
{
int num,num2,resultado;
   
    printf("Digite um valor qualquer: ");
    scanf("%d", &num);
    
    printf("Digite outro valor qualquer:");
    scanf("%d", &num2);
    
    resultado=num%num2;
    
    switch (resultado)
	{
		case 0:
	printf("resultado e divisivel");
	break;
	
	default:
	printf("O resultado não e divisivel");
    break;}
}
