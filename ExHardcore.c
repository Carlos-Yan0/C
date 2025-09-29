#include <stdio.h>
#include <string.h>

int main(){
	
	
	float precoUnitario, precoFinal, custoEstocagem, mediaEstocagem, imposto = 0.02, maiorPrecoFinal, mediaImpostos, menorPrecoFinal, totalImpostos;
	char refrigeracao, categoria, classificacao[15];
	int quantidadeProdutos = 0, caros = 0, baratos = 0, normais = 0;
	
	while(quantidadeProdutos < 3){
		printf("Digite o preço unitario do produto:");
		scanf("%f", &precoUnitario);
		printf("\nO produto possui refrigeração?(S para sim e N para não)");
		scanf("%c", &refrigeracao);
		if(refrigeracao != 'Ss' && refrigeracao != 'Nn'){
			printf("Refrigeração invalida");
			return 0;
		}
		printf("\nDigite a categoria do produto(A - alimentação, L - limpeza e V - Vestuario): ");
		scanf("%c", &categoria);
		if(categoria != 'A' && categoria != 'L' && categoria != 'V'){
				printf("Categoria invalida");
				return 0;
			}
		
		if(precoUnitario < 20){
			if(categoria == 'A'){
				custoEstocagem = 2;
			}else if(categoria == 'L'){
				custoEstocagem = 3;
			}else{
				custoEstocagem = 4;
			}
		}else if(precoUnitario >= 20 && precoUnitario < 50){
				if(refrigeracao == 'Ss'){
					custoEstocagem = 6;
				}else{
					custoEstocagem = 0;
				}
		}else{
			if(refrigeracao == 'Ss'){
					if(categoria == 'A'){
						custoEstocagem = 5;
						imposto = 0.04;
					}else if(categoria == 'L'){
						custoEstocagem = 2;
					}else{
						custoEstocagem = 4;
					}
				}else{
					if(categoria == 'L'){
						custoEstocagem = 1;
					}else{
						custoEstocagem = 0;
					}
				}
		}
		
		precoFinal = precoUnitario + custoEstocagem + (precoUnitario * imposto);
		if(quantidadeProdutos == 0){
			maiorPrecoFinal = precoFinal;
			menorPrecoFinal = precoFinal;
		}else{
			if(precoFinal > maiorPrecoFinal){
				maiorPrecoFinal = precoFinal;
			}
			if(precoFinal < menorPrecoFinal){
				menorPrecoFinal = precoFinal;
			}
		}
		
		
		
		if(precoFinal < 20){
			strcpy(classificacao, "Barato");
			baratos += 1;
		}else if(precoFinal >= 20 && precoFinal <= 100){
				strcpy(classificacao, "normal");
			normais += 1;
		}else{
				strcpy(classificacao, "caro");
			caros +=1;
		}
		
		mediaEstocagem = custoEstocagem;
		mediaImpostos = precoUnitario * imposto;
		totalImpostos = mediaImpostos;
		if(quantidadeProdutos == 2){
			mediaEstocagem = mediaEstocagem / 12;
			mediaImpostos = mediaImpostos / 12;
		}
		
		printf("Media dos custos de estocagem: %.2f", mediaEstocagem);
		printf("Media dos impostos: %.2f", mediaImpostos);
		printf("Total dos impostos: %.2f", totalImpostos);
		printf("Maior preço total: %.2f", maiorPrecoFinal);
		printf("Menor preço total: %.2f", menorPrecoFinal);
		printf("quantidade de produtos de classificação barato", baratos);
		printf("quantidade de produtos de classificação normal", normais);
		printf("quantidade de produtos de classificação caro", caros);
		
		
		quantidadeProdutos++;
	}
}