
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int op;
	float n1, n2, res;
	
	printf("Digite 1 para somar:\n");
	printf("Digite 2 para subtrair:\n");
	printf("Digite 3 para multiplicar:\n");
	printf("Digite 4 para dividir:\n");
	scanf("%d", &op);
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%f", &n1);
	
	printf("Insira o segundo n�mero:\n");
	scanf("%f", &n2);
	
	switch(op){
		case 1:
			res = n1 + n2;
			printf("Soma: %.2f.\n", res);
			break;
		case 2:
			res = n1 - n2;
			printf("Subtra��o: %.2f.\n", res);
			break;
		case 3:
			res = n1 * n2;
			printf("Multiplica��o: %.2f.\n", res);
			break;
		case 4:
			if(n2 !=0){
				res = n1 / n2;
				printf("Divis�o: %.2f.\n", res);
			} else {
				if(n2 == 0){
					printf("Divis�o por zero");
				}
			}
	}
	
	
	}
	
	
	
	

