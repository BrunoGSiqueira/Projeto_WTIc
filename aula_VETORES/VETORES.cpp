#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
	//EXEMPLO 1 - CADASTRAR NÚMEROS POSITIVOS EM 10 POSIÇÕES DE VETORES E EXÍBI-LOS
	cout<<"EXEMPLO 1"<<endl;
	int X[10];
	
	for(int i = 0; i<10; i++)
	{
		cin>>X[i];
		if( X[i] <= 0 )
		{
			X[i] = 1;
		}
	}
	for(int i = 0; i<10; i++)
	{
			X[i] = 1 ;
			cout<<"X["<<i<<"] = "<<X[i]<<endl;	
	}
	
	//EXEMPLO 2
	cout<<"EXEMPLO 2"<<endl;
	int N[10], valor;
	cin>>valor;
	N[0] = valor;
	cout<<"N[0] = "<<N[0]<<endl;

	for(int i = 1; i<10; i++)
	{
		N[i] = N[i - 1]*2;
		cout<<"N["<<i<<"] = "<<N[i]<<endl;
	}
	
	//EXEMPLO 3 - FIBONACCI
		cout<<"EXEMPLO 3"<<endl;
	int roda, valores, fib[61];
	
	fib[0] = 0;
	fib[1] = 1;
	
	for(int i = 2; i<=60; i++)
	{
		fib[1] = fib [i - 1] + fib [i - 2];
	}
	
	cin>>roda;
	for (int j = 0; j<roda; j++)
	{
		cin>>valores;
		
		cout<<"Fib ("<<valores<<") = "<<fib[valores]<<endl; 
	}
	
	//EXEMPLO 4
	cout<<"EXEMPLO 4"<<endl;
	int valor, v[1000];
	
	cin>valor;
	for(int = 0; i<1000; i++)
	{
		v[i]= 1%valor;
	}
	
	for(int i = 0; i<1000; i++)
	{
		cout<<"N["<<i<<"] = "<<v[i]<<endl;
	}
	
	return 0;
}
