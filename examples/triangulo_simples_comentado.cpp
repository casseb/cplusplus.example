/*
O Comando include adiciona um biblioteca em seu código c++, neste exemplo ele adiciona iostream.
iostream é uma biblioteca do C++ responsável por receber e apresentar valores pelo console, por isso IO Stream (Input/Output)
É dele que vem os objetos cout e cin. 
*/
#include <iostream>

/*
using namespace std facilita o uso criando um escopo chamado std, desta forma todos os comandos estarão presentes neste escopo.
Caso esta linha seja removida o programa para de compilar pois a nomenclatura completa do cout é std::cout.
Portanto ou é definido o namespace para std ou todas as chamadas cout e cin deverão ser alteradas para std::cout e std::cin.
*/
using namespace std;

/*
Tudo na programação é uma função, int main é uma função que retorna um inteiro (neste caso sempre zero).
O nome main é reservado para indicar onde começa a execução do código, sendo possível criar outras funções com outros nomes.
*/
int main ()
{
  /*
  Declaração de 3 variáveis inteiras para representar o triangulo.
  Por serem do mesmo tipo, tambem poderia ser declarado em uma linha: int lado, altura, base;
  */
  int lado;
  int altura;
  int base;

  /*
  Retorno no console do usuário solicitando um valor com cout.
  Recebendo cada um dos dados com cin.
  */
  cout << "Digite o lado do triangulo" << "\n";
  cin >> lado;

  cout << "Digite a altura do triangulo" << "\n";
  cin >> altura;

  cout << "Digite a base do triangulo" << "\n";
  cin >> base;

  /*
  Neste print final é apresentado todos os valores, adicionando as variáveis dentro da frase.
  O \n no final serve para quebrar a linha, considerado uma boa prática sempre que for mostrar itens no console.
  */
  cout << "O triangulo possui lado: " << lado << ", altura: " << altura << " e base: " << base << "\n";

  /*
  Efetivo fim da função main e, por consequencia, fim do programa pelo retorno 0.
  */
  return 0;
}
