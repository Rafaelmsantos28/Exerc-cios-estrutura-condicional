#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	cout << "Digite dois numeros: ";
	cin >> a >> b;
	if (a>b)
		cout << a << " � maior que " << b;
	else if(b>a)
		cout << b << " � maior que " << a;
	else
		cout << a << " � igual a " << b;
	return 0;
}
