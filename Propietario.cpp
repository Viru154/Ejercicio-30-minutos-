#include "Persona.cpp"
#include <iostream>
using namespace std;

class Propietario : Persona { 
private : string nit;
private : double cui;

public : 
	Propietario(string no,string ap,string dir,int cel,string f,string nit,double cui) : Persona(no,ap,dir,cel,f){
	nit = nit;
	cui = cui;
};


	void setNombres(string no){nombres = no;}
	void setApellidos(string ap){apellidos = ap;}
	void setDireccion(string dir){direccion = dir;}
	void setFN(string f){fn = f;}
	void setTelefono(int cel){tel = cel;}
	void setNit(string nit){nit = nit;}
	void setCUI(double cui){cui = cui;}
	

	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFN(){return fn;}	
	int tel; gettel(){return tel;}
	string getNit(){return nit;}
	double getCui(){return cui;}
	
	void mostrar(){
		cout<<"____________"<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono"<<tel<<endl;
		cout<<"Nacimiento:"<<fn<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Cui:"<<cui<<endl;
		
	};	

};
