# Exemplos de C++

Neste repositório será armazenado exemplos práticos sobre estruturas de dados para C++.

## Exemplo Simples

Abaixo um código simples que recebe altura, largura e base de um triângulo e mostra ao usuário final.

~~~c++
#include <iostream>

using namespace std;

int
main ()
{
  int lado;
  int altura;
  int base;

  cout << "Digite o lado do triangulo" << "\n";
  cin >> lado;

  cout << "Digite a altura do triangulo" << "\n";
  cin >> altura;

  cout << "Digite a base do triangulo" << "\n";
  cin >> base;

  cout << "O triangulo possui lado: " << lado << ", altura: " << altura << " e base: " << base << "\n";

  return 0;
}
~~~
Código presente também na pasta examples como [triangulo_simples.cpp](https://github.com/casseb/cplusplus.example/blob/master/examples/triangulo_simples.cpp).

Para uma rápida execução e testes, é possível executar este código online diretamente pelo [Repl](https://repl.it/).
