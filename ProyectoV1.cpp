#include <iostream>
using namespace std;
int main()
{
	int agoc;
	int opcion;
	int salir, exit;
	int nc, lcv;
	char name[50];
	float h;
	char nametrat[50];
	char descrip[100];
	float put, ct, pu, total;


	do
	{
		cout << "***OPCIONES***" << endl;
		cout << " 1. Agendar cita " << endl;
		cout << " 2. Modificar cita " << endl;
		cout << " 3. Eliminar cita " << endl;
		cout << " 4. Lista de citas vigentes " << endl;
		cout << " 5. Limpiar pantalla " << endl;
		cout << " 6. Salir " << endl;


		cout << " :Ingrese la opcion deseada:" << endl;
		cin >> opcion;

		switch (opcion)
		{
			do
			{
		case 1:
			cout << "Ingrese el consecutivo numero de cita " << endl;
			cin >> nc;
			cout << "Ingrese el nombre del paciente" << endl;
			cin >> name;
			cout << "Ingrese la hora del tratamiento (En formato 24hrs.)" << endl;
			cin >> h;
			cout << "Ingrese el Nombre del tratamiento" << endl;
			cin >> nametrat;
			cout << "Ingrese la Descripcion" << endl;
			cin >> descrip;
			cout << "Ingrese el Precio unitario del tratamiento" << endl;
			cin >> put;
			cout << "Ingrese cantidad del tratamiento" << endl;
			cin >> ct;
			cout << "Ingrese el Precio unitario" << endl;
			cin >> pu;
			total = ct *put + pu;
			cout << "El total es " << total << endl;
			cout << " Quiere agendar otra cita?" << endl;
			cout << "1. Si " << endl;
			cout << "2. No" << endl;
			cin >> agoc;
			} while (agoc == 1);

			break;
		case 2:
			cout << "Modificar cita" << endl;
			break;
		case 3:
			cout << "Eliminar la cita" << endl;
			break;
		case 4:
			cout << "Lista de citas vigentes" << endl;
			cin >> lcv;
			break;
		case 5:
			cout << "Limpiar la pantalla" << endl;
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
