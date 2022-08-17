/*****************************************************
Materia: Introduccion a HPC
Nombre estudiante: Steven Sebastian Florido Paez
Taller #1 en Lenguaje de Programacion en C++
Ejercicio #6
******************************************************/

#include <stdio.h>
#include <iostream>

void bienvenida()
{
	std::cout<<"====================================================\n"<<std::endl;
	std::cout<<"Este programa muestra los multiplos de 5 en un rango\n"<<std::endl;
	std::cout<<"====================================================\n"<<std::endl;
}

int intervaloa()
{
	int a;

	std::cout<<"\nIngrese primer valor del intervalo (inicio): ";
	std::cin>>a;
	
	return a;

}

int intervalob()
{
	int b;

	std::cout<<"\nIngrese segundo valor del intervalo (fin): ";
	std::cin>>b;
	return b;

}

void calculo(int a, int b)
{
	
	std::cout<<"\nMultiplos de 5 desde "<<a<<" hasta "<<b<<std::endl;
	
	for(int i=a;i<=b;i++)
	{
		if(i%5==0)
			std::cout<<"\n"<<i<<std::endl;
			
	}
}

int main(){
	
	int a,b;
	bienvenida();
	a=intervaloa();
	b=intervalob();
	
	if(a<b)
		calculo(a,b);
	else
		calculo(b,a);
	
	return 0;

} 	
