#include <iostream>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

// passagem de parâmetro por valor
void mostra_data1(data d)
{
	cout << "Hoje eh " << d.dia << "/" << d.mes << "/" << d.ano << endl;
}

// passagem de parâmetro por referência
void mostra_data2(data &d)
{
	cout << "Hoje eh " << d.dia << "/" << d.mes << "/" << d.ano << endl;
}

// passagem de parâmetro por ponteiro
void mostra_data3(data *d)
{
	cout << "Hoje eh " << d->dia << "/" << d->mes << "/" << d->ano << endl;
}


int main(int argc, char** argv)
{
	data hoje;
	data amanha;
	
	hoje.dia = 4;
	hoje.mes = 5;
    hoje.ano = 2021;
    
    mostra_data1(hoje);
    
    mostra_data2(hoje);
    
    mostra_data3(&hoje);
    
    amanha = hoje;
    amanha.dia++;
    mostra_data1(amanha);
    
	return 0;
}