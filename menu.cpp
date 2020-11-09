#import<iostream>
#import<fstream>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"Elija una opcion: "<<endl; 
	cout<<"1. Quien es el alumno mas viejo?"<<endl;
	cout<<"2. Que alumnos cumplen anos este mes?"<<endl; 
	cout<<"3. Listado de Alumnos de expediente par."<<endl;
	cout<<"4. Listado de Alumnos de expediente impar."<<endl;
	cout<<"5. Porcentaje de alumnos que han entregado la actividad 1."<<endl;
	 cout<<"6. Lista de los alumnos asistentes  clase y a la modalidad hyflex."<<endl;
	cin>>numero;
	
	switch(numero){
		
		case 1:  
		break;
		case 2: 
		break;
		case 3: 
		void lectura(); 
		break;
		case 4: 
		break;
		case 5:
		break;
		case 6: 
		default: cout<<"No esta en el rango de 1 a 5...";
	}
	
	return 0;
}
