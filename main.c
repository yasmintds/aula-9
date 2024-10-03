#include <stdio.h>
#include <string.h>


//Definindo uma estrutura para armazenar os dados do cliente
struct Cliente{
char nome[100];
int idade;
char endereco[150];
};

int main(void) {
  struct Cliente cliente;
  printf("+++++Cadastro de Clientes Inteligente++++++");


//Solicitando o nome dos clientes

printf("Digite o nome do cliente:\n ");
  fgets(cliente.nome, 100, stdin);
  cliente.nome[strcspn(cliente.endereco, "\n")] = '\0';

  //Solicitando a idade do cliente
  printf("Digite a idade do cliente: ");
  scanf("%d", &cliente.idade);
  getchar(); //Limpando o valor de memoria do scanf

  //Solicitando o endereço do cliente
  printf("digite o endereço do cliente: ");
  fgets(cliente.endereco, 150, stdin);

  //Exibindo os dados digitados
  printf("----Exibido os dados digitados");
  printf("Nome: %s\n", cliente.nome);
  printf("Idade: %d\n", cliente.idade);
  printf("Endereco: %s\n", cliente.endereco);

  return 0;
}