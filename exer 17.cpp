#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, x, delta, x1, x2;
	cout << "Insira a vari�vel a: " << endl;
	cin >> a;
	if(a==0)
		cout << "N�o pode ser igual a zero.";
	cout << "Insira a vari�vel b: " << endl;
	cin>>b;
	cout << "insira a vari�vel c: "<< endl;
	cin >> c;
	delta = pow(b,2.0) - (4.0 * a * c);
	if(delta<0){
	
		cout << "N�o existe raiz real";
		return 1;
	}
	else if(delta==0)
	{
		cout << "Existe uma raiz real" << endl;
		x = (-b)/(2.0*a);
		cout << "Essa � a raiz: " << x;
	}
	else{
	
		cout << "Existe duas ra�zes" << endl;
		x1 = ( (-b+sqrt(delta))/(2.0*a));
		x2 = ( (-b-sqrt(delta))/(2.0*a));
		cout << "Primeira raiz: " << x1 << endl;
		cout << "Segunda raiz: " << x2;
	}
	
	
	
	
	return 0;
}
