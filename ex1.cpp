#include <iostream>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

int main(int argc, char** argv)
{
	data hoje;
	hoje.dia = 4;
	hoje.mes = 5;
	hoje.ano = 2021;
	
	cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
	
	return 0;
}

