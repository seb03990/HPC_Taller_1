/*****************************************************
Materia: Introduccion a HPC
Nombre estudiante: Steven Sebastian Florido Paez
Taller #1 en Lenguaje de Programacion en C++
Ejercicio #9
******************************************************/

#include <stdio.h>
#include <iostream>

void bienvenida()
{
	std::cout<<"=====================================================================\n"<<std::endl;
	std::cout<<"Este programa muestra un patron de numeros segun las filas ingresadas\n"<<std::endl;
	std::cout<<"=====================================================================\n"<<std::endl;
}

int infilas()
{
	int filas;

	std::cout<<"\nIngrese el numero de filas a imprimir: ";
	std::cin>>filas;
	
	return filas;

}

bool prueba(int filas)
{
	if(filas>10 && filas<21)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void calculo(int filas)
{
	for(int i=1; i<=filas;i++)
	{
		for(int h=i;h<=filas;h++)
		{
			std::cout<<"  ";
		}
		
		for(int j=i;j<=(2*i)-1;j++)
		{
			
			if(j>9)
			{
				std::cout<<j%10<<" ";
			}
			else
			{
				std::cout<<j<<" ";
			}
		}
		
		for(int k=(2*i)-2; k>=i;k--)
		{
			if(k>9)
			{
				std::cout<<k%10<<" ";
			}
			else
			{
				std::cout<<k<<" ";
			}
		}
		
		for(int f=i;f<=filas;f++)
		{
			std::cout<<" ";
		}
		
		std::cout<<std::endl;
	}
}

int main(){
	
	int filas;
	bool continuar=false;
	bienvenida();
	filas=infilas();
	continuar=prueba(filas);
	
	if(continuar)
	{
		calculo(filas);
	}
	else
	{
		std::cout<<"\nError, el numero minimo de filas es 11 y el numero maximo es 20"<<std::endl;
	}
	
	
	return 0;

} 
