#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>

using namespace std;

void agendar();
void modificar();
void eliminar();
void vigentes();
void archivos();

int* i = 0;
int alta, * id, * nc, * idpaciente, * h, * h2;
float* put, * ct, * pu, * total, * subtotal, * iva;

string* nombre;
string* nametrat;
string* descrip;

int main()
{
	int opcion;
	cout << "####CITAS DENTALES####" << endl;
	cout << "   ***OPCIONES***" << endl;
	cout << " 1. Agendar cita " << endl;
	cout << " 2. Modificar cita " << endl;
	cout << " 3. Eliminar cita " << endl;
	cout << " 4. Lista de citas vigentes " << endl;
	cout << " 5. Limpiar pantalla " << endl;
	cout << " 6. Salir " << endl;
	cout << "\n";
	cout << "ingrese la opcion deseada" << endl;
	cin >> opcion;

	switch (opcion)
	{

	case 1:
		agendar();
		return main();
		break;
	case 2:
		modificar();
		return main();
		break;
	case 3:
		eliminar();
		return main();
		break;
	case 4:
		vigentes();
		return main();
		break;
	case 5:
		system("cls"); //("clear");
		return main();
		break;
	case 6:
		archivos();
		break;
	}
}

void agendar()
{

	int i = 0;
	cout << "Digite el num de citas que desea dar de alta" << endl;
	cin >> alta;
	nc = new int[alta];
	h = new int[alta];
	h2 = new int[alta];
	put = new float[alta];
	ct = new float[alta];
	pu = new float[alta];
	total = new float[alta];
	subtotal = new float[alta];
	iva = new float[alta];

	nametrat = new string[alta];
	descrip = new string[alta];
	nombre = new string[alta];

	for (i = 0; i < alta; i++)
	{
		cout << "Su id es:" << i + 1 << "\n";
		cout << "Ingrese el consecutivo numero de cita: " << endl;
		cin >> nc[i];
		while (getchar() != '\n');
		cout << "Ingrese el nombre del paciente:" << endl;
		getline(cin, nombre[i]);
		cout << "Ingrese las horas de la hora del tratamiento de 00 a 24 horas:" << endl;
		cin >> h[i];
		if (h[i] >= 24 or h[i] <= -1)
		{
			cout << "No se ingreso en el formato solicitado" << endl;
		}
		cout << "Ingrese los minutos de la hora del tratamiento de 0 a 59:" << endl;
		cin >> h2[i];
		if (h2[i] >= 60 or h2[i] <= -1)
		{
			cout << "No se ingreso en el formato solicitado" << endl;
		}
		cout << "Ingrese el Nombre del tratamiento:" << endl;
		cin.ignore();
		getline(cin, nametrat[i]);
		cout << "Ingrese la Descripcion:" << endl;
		getline(cin, descrip[i]);
		cout << "Ingrese el Precio unitario del tratamiento:" << endl;
		cin >> put[i];
		cout << "Ingrese cantidad del tratamiento:" << endl;
		cin >> ct[i];
		cout << "Ingrese el Precio unitario:" << endl;
		cin >> pu[i];
		subtotal[i] = ((ct[i]) * (pu[i]));
		iva[i] = subtotal[i] * .16;
		total[i] = iva[i] + subtotal[i];
		cout << "\n";
	}
}

void modificar()
{
	int i = 0, j, opcion;
	cout << "ingrese el id de la cita a modificar \n";
	cin >> j;
	j = j - 1;
	for (i = j; i <= j; i++)
	{
		nc[i] = i + 1;
		cout << "Numero de cita: " << nc[i] << endl;
		cout << "ingrese el Nuevo consecutivo numero de cita: \n";
		cin >> nc[i];
		cout << "ingrese el nombre del paciente: \n";
		cin.ignore();
		getline(cin, nombre[i]);
		cout << "Ingrese las horas de la hora del tratamiento de 00 a 24 horas:" << endl;
		cin >> h[i];
		if (h[i] > 24 or h[i] < -1)
		{
			cout << "No se ingreso en el formato solicitado:" << endl;
		}
		cout << "Ingrese los minutos de la hora del tratamiento de 0 a 59:" << endl;
		cin >> h2[i];
		if (h2[i] >= 60 or h2[i] <= -1)
		{
			cout << "No se ingreso en el formato solicitado" << endl;
		}
		cout << "ingrese el nombre del tratamiento: \n";
		cin.ignore();
		getline(cin, nametrat[i]);
		cout << "ingrese la descripcion: \n";
		getline(cin, descrip[i]);
		cout << "ingrese  el Precio unitario del tratamiento: \n";
		cin >> put[i];
		cout << "Ingrese cantidad del tratamiento: \n";
		cin >> ct[i];
		cout << "Ingrese el Precio unitario: \n";
		cin >> pu[i];
		subtotal[i] = ((ct[i]) * (pu[i]));
		iva[i] = (subtotal[i]) * (.16);
		total[i] = iva[i] + subtotal[i];
		cout << "\n";
	}
}

