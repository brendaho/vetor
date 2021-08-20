#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[6], i = 0, maior = 0, menor = 99999, melhor = 0, soma, media, pmenor, pmaior, pmelhor, dif;

	soma=0;
	
	for(i=0;i<=6;i++){
    printf("Digite o valor do dia %d: ", i+1);
    scanf("%d" , &vet[i]);
    soma=soma+vet[i];
	}
	
	media=soma/7;
	
   printf("a media do faturamento total eh: %d \n", media);
   
	for(i = 0; i < 7; i++) {
		if(menor > vet[i]) 
			menor = vet[i];
			pmenor = i;
		if(maior < vet[i])
			maior = vet[i];
			pmaior = i;	
	}
    
    printf("O maior valor de faturamento foi de %d no dia %d \n", maior, pmaior);
    printf("O menor valor de faturamento foi de %d no dia %d \n", menor, pmenor);
    
    for (i=0;i<7;i++){
    	if (vet[i] > media)
    		melhor = vet[i];
			pmelhor = i;
			dif = melhor - media;
	}
    
    printf("O valor do dia %d, eh %d, e supera em %d a media de lucro.\n", pmelhor, melhor, dif);

    return 0;
}

