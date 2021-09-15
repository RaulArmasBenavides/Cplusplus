/*	PROGRAMA	:	Boleta
	PROPOSITO	:	Crear una arreglo de registros anidados para guardar N boletas de venta
													descripcion
					nro		cliente	m	producto	cantidad	precio		subtotal
					100		Carlos	3	atun		2			3.50		7.00
										fideos		3			1.20		3.60
										leche		1			3.80		3.80
					200		Maria	2	harina		1			5.50		5.50
										atun		3			3.50		10.50
	
	
	
	AUTOR		:	Yuliana Jauregui Rosas
	FECHA		:	18/06/2018
*/
#include<iostream>
using namespace std;
struct descripcion{
	char nom[20];
	int cant;
	double prec, stot;
};
struct boleta{
	int cod, m;
	char nom[20];
	descripcion des[20];
};
void ingresarDatos(int &n, boleta b[20]);
void mostrarDatos(int n, boleta b[20]);
int i, j;
int main(){
	boleta b[20];
	int n;
	ingresarDatos(n, b);
	mostrarDatos(n, b);	
}
void mostrarDatos(int n, boleta b[20]){
	for(i=0; i<n; i++){
		cout<<endl
			<<"-----------------------------------"<<endl
			<<"Nro de boleta: "<<b[i].cod<<endl
			<<"Cliente: "<<b[i].nom<<endl
			<<"-----------Descripcion ------------"<<endl;
		for(j=0; j<b[i].m; j++)
			cout<<b[i].des[j].nom<<"\t"
				<<b[i].des[j].cant<<"\t"
				<<b[i].des[j].prec<<"\t"
				<<b[i].des[j].stot<<endl<<endl;
	}
}
void ingresarDatos(int &n, boleta b[20]){
	cout<<"Ingresar cantidad de boletas: ";
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Ingresar codigo de la boleta: ";
		cin>>b[i].cod;
		cout<<"Ingresar nombre del cliente: ";
		cin>>b[i].nom;
		cout<<"Ingresar cantidad de productos en descripcion: ";
		cin>>b[i].m;
		for(j=0; j<b[i].m; j++){
			cout<<"Ingresar producto: ";
			cin>>b[i].des[j].nom;
			cout<<"Ingresar cantidad: ";
			cin>>b[i].des[j].cant;
			cout<<"Ingresar precio: ";
			cin>>b[i].des[j].prec;
			b[i].des[j].stot=b[i].des[j].prec*b[i].des[j].cant;
		}
	}
}
