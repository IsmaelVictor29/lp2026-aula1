#include <stdio.h>
int main() {
  int operacao;
  float num1;
  float num2;
  float resultado;
  printf("Digite a operação desejada:\n 1-multiplicação\n 2-divisao\n 3-soma\n 4-subtração\n");
  scanf("%d", &operacao);
  scanf("%f", &num1);
  scanf("%f", &num2);

 
  if(operacao == 1) {
    resultado = num1 * num2;
    printf("=%f",resultado);
    
  } 
  else if(operacao == 2) {
    resultado = num1 / num2; 
    printf("=%f",resultado);
  }
  else if(operacao == 3) {
    resultado = num1 + num2; 
    printf("=%f", resultado);
  }
  else if(operacao == 4) {
    resultado = num1 - num2; 
    printf("=%f", resultado);
  }

 else{
    printf("Nao a outra operação!!!");


 }
    return 0;
}