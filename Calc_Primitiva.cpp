#include <iostream>

using namespace std;

int main()
{
	string Op1 = "ADI", Op2 = "SUB", Op3 = "MUL", Op4 = "DIV";
	string Op1M = "adi", Op2M = "sub", Op3M = "mul", Op4M = "div";
	string Cancel = "EXIT";
	string CancelM = "exit";
	float Resultado, Valor1, Valor2;
	string EntradaUsuario;
	bool continuar = true;

	cout<<" Adição = ADI\n Subtração = SUB\n Multiplicação = MUL\n Divisão = DIV\n Cancelar = Exit\n ";

	cout<<"Escolha Uma das Operações: ";
	cin>>EntradaUsuario;
	
	if(EntradaUsuario == Cancel || EntradaUsuario == CancelM){
	    return 0;
	}
	else{
    //Adição
	if(EntradaUsuario == Op1 || EntradaUsuario == Op1M) {
		cout<<" Adição Selecionada\n Digite os dois Valores:\n";
		cout<<" Valor1: ";
		cin >> Valor1;
		cout<<" Valor2: ";
		cin >> Valor2;
		if (cin.fail()) {
            cout << "\nEntrada inválida. Apenas números são permitidos.\n";
            cin.clear();
		}
		else{
		Resultado = (Valor1 + Valor2);
		cout<<"O Resultado: "<<Resultado;
		}
	}
	
	//Subtração
	else if(EntradaUsuario == Op2 || EntradaUsuario == Op2M) {
		cout<<" Subtração Selecionada\n Digite os dois Valores:\n";
		cout<<" Valor1: ";
		cin >> Valor1;
		cout<<" Valor2: ";
		cin >> Valor2;
		
		if (cin.fail()) {
            cout << "\nEntrada inválida. Apenas números são permitidos.\n";
            cin.clear();
		}
		else{
		Resultado = (Valor1 - Valor2);
		cout<<"O Resultado: "<<Resultado;
        }
	
	
    //Multiplicação
	} else if(EntradaUsuario == Op3 || EntradaUsuario == Op3M) {
		cout<<" Multiplicação Selecionada\n Digite os dois Valores:\n";
		cout<<" Valor1: ";
		cin >> Valor1;
		cout<<" Valor2: ";
		cin >> Valor2;
		if (cin.fail()) {
            cout << "\nEntrada inválida. Apenas números são permitidos.\n";
            cin.clear();
		}
		else{
		Resultado = (Valor1 * Valor2);
		cout<<"O Resultado: "<<Resultado;
	    }
	
	
    //Divisão
	} else if(EntradaUsuario == Op4 || EntradaUsuario == Op4M) {
		cout<<" Divisão Selecionada\n Digite os dois Valores:\n";
		cout<<" Valor1: ";
		cin >> Valor1;
		cout<<" Valor2: ";
		cin >> Valor2;
		if (cin.fail()) {
            cout << "\nEntrada inválida. Apenas números são permitidos.\n";
            cin.clear();
		}
		else{
		Resultado = (Valor1 / Valor2);
		cout<<"O Resultado: "<<Resultado;
	    }
	}

	//ERRO de Operação
	else
	{
		cout<<"Operação Inválida";
	}
}
	return 0;
}