
//Alumno : Villalta Pachas Rodrigo Manuel Tito
//Código : 20170299
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
void obtenerPalabra(string text ,int n, string &reultado)
{
    string space_delimiter = " ";
    int aux = 0 ;
   // textimpar ="";
    bool retornook =false;
    vector<string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != string::npos)
    {
        words.push_back(text.substr(0, pos));
        // cout <<pos;
        text.erase(0, pos + space_delimiter.length());
    }

    for (const auto &str : words) {

        aux++;
        if(aux==n)
        {
           //aux =+1;
          // cout<<str;
           reultado= str;
           retornook = true;
           //textimpar = textimpar + " " + str;
        }
    }


    if(retornook != true)
    {
        //se devuelve la cadena vacía
        reultado= "";
        //cout<<"";
    }
}




int main()
{
   setlocale(LC_CTYPE,"Spanish");
   int n = 0;
   string resultado ="";
   string text = "Hoy es un dia hermoso ";
   cout<<"Cadena original: " << text;
   cout<<endl;
   cout<<"Ingrese el número"<<endl;
   cin>>n;
   obtenerPalabra(text,n,resultado);
   cout<<"Imprimiendo resultado.."<<endl;
   cout<<resultado;
   return 0;
}

