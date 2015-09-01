#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	string nome, primeiro;
	cout << "Digite um nome: ";
	cin >> nome;
	primeiro = nome;
	for (int i = 1; i < 5; i++)
	{
		cout << "Digite outro nome: ";
		cin >> nome;
		if (nome < primeiro)
		{
			primeiro = nome;
		}
	}
	cout << "O primeiro nome eh: " << primeiro << endl;
	system("pause");
	return 0;
}