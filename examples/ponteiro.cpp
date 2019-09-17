#include <iostream>

using namespace std;

int main() {
  int variavel;
  /*
  Um ponteiro é declarado com um * na frente.
  Um ponteiro salva o endereço da memória alocada e não o valor como na variável
  */
  int *ponteiro;

  variavel = 10;
  /*
  Adicionar & na frente de uma variável retorna o endereço dela, e não o valor.
  Ponteiro só recebe endereços e não valores.
  Também é permitido apontar desta forma: *ponteiro = variavel;
  */
  ponteiro = &variavel;

  /*
  Imprimir na tela o ponteiro diretamente retorna o endereço que ele representa.
  */
  cout << "Endereço ponteiro: " << ponteiro << " \n";
  /*
  Imprimir na tela o *ponteiro retorna o valor que aquele endereço armazena.
  */
  cout << "Valor ponteiro: " << *ponteiro << " \n";

  /*
  Variável recebe um valor novo.
  */
  variavel = 20;

  /*
  O retorno desta impressão é 20, pois o conteúdo presente na memória mudou.
  */
  cout << "Novo valor ponteiro: " << *ponteiro << " \n";

  return 0;
}
