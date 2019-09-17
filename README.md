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

  cout << "Digite o lado do triC"ngulo" << "\n";
  cin >> lado;

  cout << "Digite a altura do triC"ngulo" << "\n";
  cin >> altura;

  cout << "Digite a base do triC"ngulo" << "\n";
  cin >> base;

  cout << "O triC"ngulo possui lado: " << lado << ", altura: " << altura <<
    " e base: " << base << "\n";

  return 0;
}
~~~
Código presente também na pasta examples com o nome "triangulo_simples.cpp".

Para uma rápida execução e testes, é possível acesse o [Online GDB](https://www.onlinegdb.com/online_c++_compiler) e cole o código na íntegra.
