/* Calculadora do chalie Brown 
   Opera��es Permitdas:
   + -> Adi��o 
   - -> Subtra��o
   * -> Multiplica��o 
   / -> Divis�o
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int ama1, ama2, resultado; 
	char op; // opera��o
	
	cout << "Digita o Numero macaco(a): ";
	cin >> ama1;
	cout << "Digita o segundo numero macaco(a): ";
	cin >> ama2;
	cout << "Digta a operacao BABACA ";
	cin >> op;
	
	switch(op)
	{
	case '+':
		resultado = ama1 + ama2;
		cout << "Chama: " << resultado << endl;
		break;  	
	case '-':
		resultado = ama1 - ama2;
		cout << "Chama: " << resultado <<endl;
	break;
	case '*': 
		 resultado = ama1 * ama2;
	 	 cout <<"Chaaaaaaama: " << resultado << endl;
	 break;
 	 case '/':
 	 	 resultado = ama1 / ama2;
	 	 cout <<"Chaaaaaama: " << resultado << endl;
	 break;
		
	} 
	return 0;
}