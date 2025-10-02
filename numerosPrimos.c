#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int numeros[9], i, j;
	int numerosPrimos[9], qtdPrimos = 0;
	for(i = 0; i < 9; i++){
		printf("%d numero: ", i + 1);
		scanf("%d", &numeros[i]);
		
		bool primos = true;
		for(j = 2; j < numeros[i]; j++){
			if(numeros[i] % j == 0){
				primos = false;
				break;
			}
		}
		if(primos){
			numerosPrimos[qtdPrimos] = numeros[i];
			qtdPrimos++;
		}
	}
	
	printf("Os primos encontrados foram: ");
	for(i = 0; i < qtdPrimos; i++){
		printf("\n%d", numerosPrimos[i]);
	}
		
}
