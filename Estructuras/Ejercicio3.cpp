/*	PROGRAMA	:	Almacen
	PROPOSITO	:	Una botique de ropa guarda en un arreglo de registro los productos que ofrece, por cada
					producto se ingresa el codigo, tipo, precio, la botique ofrece descuentos de 
					acuerdo al tipo, como se muetra:
							tipo		descuento(%)
							Polo			5
							Vestido			15
							Casaca			10
							Pantalon		12
					Calcular el monto final de cada producto.
					
	AUTOR		:	Yuliana Jauregui Rosas
	FECHA		:	18/06/2018
*/#include<iostream>
using namespace std;
struct prenda{
	int cod;
	char tipo;
	double prec, desc, pfin;
};
void mostrarDatos(int n, prenda p[20]);
void calcularPrecioFinal(int n, prenda p[20]);
void ingresarDatos(int &n, prenda p[20]);
int i;
int main(){
	prenda p[20];
	int n;
	ingresarDatos(n, p);
	calcularPrecioFinal(n, p);
	mostrarDatos(n, p);
}
void mostrarDatos(int n, prenda p[20]){
	cout<<endl;
	for(i=0; i<n; i++){
		cout<<p[i].cod<<"\t"
			<<p[i].tipo<<"\t"
			<<p[i].prec<<"\t"
			<<p[i].desc<<"\t"
			<<p[i].pfin<<endl;
	}		
}
void calcularPrecioFinal(int n, prenda p[20]){
	for(i=0; i<n; i++){	
		switch(p[i].tipo){
			case 'P': p[i].desc=0.05*p[i].prec;		break;
			case 'V': p[i].desc=0.15*p[i].prec;		break;
			case 'C': p[i].desc=0.10*p[i].prec;		break;
			case 'L': p[i].desc=0.12*p[i].prec;		break;
		}
		p[i].pfin=p[i].prec-p[i].desc;
	}		
}
void ingresarDatos(int &n, prenda p[20]){
	cout<<"Ingresar cantidad de prendas: ";
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"Ingresar codigo: ";
		cin>>p[i].cod;
		cout<<"Ingresar tipo: ";
		cin>>p[i].tipo;
		cout<<"Ingresar precio: ";
		cin>>p[i].prec;
	}	
}
