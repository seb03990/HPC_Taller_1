/*****************************************************
Materia: Introduccion a HPC
Nombre estudiante: Steven Sebastian Florido Paez
Taller #1 en Lenguaje de Programacion en C++
Ejercicio #7
******************************************************/

#include <stdio.h>
#include <iostream>

void bienvenida()
{
	std::cout<<"============================================\n"<<std::endl;
	std::cout<<"     Este programa evalua la serie: \n"<<std::endl;
	std::cout<<"sumatoria desde a=0 hasta b con  1/(x+a*y)\n"<<std::endl;
	std::cout<<"============================================\n"<<std::endl;
}

float intervalob()
{
	float b;

	std::cout<<"\nIngrese valor para 'b': ";
	std::cin>>b;
	
	return b;

}

float intervalox()
{
	float x;

	std::cout<<"\nIngrese valor para 'x': ";
	std::cin>>x;
	
	return x;

}

float intervaloy()
{
	float y;

	std::cout<<"\nIngrese valor para 'y': ";
	std::cin>>y;
	
	return y;

}

void calculo(float b, float x, float y)
{
	float suma=0;
	
	for(int i=0;i<=b;i++)
	{
		suma=suma+(1/(x+i*y));
	}
	
	std::cout<<"El resultado de la sumatoria es: "<<suma<<std::endl;
}

int main(){
	
	float b,x,y;
	bienvenida();
	b=intervalob();
	x=intervalox();
	y=intervaloy();
	
	calculo(b,x,y);
	
	return 0;

} 
