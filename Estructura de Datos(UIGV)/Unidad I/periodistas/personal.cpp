

#include "iostream.h"
#include "conio.h"
class PERIODISTA{
	char nombre[100];
	int oficio; // 0=camarografo  1=relator
  public:	
	void REG_PER(){
		cout<<"\n....Ingrese nombre de periodista            : ";cin>>nombre;
        cout<<"\n....Ingrese oficio[0=camarografo |1=relator]: ";cin>>oficio;
	}
	void VER_PER(){
		cout<<"\n....."<<nombre;
        switch(oficio){
        case 0: cout<<"      camarografo ";break;
        case 1: cout<<"      relator ";break;
        }
 	}
 	char *RETNOMBRE(){ return nombre; 	}
 	int   RETOFICIO(){ return oficio; }
	
};
class REPORTAJE{
	char titulo[100];
	PERIODISTA p[2];
	public:
	bool REG_REPOR(PERIODISTA pe[],int total){
		bool ENCONTRO=false; int j,k;
		char nomb[100];
		cout<<"Ingrese titulo de reportaje: ";cin>>titulo;
		for(j=0; j<2; j++){
		   ENCONTRO=false;
		   cout<<"\n Ingrese nombre de periodista: ";cin>>nomb;
		   for(k=0; k<total;k++){
		   	  if(!strcmp(nomb,pe[k].RETNOMBRE())){
		   	  	ENCONTRO=true;
		   	    p[j]=pe[k];
		   	  }
		   	}
		   	if(!ENCONTRO) return false;
		}
		if(p[0].RETOFICIO()!=p[1].RETOFICIO()) return true;
		else return false;   
	}
	void VIS_REPOR(){
	    cout<<"\n"<<titulo;
	    p[0].VER_PER();
	    p[1].VER_PER();
	}
	void VIS_TITULO(char x[]){
         for(int j=0; j<2; j++)
            if(!strcmp(p[j].RETNOMBRE(),x))cout<<"\n "<<titulo;  
         cout<<"\n\n";   
    }
};

main(){
  PERIODISTA pe[5];int ipe=0,i;
  REPORTAJE re[20]; int ire=0; 
  char op, nomb[100]; 
  do
	{
		 cout<<"\n Ing Periodista     <1>";
         cout<<"\n Listar Periodistas <2>";
         cout<<"\n Ing Reportaje      <3>";
         cout<<"\n Ver Reportaje      <4>";
         cout<<"\n reporte pedido     <5>";
         cout<<"\n Salir              <6>";
		 op=cin.get();       
         switch(op){
         case '1': 
                 pe[ipe].REG_PER();
                 ipe++;
                 break;
         case '2': for(i=0; i<ipe; i++)
                   pe[i].VER_PER();
                 break;
         case '3': if(re[ire].REG_REPOR(pe,ipe)){
                	cout<<"\n se conformo el equipo";
                	ire++;
                }
                else cout<<"\n no se conformo el equipo";     
                break;
         case '4':for(i=0; i<ire; i++)
                   re[i].VIS_REPOR(); 
                break; 
         case '5':cout<<"\n ingrese un nombre de periodista: "; cin>>nomb; 
                    for(i=0; i<ire; i++)
                     re[i].VIS_TITULO(nomb);
                   break;                 
		}
		cin.ignore();
	}
	while (op !='6');
 }
 
 
 
 
