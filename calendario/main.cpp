#include <iostream>
#include <string>

using namespace std;

int zeller(int anio, int mes, int opcion)
{
	int a 	= (14-mes) / 12;
	int y 	= (anio - a);
	int m 	= mes + 12 * a - 2;
	int d 	= (1 + y + y / 4 - y / 100 + y / 400 + (31 * m)/12) % 7;
	return (opcion == 0) ? d : d-1;
}

bool esBisiesto(int anio)
{
	return (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
}

int cantidadDias(int anio, int mes)
{

	if(mes == 4 || mes == 7 || mes == 9 || mes == 11)
		return 30;

	else if(mes == 2)
		return esBisiesto(anio) ? 29 : 28;

	return 31;
}

string nombreMes(int mes)
{
	string arr[12] =
	{
		"Enero"		,"Febrero"	,"Marzo",
		"Abril"		,"Mayo"		,"Junio",
		"Julio"		,"Agosto"	,"Septiembre",
		"Octubre"	,"Noviembre","Diciembre"
	};
	return arr[mes-1];
}

void escogeOpciones(int opcion)
{
	if(opcion==0)
		cout << "	Dom Lun Mar Mie Jue Vie Sab" 	<< "\n\n";
	else if(opcion==1)
		cout << "	Lun Mar Mie Jue Vie Sab Dom" 	<< "\n\n";
	else if(opcion==2)
		cout << "	L   M   X   J   V   S   D " 	<< "\n\n";
}

void calendario(int anio, int mes)
{
	
	//for(int mes = 1 ; mes <= 12 ; mes++) 
	
	cout << "Mes: " << nombreMes(mes) << "\n\n";
	int z = zeller(anio, mes, 0);

	escogeOpciones(0);

	for (int i = 0 ; i < z ; i++)
	{
		cout << "    ";
	}
	int diasMes = cantidadDias(anio,mes);
	for (int dia = 1 ; dia <= diasMes ; dia++)
	{
		cout << "	" << dia << " "; 
		z++;
		if(z % 7 == 0)
			cout << endl;
	}
	cout << "\n\n" ;
}


int main()
{
	int mes, anio, opcion;
	anio 	= 1993;
	mes  	= 12;

	cout << "Anio " << anio << endl;

	calendario(anio, mes);

	return 0;
}