#include <stdio.h>

int main() {
  
  int qtdCamiseta, qtdCamisa, qtdBermuda, qtdCalca, qtdCasaco;
  float precoCamiseta = 30.00, precoCamisa = 50.00, precoBermuda = 40.00, precoCalca = 60.00, precoCasaco = 80.00;

  float totalCamiseta, totalCamisa, totalBermuda, totalCalca, totalCasaco, totalCompra;

  printf("Sistema de Compra de Roupas\n\n");
  printf("Camiseta (R$30,00): ");
  scanf("%d", &qtdCamiseta);
  printf("Camisa (R$50,00): ");
  scanf("%d", &qtdCamisa);
  printf("Bermuda (R$40,00): ");
  scanf("%d", &qtdBermuda);
  printf("Calça (R$60,00): ");
  scanf("%d", &qtdCalca);
  printf("Casaco (R$80,00): ");
  scanf("%d", &qtdCasaco);
  
  totalCamiseta = precoCamiseta * qtdCamiseta;
  totalCamisa = precoCamisa * qtdCamisa;
  totalBermuda = precoBermuda * qtdBermuda;
  totalCalca = precoCalca * qtdCalca;
  totalCasaco = precoCasaco * qtdCasaco;

  totalCompra = totalCamiseta + totalCamisa + totalBermuda + totalCalca + totalCasaco;

  printf("\nResumo da Compra:\n");
  printf("Camiseta: %d x R$30,00 = R$%.2f\n", qtdCamiseta, totalCamiseta);
  printf("Camisa: %d x R$50,00 = R$%.2f\n", qtdCamisa, totalCamisa);
  printf("Bermuda: %d x R$40,00 = R$%.2f\n", qtdBermuda, totalBermuda);
  printf("Calça: %d x R$60,00 = R$%.2f\n", qtdCalca, totalCalca);
  printf("Casaco: %d x R$80,00 = R$%.2f\n", qtdCasaco, totalCasaco);
  printf("\nTotal da Compra: R$%.2f\n", totalCompra);

  return 0;
}
