//Matheus Guimarães Rocha - Aula 02 - Exercício 01
//Código base em C++
#include <iostream> 
#include <stdlib.h>
#include <time.h>
using namespace std;

//Protótido
int calculaMenor (int[], int); // Declarando a função antes, entra com um vetor e um número

//Protótipo 2, Gerar Números Aleatórios
void gerarAleatorio (int numeros[], int qtdNum, int limte){
	srand(time(NULL));
	
	for(int j = 0; j<qtdNum; j++){
		numeros[j] = rand() % limte;
	}
}


// função principal
int main() {
	//variáveis 
	int a[100]; // Variável que comporta 100 posições
	gerarAleatorio(a, 100, 1000);
	
	//Sáida de Números
	for(int i = 0; i<100; i++){
		cout << a[i]<<" - ";
	}
	
	//Saída Menor Número

	cout << "Menor: " << calculaMenor(a,100); // Saída mostrando menor número
	return 0;
} // fim do main()

//Função para menor Elemento, função declarada no início 
int calculaMenor(int a[], int n){
	int i, menor;
	menor = a[0]; // Recebe vetor na posição 0
	for(i=1; i<n; i++){
		if(a[i]< menor){
			menor = a[i];
		}
	}
	return menor;
}

