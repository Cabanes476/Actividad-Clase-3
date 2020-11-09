#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

int main(){

	string nombre;
	string apellido;
	string mail;
	string git;
	bool repite;
	bool a1;
	bool enClase;
	bool exp;
	int numExp;
	int nivel;
	int year;
	int mes;
	int tUsuarios;
	string fecha;
	string hora;
	
	ifstream fin("alumnos.txt");//Declaramos fin como variable de entrada
	ofstream fout("salida.txt");//Declaramos fout como variable de salida
	ofstream fbin("salida.bec",ios::out | ios::binary);//Variable binaria
	
	
	try{ 
		cout<<"El alumno mas mayor es:"<<endl;
		while(!fin.eof()){
			fin>>fecha>>hora>>mail>>nombre>>apellido>>repite>>numExp>>git>>nivel>>exp>>a1>>mes>>year>>enClase;
			if(year==1998){
				cout<<nombre<<" "<<apellido;
			}
			
			} 
			
		}
	
	catch(...){
		fbin.close();
		fin.close();
		//cout.close();
		cout<< "FIN DE ARCHIVO / Se ha generado el archivo binario de aceptados"<<endl;
	}
}
