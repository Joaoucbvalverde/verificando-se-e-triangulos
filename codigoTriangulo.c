#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 3

int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float l1, l2, l3;
	
	//IMPRIMINDO NA TELA, E GUARDANDO VALORES DIGITADOS PELO USUARIO
	printf("DIGITE O VALOR DO PRIMEIRO LADO;\n");
	scanf("%f", &l1);
	
	printf("DIGITE O VALOR DO SEGUNDO LADO;\n");
	scanf("%f", &l2);
	
	printf("DIGITE O VALOR DO TERCEIRO LADO;\n");
	scanf("%f", &l3);
	
	//ESTRUTURA CONDICIONAL PARA SABER SE EXISTE UM TRIANGULO, E QUAL TIPO É
	if ((l1 + l2) > l3 && (l3 + l2)> l1 && (l1 + l3) > l1)
	{
		 if((l1 == l2) && (l2 == l3) && (l1 == l3))
		{
			printf("TRIANGULO EQUILATERO");
		}
		else if((l1 != l2) && (l2 != l3) && (l3 != l1))
		{
			printf("TRIANGULO ESCALENO");
		}
		else
		{
			printf("TRIANGULO ISÓSCELES");
		}
	}
	else
	{
		printf("TRIANGULO NÃO EXISTE");
	}
	
	return 0;
}
