#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int cod, sal1, sal2, sal3, sal4, sal5, aum1, aum2, aum3, aum4, aum5, sal1f, sal2f, sal3f, sal4f, sal5f;
	cout << "Insira um c�digo:\n" << endl;
	cout << "1. Escritu�rio" <<endl;
	cout << "2. Secret�rio" << endl;
	cout << "3. Caixa" << endl;
	cout << "4. Gerente" << endl;
	cout << "5. Diretor \n" << endl;
	cin >> cod;
	switch(cod){
		case 1:
		cout << "Cargo: Escritu�rio" << endl;
		cout << "Digite o sal�rio atual: ";
		cin >> sal1;
		aum1 = sal1 * 0.5;
		sal1f = sal1 + aum1;
		cout << "Esse � seu aumento: " <<aum1 <<endl;
		cout << "Esse � o seu sal�rio final: " << sal1f << endl;
		break;
	
		case 2:
		cout << "Cargo: Secret�rio" << endl;
		cout << "Digite o sal�rio atual: ";
		cin >> sal2;
		aum2 = sal2 * 0.35;
		sal2f = sal2 + aum2;
		cout << "Esse � seu aumento: " <<aum2 <<endl;
		cout << "Esse � o seu sal�rio final: " << sal2f << endl;
		break;

		case 3:
		cout << "Cargo: Caixa" << endl;
		cout << "Digite o sal�rio atual: ";
		cin >> sal3;
		aum3 = sal3 * 0.2;
		sal3f = sal3 + aum3;
		cout << "Esse � seu aumento: " <<aum3 <<endl;
		cout << "Esse � o seu sal�rio final: " << sal3f << endl;
		break;
	
		case 4:
		cout << "Cargo: Gerente" << endl;
		cout << "Digite o sal�rio atual: ";
		cin >> sal4;
		aum4 = sal4 * 0.1;
		sal4f = sal4 + aum4;
		cout << "Esse � seu aumento: " <<aum4 <<endl;
		cout << "Esse � o seu sal�rio final: " << sal4f << endl;
		break;
	
		case 5:
		cout << "Cargo: Diretor" << endl;
		cout << "Digite o sal�rio atual: ";
		cin >> sal5;
		
		cout << "Esse � seu aumento: Sem aumento" <<endl;
		cout << "Esse � o seu sal�rio final: " << sal5 << endl;
		break;
	
		default:
		cout << "Op��o inv�lida";
	}
	
	
	return 0;
}
