#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, soma, raiz, op;
	cout<< "Menu" << endl;
	cout <<"1 - Somar dois n�meros." << endl;
	cout << "2 - Raiz quadrada de um n�mero." << endl;
	cout << "Digite sua op��o: ";
	cin >> op;
	if (op ==1){
		cout << "Op��o 1 escolhida: Somar dois n�meros." << endl;
		cout << "Escreva dois n�meros: ";
		cin >> a >> b;
		soma = a + b;
		cout << "Essa � a soma: " << soma;
	}
	else if(op == 2){
		cout << "Op��o 2 escolhida: Raiz quadrada de um n�mero." << endl;
		cout << "Insira um n�mero para fazer a raiz quadrada: ";
		cin >> raiz;
		cout << "A raiz de " << raiz << " �: " << sqrt(raiz);
		
	}
	else
		cout << "Op��o inv�lida.";
		return 0;
	
		
	
}
