/* Localize um valor informado pelo usu�rio dentro de um vetor com dimens�o 10;*/
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
    int i;
    int vet[10];

    for(i = 0; i < 10; i++){ 
        printf("Digite o elemento da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

}
  

