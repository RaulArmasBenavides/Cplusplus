#include<iostream>
using namespace std;
//declaracion de funciones prototipo
void LeerNumero (int *n);
int DigitoMayorMenor(int *n,int *dmay,int dmen ,int *nn);
void PrintResultado( int *n ,int *dma,int *dme,int *nue,int *k);
//definicion de funciones
void LeerNumero (int *n)
{ do
  { cout<<endl<<"Ingrese numero : ";
    cin>>*n;
  }
  while(*n<=10);
  cout<<endl;
}
int DigitoMayorMenor(int *n,int *dmay,int *dmen ,int *nn)
{ int a,*i,b;
  *dmay=-10;
  *dmen=10;
  *nn=0;
  a=*n;
  i=&b;
  *i=0;
  while(*n>0)
  {
      *nn=(*nn)*10 + *n%10;
      if(*n%10 > *dmay)
        *dmay=*n%10;
      if(*n%10 < *n%10)
        *dmen=*n%10;
       *i= *i+1;
       *n/=10;
  }
    *n=a;
    return *i;
}
void PrintResultado( int *n ,int *dma,int *dme,int *nue,int *k)
{
    cout<<endl;
    cout<<"Numero actual es  = "<<*n<<endl;
    cout<<"Numero generado es = "<<*nue<<endl;
    cout<<"EL digito mayor es = "<<*dma<<endl;
    cout<<"El digito menor es = "<<*dme<<endl;
    cout<<"Cantidad de digitos es = "<<*k<<endl;
}
//implementacion de la funcion principal
int main()
{ int num,may,men,nuevo,cont;
 LeerNumero(&num);
 cont=DigitoMayorMenor(&num,&may,&men,&nuevo);
 PrintResultado(&num,&may,&men,&nuevo,&cont);
return 0;
}
