//Aula 02 - Exemplo01

#include <iostream>
using namespace std;

//prot�tipo da fun��o
int maiorElemento (int[], int);
// Criar Fun��es Antes

//Fun��o Principal
int main(){
	//vari�veis
	int a[5];
	
	//entrada de dados
	a[0] = 10;
	a[1] = 35; 
	a[2] = 2;
	a[3] = 5;
	a[4] = 11;
	
	//Processamento e sa�da de dados
	cout<< "Maior: " << maiorElemento(a,5); // Chama a Fun��o
	return 0;
	
}

//Fun��o para maior elemento, recebe um vetor como par�metro e um valor daquantidade de elementos que vai analisar
int maiorElemento (int arr[], int n){ 
	int maiorElemento = arr[0]; // vari�vel c primeiro elemento do vetor
	
	//Guardar o maior elemento, com o For percorre da primeira posi��o at� a �ltima
	for (int i = 1; i<n; i++){
		if(arr[i] > maiorElemento){
			maiorElemento = arr[i];
		} // se o elemento for maior que o lemento que est� na vari�vel, ser� guardado ali
	}
	//retorna o valor do maior elemento
	return maiorElemento; 
}
