#include <iostream>
using namespace std;

/*
a) Registrar la carga de los empleados asignados a proyectos durante el mes de enero de 2024. Para
	ello se ingresan: día, ID del empleado y código del proyecto. En caso de un empleado nuevo, se
	deben ingresar todos sus datos. Si el empleado ya existe, debe reemplazar el código de proyecto
	anterior y actualizar la fecha de asignación al proyecto. La carga de datos finaliza con ID=0.
	
	--El primer archivo, denominado "EMPLEADOS.TXT", contiene los siguientes campos para cada
	--empleado: ID del empleado (alfanumérico), Apellido, Nombre, Fecha de Asignación al proyecto
	--(AAAA/MM/DD), Nivel de Experiencia (de 1 a 5 años) y código de proyecto al cual se encuentra
	--asignado.
*/




struct empleado {
	string id;
	string apellido;
	string nombre;
	string fechaA;    
	int nivelE;
	int codigoP;
};

int main() {
	int buscarIdE(id,e);
	void actulizarE(string fechaA, string id, int codigoP);
	void actulizarE(string fechaA, string id,  int codigoP, string apellido, string nombre, int nivelE);
	empleado e[100];
	int i = 0;
	string fechaA;
	int id;
	string codigoP;
	string apellido;
	string nombre;
	int nivelE;

	cout << "Ingrese Dia: ";
	getline(cin,fehcaA);
	cout << "Ingrese ID: ";
	cin>>id;
	while (e[i].id == "0") {
		
	 
	
		cout << "Ingrese codigo de proyecto: ";
		getline(cin,codigoP);
		if(buscarIdE==-1){
			cout << "Ingrese ID: ";
			getline(cin,apellido);
			cout << "Ingrese ID: ";
			getline(cin,nombre);
			cout << "Ingrese ID: ";
			cin>>nivelE;
			void actulizarE(fechaA, id, codigoP, apellido, nombre, nivelE, e[], cant);
			
		}else{
			void actulizarE(fechaA, id,codigoP);
	
		}
		
		i++;
		cout << "Ingrese ID: ";
		cout << "Ingrese ID: ";
	}
	
	int buscarIdE(string id, empleado e[], int cant) 
	{
		for (int i = 0; i < cant; i++) 
		{
			if (id == e[i].id) 
			{
				return i;   
			}
		}
		
		return -1;
	}
	void actulizarE(string fechaA, string id, int codigoP);
	{
		
		
	}
	void actulizarE(string fechaA, string id,  int codigoP, string apellido, string nombre, int nivelE, empleado e[], int cant));
	{
		
	}

	return 0;
}
