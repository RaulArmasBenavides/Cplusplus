#include<iostream>
#include<stdio.h>
#include<string.h>
#include<vector>
using namespace std;
void SuprimeImpares(string text, string &textimpar )
{
    string space_delimiter = " ";
    textimpar ="";
    vector<string> words{};

    size_t pos = 0;
    while ((pos = text.find(space_delimiter)) != string::npos) {
        words.push_back(text.substr(0, pos));
        text.erase(0, pos + space_delimiter.length());
    }

    for (const auto &str : words) {

        if((str.length())%2 !=0)
        {
           textimpar = textimpar + " " + str;
        }
    }
}


int main()
{  string text = "Un ejemplo de cadenas para pruebas";
   cout<<"original " << text;
   cout<<endl;
   string textimpar ="";
   SuprimeImpares(text,textimpar);
   cout<<textimpar;
   return 0;
}
