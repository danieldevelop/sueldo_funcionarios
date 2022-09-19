#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double funcionarios[3][4];
	double sueldoBruto = 0;
	double ips = 0;
	double sueldoNeto = 0;
	
	cout << " ==== CARGA DE FUNCIONARIOS ==== \n" << endl;
	for (int i=0; i<3; i++) {
		cout << " Numero de cedula: " << endl;
		cin >> funcionarios[i][0];
		
		cout << " Sueldo bruto: " << endl;
		cin >> funcionarios[i][1];
		sueldoBruto = funcionarios[i][1];
		
		ips = (sueldoBruto * 10) / 100;
		funcionarios[i][2] = ips;
		
		sueldoNeto = sueldoBruto - ips;
		funcionarios[i][3] = sueldoNeto;
	}
	
	cout << "\n ==== CARGA DE FUNCIONARIOS ====" << endl;
	for (int i=0; i<3; i++) { // recorremos la fila del elmento padre
		cout << "Cedula: " << (int)funcionarios[i][0] << endl;
		cout << "Sueldo Bruto: " << funcionarios[i][1] << endl;
		cout << "IPS: " << funcionarios[i][2] << endl;
		cout << "Sueldo Neto: " << funcionarios[i][3] << "\n" << endl;
	}
	
	getche();
	return 0;
}
