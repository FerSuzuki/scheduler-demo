// Fernando Suzuki Silva RA: 167557

#include <stdio.h>

int main() {
  int a[5];
  int n;
  int i, k = 0, l = 0; // Variáveis Auxiliares
  int aux_interacoes[5];
  
  for(i=0; i<5; i++){  // Limpeza do vetor
    aux_interacoes[i] = 0;
  }

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (i=0; i<n; i++) {
    k = 0; // Variável Flag para Impressão
    
    for (l = 0; l < 5;l++){ // Soma "1" em cada posição do vetor auxiliar de interações 
      aux_interacoes[l] ++;     
    } 
    
    for(l=0; l < 5; l++){
      if(aux_interacoes[l] == a[l]){ // A impressão só ocorre se o valor da interação no vetor auxiliar for igual ao valor da interação no vetor a[5] 
	aux_interacoes[l] = 0; // Garante que a próxima impressão da tarefa só ocorrerá qnd satisfizer a condição acima novamente
	printf("%d",l); 
	k++;
      }
    }
   
    if(k == 0){
      printf("-\n");
    }
    
    else{
      printf("\n");
    }
  }
  
  return 0;
}
