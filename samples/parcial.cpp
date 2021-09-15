//Utilizremos libreria vector
#include <iterator>
#include <iostream>
#include <iostream>
#include <sstream>
#include <vector>
#include <ctime>



std::vector<std::string> split_istringstream(std::string str) {
    std::vector<std::string> resultado;
    std::istringstream isstream(str);
    std::string palabra;
    while(isstream >> palabra){
        resultado.push_back(palabra);
    }
    return resultado;
}

std::vector<std::string> split_getline(std::string str, char delim) {
    std::vector<std::string> resultado;
    std::istringstream isstream(str);
    std::string palabra;
    while(std::getline(isstream, palabra, delim)){
        resultado.push_back(palabra);
    }
    return resultado;
}

int main()
{
   std::string str("Texto para dividir");
    std::vector<std::string> v;
    for(std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it) {
       std::cout << *it << std::endl;
    }

    return 0;
}
