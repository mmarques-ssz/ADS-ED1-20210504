#include <iostream>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

// passagem de parâmetro por referência
void mostra_data(data &d)
{
	cout << "Hoje eh " << d.dia << "/" << d.mes << "/" << d.ano << endl;
}

void cria_data(data *d, int dia, int mes, int ano)
{
	d->dia = dia;
	d->mes = mes;
	d->ano = ano;
}

int main(int argc, char** argv)
{
	data hoje;
	cria_data(&hoje, 4, 5, 2021);
	mostra_data(hoje);
	return 0;
}