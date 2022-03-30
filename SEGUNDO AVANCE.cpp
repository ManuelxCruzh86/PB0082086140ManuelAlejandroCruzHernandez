#include <iostream>
using namespace std;
struct info
{
	int id;
	int nc;
	char name[50];
	char h[6];
	char nametrat[50];
	char descrip[100];
	float put, ct, pu, total;
	int idpaciente;

};
int main()
{
	info altacita[3];
	int i;
	int j;
	int opcion;
	int salir, exit;
	int lcv;


	do
	{
		cout << "####CITAS DENTALES####" << endl;
		cout << "   ***OPCIONES***" << endl;
		cout << " 1. Agendar cita " << endl;
		cout << " 2. Modificar cita " << endl;
		cout << " 3. Eliminar cita " << endl;
		cout << " 4. Lista de citas vigentes " << endl;
		cout << " 5. Limpiar pantalla " << endl;
		cout << " 6. Salir " << endl;
		cout << "\n";


		cout << " :Ingrese la opcion deseada:" << endl;
		cin >> opcion;

		switch (opcion)
		{

		case 1:
			for (i = 0; i < 3; i++)
			{
				cout << "Su id es:" << i + 1 << "\n";
				cout << "Ingrese el consecutivo numero de cita " << endl;
				cin >> altacita[i].nc;
				cout << "Ingrese el nombre del paciente" << endl;
				cin >> altacita[i].name;
				cout << "Ingrese la hora del tratamiento (En formato 24hrs.)" << endl;
				cin >> altacita[i].h;
				cout << "Ingrese el Nombre del tratamiento" << endl;
				cin >> altacita[i].nametrat;
				cout << "Ingrese la Descripcion" << endl;
				cin >> altacita[i].descrip;
				cout << "Ingrese el Precio unitario del tratamiento" << endl;
				cin >> altacita[i].put;
				cout << "Ingrese cantidad del tratamiento" << endl;
				cin >> altacita[i].ct;
				cout << "Ingrese el Precio unitario" << endl;
				cin >> altacita[i].pu;
				cout << "Ingrese el total \n";
				cin >> altacita[i].total;
				cout << "\n";

			}

			break;
		case 2:
			cout << "ingrese el id de la cita a modificar \n";
			cin >> j;
			j = j - 1;
			for (i = j; i <= j; i++)
			{

				altacita[i].nc = i + 1;
				cout << "Numero de cita: " << altacita[i].nc << endl;
				cout << "ingrese el Nuevo consecutivo numero de cita \n";
				cin >> altacita[i].nc;
				cout << "ingrese el nombre del paciente \n";
				cin >> altacita[i].name;
				cout << "ingrese el horario del tratamiento (en formato 24hrs.) \n";
				cin >> altacita[i].h;
				cout << "ingrese el nombre del tratamiento \n";
				cin >> altacita[i].nametrat;
				cout << "ingrese la descripcion \n";
				cin >> altacita[i].descrip;
				cout << "ingrese  el Precio unitario del tratamiento \n";
				cin >> altacita[i].put;
				cout << "Ingrese cantidad del tratamiento \n";
				cin >> altacita[i].ct;
				cout << "Ingrese el Precio unitario \n";
				cin >> altacita[i].pu;
				cout << "Ingrese el total \n";
				cin >> altacita[i].total;
				cout << "\n";

			}
			break;
		case 3:
			cout << "Eliminar la cita" << endl;
			break;
		case 4:
			cout << "\t" << "***LISTA DE CITAS VIGENTES***" << endl;
			for (i = 0; i < 3; i++)
			{

				cout << "\t" << " El id de alta es:" << i + 1 << "\n";
				cout << "\t" << "-Consecutivo Numero de Cita: " << altacita[i].nc << endl;
				cout << "\t" << "-Nombre del Paciente: " << altacita[i].name << endl;
				cout << "\t" << "-Horario: " << altacita[i].h << endl;
				cout << "\t" << "-Nombre del Tratamiento : " << altacita[i].nametrat << endl;
				cout << "\t" << "-Descripcion: " << altacita[i].descrip << endl;
				cout << "\t" << "-Precio unitario del tratamiento: " << altacita[i].put << endl;
				cout << "\t" << "-Cantidad del tratamiento: " << altacita[i].ct << endl;
				cout << "\t" << "-Precio Unitario: " << altacita[i].pu << endl;
				cout << "\t" << "-Total: " << altacita[i].total << endl;
				cout << "\n";
				cout << "\t****************************************" << endl;
				cout << "\t" << "\n";
			}
			break;
			break;
		case 5:
			system("cls"); //"clear"
			return main();
			break;
		case 6:
			cout << "Estas Seguro que Quieres salir?" << endl;
			cout << "1. Si" << endl;
			cout << "2. No" << endl;
			cin >> exit;
			if (exit == 1)
			{
				return 0;
			}
			else
			{
				return main();
			}
			break;

		default:
			cout << "La opcion elegida no es valida" << endl;
		}
		cout << "Ingrese 1 Para Volver al menu" << endl;
		cout << "Ingrese 2 Para Salir" << endl;
		cin >> salir;

	} while (salir == 1);

}