void eliminar()
{
	int j;
	cout << "ingrese el  registro a eliminar:" << endl;
	cin >> j;
	j = j - 1;
	for (int i = j; i == j; i++)
	{
		cout << "Eliminando registro" << j + 1 << endl;
		cout << "\n";
		nc[i] = 0;
		nombre[i] = " ";
		h[i] = 0;
		h2[i] = 0;
		nametrat[i] = " ";
		descrip[i] = " ";
		put[i] = 0;
		ct[i] = 0;
		pu[i] = 0;
		total[i] = 0;
	}
}

void vigentes()
{
	int i = 0;
	cout << "\t" << "***LISTA DE CITAS VIGENTES***" << endl;
	for (i = 0; i < alta; i++)
	{
		if (nc[i] == 0)
		{
			cout << "REGISTRO ELIMINADO" << i + 1 << endl;
		}
		else
		{
			cout << "\t" << " El id de alta es:" << i + 1 << "\n";
			cout << "\t" << "-Consecutivo Numero de Cita: " << nc[i] << endl;
			cout << "\t" << "-Nombre del Paciente: " << nombre[i] << endl;
			if (h[i] >= 24 or h[i] <= -1 and h2[i] >= 60 or h2[i] <= -1)
			{
				cout << "\t" << "-Horario: " << "Formato No Solicitado" << endl;
			}
			else
			{
				cout << "\t" << "-Horario: " << h[i] << ":" << h2[i] << endl;
			}
			cout << "\t" << "-Nombre del Tratamiento : " << nametrat[i] << endl;
			cout << "\t" << "-Descripcion: " << descrip[i] << endl;
			cout << "\t" << "-Precio unitario del tratamiento: " << put[i] << endl;
			cout << "\t" << "-Cantidad del tratamiento: " << ct[i] << endl;
			cout << "\t" << "-Precio Unitario: " << pu[i] << endl;
			cout << "\t" << "-Total: " << total[i] << endl;
			cout << "\n";
			cout << "\t****************************************" << endl;
			cout << "\t" << "\n";
		}
	}
}

void archivos()
{
	ofstream archivo;
	string nombrearchivo;
	int texto;
	string texto2;
	string texto3;
	string texto4;



	nombrearchivo = "CitasDentales";

	archivo.open(nombrearchivo.c_str(), ios::out);

	if (archivo.fail())
	{
		cout << "NO SE PUDO CREAR EL ARCHIVO";
		exit(1);
	}

	archivo << "CONSECUTIVO NUMERO DE CITA" << "\t";
	archivo << "\t" << "NOMBRE DEL PACIENTE" << "\t";
	archivo << "\t" << "\t" << "HORA DEL TRATAMIENTO" << "\t";
	archivo << "\t" << "NOMBRE DEL TRATAMIENTO" << "\t";
	archivo << "\t" << "DESCRIPCION" << "\t";
	archivo << "\t" << "PRECIO UNITARIO DEL TRATAMIENTO" << "\t";
	archivo << "\t" << "CANTIDAD DEL TRATAMIENTO" << "\t";
	archivo << "\t" << "PRECIO UNITARIO" << "\t";
	archivo << "\t" << "TOTAL" << "\n";

	for (int i = 0; i < alta; i++)
	{
		if (nc[i] == 0)
		{

		}
		else
		{
			texto = nc[i];
			archivo << "\t" << texto << "\t" << "\t";
			texto2 = nombre[i];
			archivo << "\t" << "\t" << texto2 << "\t" << "\t";
			texto = h[i];
			texto = h2[i];

			if (h[i] >= 24 or h[i] <= -1 and h2[i] >= 60 or h2[i] <= -1)
			{
				texto = h[i];
				archivo << "\t" << "Formato No solicitado";
				texto = h2[i];
				archivo << "." << "\t";

			}
			else
			{
				texto = h[i];
				archivo << "\t" << "\t" << texto << ":";
				texto = h2[i];
				archivo << texto << "\t " << "\t";
			}
			texto3 = nametrat[i];
			archivo << "\t" << "     " << texto3 << "\t " << "\t";
			texto4 = descrip[i];
			archivo << "\t" << texto4 << "\t " << "\t";
			texto = put[i];
			archivo << "\t" << "\t" << texto << "\t " << "\t";
			texto = ct[i];
			archivo << "\t" << "\t" << texto << "\t " << "\t";
			texto = pu[i];
			archivo << "\t" << "\t" << texto << "\t " << "\t";
			texto = total[i];
			archivo << "\t" << texto << "\t " << "\t" << endl;

		}

	}


	archivo.close();
}