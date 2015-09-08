#include <stdio.h>
#include <iostream>
#include <math.h>

#define PI 3.14159265 // Criação e atribuição da constante PI

using namespace std;

int main(int argc, char *argv[]) {
	// Solução para erro na acentuação
	setlocale(LC_ALL, "PORTUGUESE");
	// Declaração de Variaveis
	float raio, resultado;
	//Prompt para receber o valor do Raio
	printf ("Digite o Valor do Raio: ");
  	// Recebe o valor digitado pelo usuário e atribui a variavel do Raio
	scanf ("%f", &raio);
	// Variavel que recebe o valor do calculo
	resultado = PI * (raio*raio);
	// Imprimi na tela o valor do resultado
	printf("Resultado: %4.2f", resultado);
	return 0;
}