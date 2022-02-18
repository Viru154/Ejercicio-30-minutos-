#include <iostream>
using namespace std;

class Persona {
	
	protected : 
	string nombres,apellidos,direccion,fn;
	int tel;

		protected :

		Persona(string no,string ap,string dir,int cel,string f){
		
			nombres = no;
			apellidos = ap;
			direccion = dir;
			tel = cel;
			fn = f;
		}
	void mostrar();
	void agregar();

};

