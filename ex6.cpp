#include <iostream>
using namespace std;

struct data
{
	int dia;
	int mes;
	int ano;
};

void cria_data(data *d, int dia, int mes, int ano)
{
	d->dia = dia;
	d->mes = mes;
	d->ano = ano;
}

string gera_data(data &d)
{
	return to_string(d.dia) + "/" + to_string(d.mes) + "/" + to_string(d.ano);
}

data dia_seguinte(data d)
{
	data d1;
	int diasNoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	d1 = d;
	
	if (d1.ano % 4 == 0)
	{
		diasNoMes[1]++;
	}
	
	d1.dia++;
	if (d1.dia > diasNoMes[d1.mes-1])
	{
		d1.dia = 1;
		d1.mes++;
		if (d1.mes>12)
		{
			d1.mes = 1;
			d1.ano++;
		}
	}
	
	return d1; 
}

int main(int argc, char** argv)
{
	data dias_de_maio[31];
	
	cria_data(&dias_de_maio[0], 10, 5, 2021);
	
	for(int i=1; i<31; ++i)
	{
		dias_de_maio[i] = dia_seguinte(dias_de_maio[i-1]);
	}
	
	for(int i=0; i<31; ++i)
	{
		cout << gera_data(dias_de_maio[i]) << endl;
	}
	
	return 0;
}


