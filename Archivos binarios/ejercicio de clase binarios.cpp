//SE PIDE CREAR UN ARCHIVO BINARIO LLAMADO FLOTAS.TXT DONDE SE ALMACENE LOS SIGUIENTES DATOS DE UN VEHICULO : NROPLACA, MARCA , PESO BRUTO,
//NUMERO DE EJES. SI EL VEHICULO ES DE DOS EJES, SE TRATA DE VEHICULOS DE TRANSPORTE DE PASAJEROS, SI EL VEHICULO TIENE MAS DE DOS EJES SE
//TRATA DE VEHICULOS DE CARGA PESADA. EN BASE A LO ANTERIOR SE PIDE LO SIGUIENTE.
//      A) CREAR EL ARCHIVO
//      B) MOSTRAR SU CONTENIDO
//      C) GENERAR DOS ARCHIVO EN BASE A LO ANTERIOR , UNO LLAMADO PUBLICO.TXT Y EL OTRO LLAMADO CARGA.TXT DE TAL MANERA QUE EN CADA UNO SE
//          ALMACENE LOS DATOS DE LOS VEHICULOS DE TRANSPORTE DE PASAJEROS O CARGA RESPECTIVAMENTE.
//      D) BUSCAR UN REGISTRO CUALQUIERA DEL ARCHIVO PUBLICO.TXT , SI LO ENCUENTRA RETORNA TRUE , CASO CONTRARIO RETORNA FALSE.
//      E) MOSTRAR LOS DATOS DEL REGISTRO BUSCANDO EN LA PREGUNTA ANTERIOR O EN SU DEFECTO ESCRIBIR EL MENSAJE DE " REGISTRO NO EXISTE".

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fstream>


using namespace std;
#define F fflush(stdin)
#define Q reinterpret_cast<char*>

struct dat
{
    char np[10];
    char marca[25];
    float peso;
    int neje;
};

void generarFlotas(ofstream & f1)
{
    dat  p;
    f1.open("flotas.txt",ios::binary);
    cout<< "NUMERO PLACA O <ENTER>  PARA FIALIZAR"<<endl;
    F;gets(p.np);
    while(strlen(p.np)!=0)
    {
        cout<< "MARCA VEHICULO: ";F;
        gets(p.marca);
        cout<< "PESO BRUTO: ";
        cin>>p.peso;
        cout<< "NUMERO DE EJES DEL VEHICULO ( 0 : PASAJEROS , 1 : CARGA )";
        cin>>p.neje;

        f1.write(Q(&p.np),sizeof(p.np));
        f1.write(Q(&p.marca),sizeof(p.marca));
        f1.write(Q(&p.peso),sizeof(float));
        f1.write(Q(&p.neje),sizeof(int));

        cout<< " NUMERO DE PLACA O <ENTER> PARA FINALIZAR "<<endl;
        gets(p.np);
    }
    f1.close();
}

void reporte(ifstream &f2)
{
    dat p;
    f2.open("flotas.txt",ios::binary);
    f2.read(Q(&p.np),sizeof(p.np));
    while(!f2.eof())
    {
        f2.read(Q(&p.marca),sizeof(p.marca));
        f2.read(Q(&p.peso),sizeof(p.peso));
        f2.read(Q(&p.neje),sizeof(p.neje));
        cout<< p.np<<"\t"<<p.marca<<"\t"<<p.peso<<endl;
        if(p.neje==0)
        {
            cout<< " PASAJEROS ..."<<endl;
        }
        else
        {
            cout<< "CARGA ...."<<endl;
        }
        f2.read(Q(&p.np),sizeof(p.np));
    }
    f2.close();
}

void GeneraPasajCarga(ifstream & f2, ofstream & f3 , ofstream & f4)
{
    dat p;
    f2.open("flotas.txt",ios::binary);
    f3.open("carga.txt",ios::binary);
    f4.open("publico.txt",ios::binary);

    f2.read(Q(&p.np),sizeof(p.np));
    for(;f2.peek()!=EOF;)
    {
        f2.read(Q(&p.marca),sizeof(p.marca));
        f2.read(Q(&p.peso),sizeof(p.peso));
        f2.read(Q(&p.neje),sizeof(p.neje));
        if(p.neje==0)
        {
            f4.write(Q(&p.np),sizeof(p.np));
            f4.write(Q(&p.marca),sizeof(p.marca));
            f4.write(Q(&p.peso),sizeof(p.peso));
            f4.write(Q(&p.neje),sizeof(p.neje));
        }
        else
        {
            f3.write(Q(&p.np),sizeof(p.np));
            f3.write(Q(&p.marca),sizeof(p.marca));
            f3.write(Q(&p.peso),sizeof(p.peso));
            f3.write(Q(&p.neje),sizeof(p.neje));
        }
        f2.read(Q(&p.np),sizeof(p.np));
    }
    f2.close();
    f3.close();
    f4.close();
}
bool BuscarRegistro(ifstream & f2, dat &q)
{
    bool t=false;int n,totalbytes,nreg;
    f2.open("publico.txt",ios::binary);
    f2.seekg(0,ios::end); // ir al final del archivo  OTRA MANERA ES CON "ATE" ( ios::ate)
    totalbytes=f2.tellg();
    nreg=totalbytes/sizeof(q);
    cout<< " numero de registro a buscar, debe estar comprendido entre \n 1 y "<<nreg<<endl;
    cin>>n;
    if(n>0 && n<=nreg)
    {
        t=true;
        f2.seekg((n-1)*sizeof(q),ios::beg); // desde el principio

        f2.read(Q(&q.np),sizeof(q.np));
        f2.read(Q(&q.marca),sizeof(q.marca));
        f2.read(Q(&q.peso),sizeof(q.peso));
        f2.read(Q(&q.neje),sizeof(q.neje));
    }
    return t;
}


void registro (dat x ,bool y)
{
    if(y==true)
    {
        cout<<x.np<< "\t"<<x.marca<< "\t"<<x.peso<< "\t"<<x.neje<<endl;
    }
    else
        cout<< "\n registro no existe \n ";
}


int main()
{
    ofstream arch1,arch3,arch4;
    ifstream arch2;
    dat w;
    bool z;
    generarFlotas(arch1);
    reporte(arch2);
    GeneraPasajCarga(arch2,arch3,arch4);
    z=BuscarRegistro(arch2,w);
    registro(w,z);
return 0;
}
