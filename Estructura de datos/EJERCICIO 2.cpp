#include<iostream>
#include<iomanip>
//declaracion de funciones prototipo
void ingresarVector( int a[50], int &n);
void Merge (int a[],int b[ ],int n,int m ,int c[]);
void mostrarVector(int vec[50] , int numel);
using namespace std;
//definicion de funciones
void ingresarVector ( int a[50], int &n)
{
    //Definir variable
    int i;
    cout<<"Ingresar cantidad de elementos del vector: "<<endl;
    cin>>n;
    for ( i= 0; i<n;i++)
    {
        cout<<"Ingresar elemento"<<endl;
        cin>> a[i];
    }
}
void mostrarVector (int vec[50], int numel)
{
    //Definir variable
    int i;
    for(i=0;i<numel;i++)
     cout<<vec[i]<<setw(4);
     cout<<endl;
}

void Intercalar(int a[],int b[ ],int n,int m ,int c[])
{
   int i , j , k , p ;
   int aux=0;
   i = 0 ; j = 0 ; k = 0 ;
   while ( i < n && j < m )
   {
      if (aux==0)
      { c [ k ] = a [ i ] ; i++ ;
        aux=aux+1;
      }
      else
      if (aux==1)
      { c [ k ] = b [ j ] ; j++ ;
        aux=aux-1;
      }
      k++;
   }
   if ( i == n )
      for ( p = j ; p < m ; p++ ) { c [ k ] = b [ p ] ; k++ ; }
   else
      for ( p = i ; p < n ; p++ ) { c [ k ] = a [ p ] ; k++ ; }
}
//implementacion de la funcion principal
int main()
{
    // definir variables y vectores
    int n1,n2,a[50],b[50],c[100];
    ingresarVector(a,n1);
    ingresarVector(b,n2);
    cout<<"Vector A: " <<endl;
    mostrarVector(a,n1);
    cout<<"Vector B: " <<endl;
    mostrarVector(b,n2);
    int nt= n1+n2;
    cout<<"El vector producto de la intercalación es "<<endl;
    Intercalar(a,b,n1,n2,c);
    cout<<"Nuevo vector:" <<endl;
    mostrarVector(c,nt);
    return 0;
}
