#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Q reinterpret_cast<char*>
using namespace std;
//declaracion de la estructura
struct dat
{ char c[10],no[20],ca[15];
  float s,bo,ds,sn;
  int ts;
};
void leersalvar(ofstream &f1)
{   int n,i;
    dat r[40];
    f1.open("Personal",ios::binary);
    if(f1.fail())
    { cerr<<"No se pudo abrir el archivo"<<endl;
      cin.get();
      exit(1);
    }
    else{
    cout<<endl<<"Ingrese numero de trabajadores"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {cout<<"Escriba el codigo del empleado #"<<i<<endl;
    fflush(stdin);gets(r[i].c);
    cout<<"Escriba el nombre del empleado "<<endl;gets(r[i].no);
    cout<<"Ingrese el cargo del empleado "<<endl;gets(r[i].ca);
    cout<<"Ingrese el sueldo bruto"<<endl;cin>>r[i].s;
    r[i].bo=r[i].ts==20?r[i].s*0.2:0;
    r[i].ds=r[i].s*0.135;
    r[i].sn=r[i].s+r[i].bo-r[i].ds;
    //escribiendo datos en el archivo
    f1.write(Q(&r[i].c),sizeof(r[i].c));
    f1.write(Q(&r[i].no),sizeof(r[i].no));
    f1.write(Q(&r[i].ca),sizeof(r[i].ca));
    f1.write(Q(&r[i].ts),sizeof(r[i].ts));
    f1.write(Q(&r[i].s),sizeof(r[i].s));
    f1.write(Q(&r[i].ds),sizeof(r[i].ds));
    f1.write(Q(&r[i].sn),sizeof(r[i].sn));
    }
    }
    f1.close();
}
void Reporte(ifstream &f2)
{ dat r;
  f2.open("Personal",ios::binary);
  if(!f2)
  {
      cerr<<"no se pudo abrir el archivo"<<endl;
      cin.get();
      exit(1);
  }
  else
    {   f2.read(Q(&r.c),sizeof(r.c));
        for(;f2.eof()==false;)
        {
        f2.read(Q(&r.c),sizeof(r.c));
        f2.read(Q(&r.no),sizeof(r.no));
        f2.read(Q(&r.ca),sizeof(r.ca));
        f2.read(Q(&r.ts),sizeof(r.ts));
        f2.read(Q(&r.s),sizeof(r.s));
        f2.read(Q(&r.ds),sizeof(r.ds));
        f2.read(Q(&r.sn),sizeof(r.sn));
        //mostrando por pantalla
        cout<<r.c<<"\t"<<r.no<<"\t"<<r.ca<<"\t"<<r.ts<<"\t"<<r.s<<"\t"<<r.bo<<"\t"<<r.ds<<"\t"<<r.sn<<endl;
        f2.read(Q(&r.c),sizeof(r.c));
        }
        f2.close();
    }
}
void modificar(ifstream &f3,ofstream &f4)
{ dat r; int m,nr,tb,tam;
f3.open("Personal",ios :: binary);
f4.open("temp",ios::binary);
f3.seekg(0,ios::end);
tam=sizeof(r);
tb=f3.tellg();
nr=tb/tam;
f3.seekg(0,ios::beg);
if(f3.fail())
{
    cerr<<"Hubo un error al abrir el archivo Personal "<<endl;
    cin.get();
    exit(1);
}
else
{
cout<<"Numero de registro a buscar ? "<<endl;
cin>>m;
if(m>0 && m<=nr)
{f3.seekg((m-1*tam));
 f3.read(Q(&r.c),sizeof(r.c));
 f3.read(Q(&r.no),sizeof(r.no));
 f3.read(Q(&r.ca),sizeof(r.ca));
 f3.read(Q(&r.ts),sizeof(r.ts));
 f3.read(Q(&r.s),sizeof(r.s));
 f3.read(Q(&r.ds),sizeof(r.ds));
 f3.read(Q(&r.sn),sizeof(r.sn));
 for(int i=m;i<=nr;i++)
    r.s=1.05*r.s;


}
else
 cout<<"El registro a buscar no existe"<<endl;

}
 f3.close();
 f4.close();
 remove("Personal");
 rename("temp","Personal");
}

int main()
{ ofstream file1,file4;
  ifstream file2,file3;
  leersalvar(file1);
  Reporte(file2);
  modificar(file3,file4);
return 0;
}
