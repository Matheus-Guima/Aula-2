//Matheus Guimar�es Rocha - Aula 02 - Exerc�cio 01
//C�digo base em C++
#include <iostream> 
#include <stdlib.h>
#include <time.h>
using namespace std;

//Prot�tido
int calculaMenor (int[], int); // Declarando a fun��o antes, entra com um vetor e um n�mero

//Prot�tipo 2, Gerar N�meros Aleat�rios
void gerarAleatorio (int numeros[], int qtdNum, int limte){
	srand(time(NULL));
	
	for(int j = 0; j<qtdNum; j++){
		numeros[j] = rand() % limte;
	}
}


// fun��o principal
int main() {
	//vari�veis 
	int a[100]; // Vari�vel que comporta 100 posi��es
	gerarAleatorio(a, 100, 1000);
	
	//S�ida de N�meros
	for(int i = 0; i<100; i++){
		cout << a[i]<<" - ";
	}
	
	//Sa�da Menor N�mero

	cout << "Menor: " << calculaMenor(a,100); // Sa�da mostrando menor n�mero
	return 0;
} // fim do main()

//Fun��o para menor Elemento, fun��o declarada no in�cio 
int calculaMenor(int a[], int n){
	int i, menor;
	menor = a[0]; // Recebe vetor na posi��o 0
	for(i=1; i<n; i++){
		if(a[i]< menor){
			menor = a[i];
		}
	}
	return menor;
}

