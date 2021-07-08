#include <conio.h>
#include <iostream>
#include <fstream>
using namespace std;

class MATRIZ{
  int QtyLineas;
  int QtyColumnas;
  int celdas[100][2];
  public:
     void IngresarMatriz(){
         int numlinea;
         int numcolumna;
         int poscelda;
         int valcelda;
         char ingresar = 'S';
         cout<<"\n RESTRICCION: TAMANO MAXIMO MATRIZ 10 X 10 \n";
         cout<<"\n ingresar cantidad de lineas : \t";cin>>QtyLineas;
         cout<<"\n ingresar cantidad de columnas : \t";cin>>QtyColumnas;
         int i=0,j=0;
         for (j=0;j<100;j++){
          celdas[j][0]=0;
          celdas[j][1]=0;
         }
         while ((ingresar == 'S') && (i < 100)) {
         cout<<"\n requiere ingresar valores de celdas : ";
         cout<<"\n Si (S) \n No (N) \n ";
         cin>>ingresar;
          if (ingresar == 'S') {
           cout<<"\n ingresar numero de linea : ";cin>>numlinea;
           cout<<"\n ingresar numero de columna : ";cin>>numcolumna;
           if ((numlinea < QtyLineas) && (numcolumna < QtyColumnas)) {
            poscelda = numlinea * QtyColumnas + numcolumna + 1;
            cout<<"\n ingresar valor de la celda : ";cin>>valcelda;
            celdas[i][0] = poscelda;
            celdas[i][1] = valcelda;
            i++;
           }
          }
         }
     }
         
     void MostrarMatriz(){
         int i=0;
         cout<<"\n "<<QtyLineas<<"      "<<QtyColumnas;
         while (( celdas[i][0] != 0) && (celdas[i][1] != 0) && (i < 100)){
          cout<<"\n "<<celdas[i][0]<<"      "<<celdas[i][1];
          i++;
         }
     }
     
     void REGISTRAR(char fila[],MATRIZ x){
       ofstream esc(fila,ios::out| ios::binary);
       if(!esc){  cout<<"\n ERROR al abrir "<<fila;getch();    }
       else{
          esc.write(reinterpret_cast<char *>(&x),sizeof(MATRIZ));
          esc.close();
       }
     }
     
     void  LEER(char fila[],MATRIZ y, int my[10][10], int &ly, int &cy){
        int i,j,k,posic,valor;
        ifstream lec(fila);
        if(!lec){        cout<<"\n ERROR al abrir "<<fila;getch(); }
        else {
          lec.read(reinterpret_cast<char *>(&y),sizeof(MATRIZ));
          while(!lec.eof()){
            lec.read(reinterpret_cast<char *>(&y),sizeof(MATRIZ));
          }
	      lec.close();
	      ly = y.QtyLineas;
	      cy = y.QtyColumnas;
	      i=0;
	      posic = y.celdas[i][0];
	      valor = y.celdas[i][1];
	      while (( posic != 0) && (valor != 0) && (i < 100) && (cy !=0)){
           if (posic <= cy) {
             j = 0;
             k= posic-1;
             }
             else if ((posic%cy)==0){
               j = (posic/cy)-1;
               k = cy-1;  
             }
             else {
              j = (posic/cy);
              k = (posic%cy)-1;
             }
           my[j][k] = y.celdas[i][1];
           i++;
           posic = y.celdas[i][0];
	       valor = y.celdas[i][1];
          }
	    }
     }
       
     void  ESCRIBIR(MATRIZ y, int my[10][10], int ly, int cy){
        int i,j;
        int k=0;
        for (j=0;j<100;j++){
          celdas[j][0]=0;
          celdas[j][1]=0;
         }
        QtyLineas = ly;
        QtyColumnas = cy;
        for (i=0;i<10;i++) {
         for (j=0;j<10;j++){
             if (my[i][j] != 0){
                celdas[k][0] = i*QtyColumnas+j+1;
                celdas[k][1] =  my[i][j];      
                k++;          
             }
         }
        }
     }
      
