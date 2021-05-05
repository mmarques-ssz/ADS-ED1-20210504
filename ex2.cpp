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
	data *phoje;
	
	hoje.dia = 4;
	hoje.mes = 5;
	hoje.ano = 2021;
	cout << "Hoje eh " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
	
	phoje = &hoje;
	cout << "Hoje eh " << (*phoje).dia << "/" << (*phoje).mes << "/" << (*phoje).ano << endl;
	
	cout << "Hoje eh " << phoje->dia << "/" << phoje->mes << "/" << phoje->ano << endl;
	
	
	return 0;
}