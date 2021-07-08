

#include <conio.h>
#include <iostream.h>
#include <fstream.h>


class ENTERO{
  int numero;
  
  public:
     void Ingresar(){
         cout<<"\n leer numero : ";cin>>numero;
     }       
     void Mostrar(){
         cout<<"\n "<<numero; 
     }
     void REGISTRAR(char fila[],ENTERO x){
       ofstream esc(fila,ios::app| ios::binary);
       if(!esc){  cout<<"\n ERROR al abrir "<<fila;getch();    }
       else{
          esc.write(reinterpret_cast<char *>(&x),sizeof(ENTERO));
          esc.close();
       }
     }  
     void  VISUALIZAR(char fila[]){
        ENTERO y;
        ifstream lec(fila);
        if(!lec){        cout<<"\n ERROR al abrir "<<fila;getch();     }
        else {
          cout<<"\n MOSTRANDO DATOS DEL ARCHIVO "<<fila;   
          lec.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
          while(!lec.eof()){
            y.Mostrar();
	        lec.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
          }
	      lec.close();
        }
     } 
     void CONCATENAR(char fila1[],char fila2[],char fila3[]){
       ENTERO y;
       ifstream F1(fila1);
       ifstream F2(fila2);
       ofstream F3(fila3, ios::out|ios::trunc |ios::binary);
       if(!F3){  cout<<"\n ERROR al abrir "<<fila3;getch();    }
       else{
          if(!F1){        cout<<"\n ERROR al abrir "<<fila1;getch();     }
          else {
             F1.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
             while(!F1.eof()){
                F3.write(reinterpret_cast<char *>(&y),sizeof(ENTERO));              
	            F1.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
             }
	         F1.close();
          }  
          if(!F2){        cout<<"\n ERROR al abrir "<<fila2;getch();     }
          else {
             F2.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
             while(!F2.eof()){
                F3.write(reinterpret_cast<char *>(&y),sizeof(ENTERO));  
	            F2.read(reinterpret_cast<char *>(&y),sizeof(ENTERO));
             }
	         F2.close();
          }  
          F3.close();
       }      
    }
};

int main(){
    char op;
    ENTERO a;
    for(;;){
       cout<<" \n adicionar  fila1  <1>";
       cout<<" \n adicionar  fila2  <2>";
       cout<<" \n Mostrar    filas  <3>";
       cout<<" \n Concatenar filas  <4>";
       cout<<" \n salir             <5>";
       op=getch();
       switch(op){
       case '1':a.Ingresar();
                a.REGISTRAR("fila1",a);break;
       case '2':a.Ingresar();
                a.REGISTRAR("fila2",a);break;
       case '3':a.VISUALIZAR("fila1");
                a.VISUALIZAR("fila2");
                a.VISUALIZAR("fila3"); 
                getch(); break;
       case '4':a.CONCATENAR("fila1","fila2","fila3");break;
       case '5':return 0;
       }
     }
}
