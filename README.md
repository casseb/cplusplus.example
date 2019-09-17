# Exemplos de C++

Neste repositório será armazenado exemplos práticos sobre estruturas de dados para C++.

## Exemplo Simples

Abaixo um código simples que recebe altura, largura e base de um triângulo e mostra ao usuário final.

~~~c++
#include <iostream>

using namespace std;

int main ()
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

## Exemplo Simples Comentado

Para não fugir muito do escopo, abaixo adiciono comentários detalhando o que cada linha do script acima realiza.

~~~c++
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
~~~
Código presente também na pasta examples como [triangulo_simples_comentado.cpp](https://github.com/casseb/cplusplus.example/blob/master/examples/triangulo_simples_comentado.cpp).

Para uma rápida execução e testes, é possível executar este código online diretamente pelo [Repl](https://repl.it/).

## Exemplo de uso de ponteiros no C++

Abaixo código exemplo com detalhes de como um ponteiro funciona e sua principal característica.

~~~c++
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
~~~
Código presente também na pasta examples como [ponteiro.cpp](https://github.com/casseb/cplusplus.example/blob/master/examples/ponteiro.cpp).

Para uma rápida execução e testes, é possível executar este código online diretamente pelo [Repl](https://repl.it/).

## Exemplo de uso de Struct

Abaixo código exemplo com detalhes de como uma struct funciona e suas principais características.

~~~c++
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
~~~
Código presente também na pasta examples como [struct.cpp](https://github.com/casseb/cplusplus.example/blob/master/examples/struct.cpp).

Para uma rápida execução e testes, é possível executar este código online diretamente pelo [Repl](https://repl.it/).
