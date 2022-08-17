/*****************************************************
Materia: Introduccion a HPC
Nombre estudiante: Steven Sebastian Florido Paez
Taller #1 en Lenguaje de Programacion en C++
Ejercicio #8
******************************************************/

#include <stdio.h>
#include <iostream>

void bienvenida()
{
	std::cout<<"======================================\n"<<std::endl;
	std::cout<<"Este programa calcula su numero Tarot\n"<<std::endl;
	std::cout<<"======================================\n"<<std::endl;
}

int dias()
{
	int dia;

	std::cout<<"\nIngrese numero de dia de nacimiento: ";
	std::cin>>dia;
	
	return dia;

}

int meses()
{
	int mes;

	std::cout<<"\nIngrese numero de mes de nacimiento: ";
	std::cin>>mes;
	
	return mes;

}

int anios()
{
	int anio;

	std::cout<<"\nIngrese numero de anio de nacimiento: ";
	std::cin>>anio;
	
	return anio;

}

bool condiciones(int dia, int mes, int anio)
{
	if(dia>0 && mes>0 && anio>0)
	{
		if(dia<=31 && mes<=12)
		{
			if(dia>29 && mes==2)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

void evaluar(int dia, int mes, int anio)
{
	int suma=0,suma2=0;
	
	suma=dia+mes+anio;
	
	do
	{
		suma2=0;
		while(suma>0)
		{
			suma2=suma2+suma%10;
			suma=suma/10;
		}
		suma=suma2;
	}while(suma2>10);
	
	std::cout<<"\nSu numero tarot es: "<<suma<<std::endl;
}

int main(){
	
	int dia,mes,anio;
	bool pasa=false;
	
	bienvenida();
	dia=dias();
	mes=meses();
	anio=anios();
	
	pasa=condiciones(dia,mes,anio);
	
	if(pasa)
	{
		evaluar(dia,mes,anio);
	}
	else
	{
		std::cout<<"\nUsted a ingresado una fecha no valida"<<std::endl;
	}
	
	return 0;
}
