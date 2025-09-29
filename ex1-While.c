#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float aumento = 1.5, salario = 1000;
	int ano = 2020;
	while(ano != 2026){
		if(ano == 2020){
			printf("Salario em 2020 e de 1000 Reais\n");
			ano += 1;
		}
		salario += salario * (aumento/100);
		aumento = aumento * 2;
		printf("Salario em %d e de %.2f Reais\n", ano, salario);
		ano += 1;
	}
}