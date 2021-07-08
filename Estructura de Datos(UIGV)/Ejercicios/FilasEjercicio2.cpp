#include <conio.h>
#include <iostream.h>
#include <fstream.h>
using namespace std;

class ALUMNO{
  int codigo;
  char nombre[40];
  float promedio;
  public:
     void IngresarAlumno(){
         cout<<"\n leer codigo : ";cin>>codigo;
         cout<<"\n leer nombre : ";cin>>nombre;
         cout<<"\n leer promedio : ";cin>>promedio;
     }       
     void MostrarAlumno(){
         cout<<"\n "<<codigo<<"      "<<nombre<<"    "<<promedio; 
     }
     void REGISTRAR(char fila[],ALUMNO x){
       ofstream esc(fila,ios::app| ios::binary);
       if(!esc){  cout<<"\n ERROR al abrir "<<fila;getch();    }
       else{
          esc.write(reinterpret_cast<char *>(&x),sizeof(ALUMNO));
          esc.close();
       }
     }  
     void  VISUALIZAR(char fila[]){
        ALUMNO y;
        ifstream lec(fila);
        if(!lec){        cout<<"\n ERROR al abrir "<<fila;getch();     }
        else {
          cout<<"\n MOSTRANDO DATOS DEL ARCHIVO "<<fila;   
          lec.read(reinterpret_cast<char *>(&y),sizeof(ALUMNO));
          while(!lec.eof()){
            y.MostrarAlumno();
	        lec.read(reinterpret_cast<char *>(&y),sizeof(ALUMNO));
          }
	      lec.close();
        }
     } 
     bool PAR(float nota){
        while (nota>=2){
           nota-=2;   
        }      
        if(nota==0) return true;
        else return false;
     }     
     
     void SEPARAR(char fila1[],char fila2[],char fila3[]){
       ALUMNO y;
       ifstream F1(fila1);
       ofstream F2(fila2,  ios::out| ios::trunc|ios::binary);
       ofstream F3(fila3,  ios::out| ios::trunc|ios::binary);
       if(!F1){  cout<<"\n ERROR al abrir "<<fila3;getch();    }
       else{
             F1.read(reinterpret_cast<char *>(&y),sizeof(ALUMNO));
             while(!F1.eof()){
                if(PAR(y.promedio))              
                   F3.write(reinterpret_cast<char *>(&y),sizeof(ALUMNO));              
                else
                   F2.write(reinterpret_cast<char *>(&y),sizeof(ALUMNO));               
	            F1.read(reinterpret_cast<char *>(&y),sizeof(ALUMNO));
             }
	         F1.close();
             F2.close();    
             F3.close();
       }  
    }
};

int main(int argc, char *argv[]){
    char op;
    ALUMNO a;
    for(;;){
       cout<<" \n adicionar  fila1  <1>";
       cout<<" \n Mostrar    filas  <2>";
       cout<<" \n Separar    filas  <3>";
       cout<<" \n salir             <4>";
       op=getch();
       switch(op){
       case '1':a.IngresarAlumno();
                a.REGISTRAR("fila1",a);break;
       case '2':a.VISUALIZAR("fila1");
                a.VISUALIZAR("fila2");
                a.VISUALIZAR("fila3"); 
                getch(); break;
       case '3':a.SEPARAR("fila1","fila2","fila3");break;
       case '4':return 0;
       default: break;
       }
     }
}

