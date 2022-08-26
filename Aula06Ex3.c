/* Utilizando apenas um vetor de tamanho 6, troque os valores de maneira inversa;
*/
#include<stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
  	int n,i,x,aux;
  	int vet[6];
   	printf(" Quantidade de  vetores: ");
  	scanf("%d", &n);
  	printf("Digite os %d Números:\n ",n);
	for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  //Algoritimo de troca
  	x = n-1;
  	for(i = 0; i < n/2; i++){
    aux = vet[i];
    vet[i] = vet[x];
    vet[x] = aux;
    x--;
  }
  printf("\n");
  	for(i = 0; i < n; i++){
    printf("%d \n ",vet[i]);
  printf("\n");
  
}

}
