//Aula 02 - Exemplo01

#include <iostream>
using namespace std;

//protótipo da função
int maiorElemento (int[], int);
// Criar Funções Antes

//Função Principal
int main(){
	//variáveis
	int a[5];
	
	//entrada de dados
	a[0] = 10;
	a[1] = 35; 
	a[2] = 2;
	a[3] = 5;
	a[4] = 11;
	
	//Processamento e saída de dados
	cout<< "Maior: " << maiorElemento(a,5); // Chama a Função
	return 0;
	
}

//Função para maior elemento, recebe um vetor como parâmetro e um valor daquantidade de elementos que vai analisar
int maiorElemento (int arr[], int n){ 
	int maiorElemento = arr[0]; // variável c primeiro elemento do vetor
	
	//Guardar o maior elemento, com o For percorre da primeira posição até a última
	for (int i = 1; i<n; i++){
		if(arr[i] > maiorElemento){
			maiorElemento = arr[i];
		} // se o elemento for maior que o lemento que está na variável, será guardado ali
	}
	//retorna o valor do maior elemento
	return maiorElemento; 
}
