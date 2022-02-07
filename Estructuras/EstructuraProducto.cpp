/*	PROGRAMA	:	Almacen
	PROPOSITO	:	Guardar en un arreglo de resgistro los productos que se ofrecen en un supermercado
					por cada producto se registra el codigo, nombre, tipo, precio, cantidad, de acuerdo
					al tipo se calcula un porcentaje de descuento, como se muestra:
							Tipo		Descuento (%)
							A				15
							B				10
							C				5
					una vez guardado los datos de N productos simular la venta de cierta cantidad de un 
					tipo de producto de manera que se actualice el stock y se calcule el total a pagar.
	AUTOR		:	Yuliana Jauregui Rosas
	FECHA		:	18/06/2018
*/
#include<iostream>
using namespace std;
struct producto{
	int cod, cant;
	char nom[20], tipo;
	double precio, desc, pfinal;
};
void mostrarDatos(int n, producto p[20]);
void ingresarDatos(int &n, producto p[20]);
void realizarVenta(int n, producto p[20]);
int i;
int main(){
	producto p[20];
	int n;
	ingresarDatos(n, p);
	mostrarDatos(n, p);
	realizarVenta(n, p);
//	mostrarDatos(n, p);
}
void realizarVenta(int n, producto p[20]){
	int codigo, cantidad, sw=0;
	double pago;
	cout<<"Ingresar codigo del producto a vender: ";
	cin>>codigo;
	for(i=0; i<n; i++)
		if(codigo==p[i].cod){
			cout<<"Ingresar cantidad de productos que desea vender: ";
			cin>>cantidad;
			if(cantidad<=p[i].cant){
				p[i].cant=p[i].cant-cantidad;
				pago=p[i].pfinal*cantidad;
				cout<<"La cantidad que queda es "<<p[i].cant<<endl;
				cout<<"El pago es "<<pago<<endl;
			}
			else
				cout<<"Excede el stock"<<endl;
			sw=1;
		}
	if(sw==0)
		cout<<"No existe producto"<<endl;
}
void mostrarDatos(int n, producto p[20]){
	for(i=0; i<n; i++){
		cout<<p[i].cod<<"\t"
			<<p[i].nom<<"\t"
			<<p[i].tipo<<"\t"
			<<p[i].cant<<"\t"
			<<p[i].precio<<"\t"
			<<p[i].desc<<"\t"
			<<p[i].pfinal<<endl;
	}
}
void ingresarDatos(int &n, producto p[20]){
	cout<<"Ingresar cantidad de productos que se va a registrar: ";
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Ingresar codigo: ";
		cin>>p[i].cod;
		cout<<"Ingresar nombre: ";
		cin>>p[i].nom;
		cout<<"Ingresar tipo: ";
		cin>>p[i].tipo;
		cout<<"Ingresar cantidad: ";
		cin>>p[i].cant;
		cout<<"Ingresar precio: ";
		cin>>p[i].precio;
		switch(p[i].tipo){
			case 'A':p[i].desc=0.15*p[i].precio;	break;
			case 'B':p[i].desc=0.10*p[i].precio;	break;
			case 'C':p[i].desc=0.05*p[i].precio;	break;
		}
		p[i].pfinal=p[i].precio-p[i].desc;
	}
}
