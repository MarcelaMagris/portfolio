#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define Cara 1
#define Coroa 2
#define Sair 0

void BoasVindas(){
  printf("-----------------------------------\n");
  printf("------------BOAS-VINDAS------------\n");
  printf("-----------------------------------\n");
  printf("-Escolha 1 para Cara---------------\n");
  printf("-Escolha 2 para Coroa--------------\n");
  printf("-Escolha 0 para Sair---------------\n");
}

int LeEscolha(){
  int n;
  scanf("%d", &n);
  if (n==1){
    return Cara;
  }else if(n==2){
    return Coroa;
  }else if (n==0){
    return Sair;
  }
  return 0;
}

void PrintaEscolha(int n){
  if(n==1){
    printf("Voce escolheu Cara\n");
  }else if(n==2){
    printf("Voce escolheu Coroa\n");
  }
}

int Sorteia(){
  int jogada;
  jogada=rand();
  
  if (jogada%2+1==Cara){
    return Cara;
  }else if(jogada%2+1==Coroa){
    return Coroa;
  }
  return 0;
}

void PrintaSorteio(int n){
  if(n==Cara){
    printf("Cara foi o lado sorteado!\n");
  }else if (n==Coroa){
    printf("Coroa foi o lado sorteado!\n");
  }
}

int ContaVitoria(int escolha, int sorteio){
  if(escolha==sorteio){
    printf("Parabéns, você ganhou, você escolheu ");
    if(escolha==Cara){
      printf("Cara, e foi sorteado Cara!\n");
      return 1;
    }else if(escolha==Coroa){
      printf("Coroa, e foi sorteado Coroa!\n");
      return 1;
    }
  }else if(escolha!=sorteio){
    printf("Desculpa, você escolheu ");
      if(escolha==Cara){
        printf("Cara, e foi sorteado Coroa!\n");
        return 0;
      }else if(escolha==Coroa){
        printf("Coroa, e foi sorteado Cara!\n");
        return 0;
      }
    
  }
}
  
void PrintaVitoria(int n){
    printf("Seus pontos sao: %d\n", n);
}
  
void TelaFinalizacao(){
  printf("-----------------------------------\n");
  printf("----GOSTARIA DE JOGAR DE NOVO?-----\n");
  printf("-----------------------------------\n");
  printf("-Escolha 1 para Cara---------------\n");
  printf("-Escolha 2 para Coroa--------------\n");
  printf("-Escolha 0 para Sair---------------\n");
}

int main(){
  int escolha=1, joga, vitorias=0, conta=0;
  BoasVindas();
  while(escolha !=0){
    srand(time(NULL));
    
    escolha=LeEscolha();
      if(escolha==0){
        break;
      }
    PrintaEscolha(escolha);
    joga=Sorteia();
    PrintaSorteio(joga);
    conta=ContaVitoria(escolha, joga);
    vitorias = vitorias + conta;
    PrintaVitoria(vitorias);
    TelaFinalizacao();
    }
  PrintaVitoria(vitorias);
  return 0;
}