     void  VISUALIZAR(char fila[],MATRIZ y){
        ifstream lec(fila);
        if(!lec){        cout<<"\n ERROR AL ABRIR ARCHIVO "<<fila;getch();     }
        else {
          cout<<"\n MOSTRANDO DATOS DEL ARCHIVO "<<fila;   
          lec.read(reinterpret_cast<char *>(&y),sizeof(MATRIZ));
          while(!lec.eof()){
            y.MostrarMatriz();
	        lec.read(reinterpret_cast<char *>(&y),sizeof(MATRIZ));
          }
	      lec.close();
	      cout<<"\n ";
        }
     } 
};

int main(int argc, char *argv[]){
    char op;
    MATRIZ a,b,c;
    int ma[10][10], mb[10][10], mc[10][10];
    int la,ca,lb,cb,lc,cc;
    int i,j,k;
    for(;;){
       cout<<" \n Ingresar Matrices \t<1>";
       cout<<" \n Mostrar Matrices \t<2>";
       cout<<" \n Sumar Matrices \t<3>";
       cout<<" \n Multiplicar Matrices \t<4>";
       cout<<" \n Salir             \t<5>\n";
       op=getch();
       switch(op){
       case '1':
                a.IngresarMatriz();
                a.REGISTRAR("C:\\fila1",a);
                b.IngresarMatriz();
                b.REGISTRAR("C:\\fila2",b);
                break;
       case '2':
                a.VISUALIZAR("C:\\fila1",a);
                b.VISUALIZAR("C:\\fila2",b);
                getch(); break;
       case '3':
                for (i=0;i<10;i++){
                  for (j=0;j<10;j++){
                    ma[i][j]=0;
                    mb[i][j]=0;
                    mc[i][j]=0;
                  }
                }
               a.LEER("C:\\fila1",a,ma,la,ca);
               b.LEER("C:\\fila2",b,mb,lb,cb);
           
               if ((la == lb) && (ca == cb)) {
                 lc=la;
                 cc=ca;                  
                 for (i=0;i<10;i++){
                  for (j=0;j<10;j++){
                    if ((ma[i][j] != 0) || (mb[i][j] != 0)){
                      mc [i][j] = ma[i][j] + mb[i][j];
                    }
                  }
                 }
                
                 c.ESCRIBIR(c,mc,lc,cc);
                 c.REGISTRAR("C:\\fila3",c);
                 cout<<"\n MOSTRANDO DATOS DEL ARCHIVO SUMA "<<"C:\\fila3";
                 c.MostrarMatriz();
                 cout<<"\n ";
                }
                else {
                 cout<<"\n NO SE PUEDEN SUMAR PORQUE LAS MATRICES SON DE DIFERENTE TAMAÑO";   
                }
                getch();
                break;
       case '4':
                for (i=0;i<10;i++){
                  for (j=0;j<10;j++){
                    ma[i][j]=0;
                    mb[i][j]=0;
                    mc[i][j]=0;
                  }
                }
                a.LEER("C:\\fila1",a,ma,la,ca);
                b.LEER("C:\\fila2",b,mb,lb,cb);
                             
                if (ca == lb) {
                 lc=la;
                 cc=cb;                  
                 for (i=0;i<10;i++){
                  for (k=0;k<10;k++){
                   for (j=0;j<10;j++){
                    if ((ma[i][j] != 0) || (mb[j][k] != 0)){
                      mc[i][k] = mc[i][k] + ma[i][j] * mb[j][k];
                    }
                   }
                  }
                 }
                
                 c.ESCRIBIR(c,mc,lc,cc);
                 c.REGISTRAR("C:\\fila3",c);
                 cout<<"\n MOSTRANDO DATOS DEL ARCHIVO MULTIPLICACION "<<"C:\\fila3";
                 c.MostrarMatriz();
                 cout<<"\n ";
                }
                else {
                 cout<<"\n NO SE PUEDEN MULTIPLICAR PORQUE Nº COLUMNAS DE 1º MATRIZ ES DIFERENTE A Nº DE FILAS DE 2º MATRIZ";
                }
                getch();
                break;
       case '5':
                return 0;
       default: 
                break;
       }
     }
}
