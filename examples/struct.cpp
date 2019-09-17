#include <iostream>

using namespace std;

/*
Exemplo de Struct.
Sua montagem pode ser feita fora o método main
Esta chamada somente define um esqueleto, sem alocar nada em memória.
Cada variável da struct é chamada de atributo.
*/
struct Triangulo {
  int lado;
  int altura;
  int base;
};

int main ()
{
  /*
  A variável triangulo é do tipo Triangulo.
  neste momento sim é alocado o struct, que aloca 3 inteiros.
  */
  struct Triangulo triangulo;
  
  /*
  Para utilizar o struct e seus atributos, deve ser chamado a variável triangulo, ponto e o atributo que quer manipular.
  */
  cout << "Digite o lado do triangulo" << "\n";
  cin >> triangulo.lado;

  cout << "Digite a altura do triangulo" << "\n";
  cin >> triangulo.altura;

  cout << "Digite a base do triangulo" << "\n";
  cin >> triangulo.base;

  cout << "O triangulo possui lado: " << triangulo.lado << ", altura: " << triangulo.altura << " e base: " << triangulo.base << "\n";

  return 0;
}
