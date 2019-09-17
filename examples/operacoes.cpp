#include <iostream>

using namespace std;

int main() {
  
  /*
  Variável.
  */
  int variavel1 = 10;
  cout << "Valor de variavel: " << variavel1 << "\n";

  /*
  Endereço de memória da variável.
  */
  cout << "Endereço da variavel: " << &variavel1 << "\n";

  /*
  Ponteiro.
  */
  int *ponteiro;
  ponteiro = &variavel1;
  cout << "Endereço vinculado ao ponteiro: " << ponteiro << "\n";
  cout << "Valor vinculado ao endereço: " << *ponteiro << "\n";

  /*
  Operações com ponteiros.
  Repare que só é possível calcular valor com valor, sendo necessário chamar o valor do ponteiro com *ponteiro.
  As quatro chamadas abaixo funcionam mas a operação vai ficando mais clara a cada novo exemplo.
  */
  int variavel2 = 20;
  cout << "Operação com ponteiros: " << variavel2**ponteiro << "\n";
  cout << "Operação com ponteiros: " << (variavel2**ponteiro) << "\n";
  cout << "Operação com ponteiros: " << (variavel2 * *ponteiro) << "\n";
  cout << "Operação com ponteiros: " << (variavel2 * (*ponteiro)) << "\n";

  return 0;
}
