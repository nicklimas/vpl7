#include "intruso.hpp"
#include <iostream>

void Intruso::set_senha_vazada(std::string vazou){
    std::string aux = tira_espaco_string(vazou);
    std::string senha;
    for (auto &ch : aux){
        if (ch == 'A'){
            senha += aux [0];
            senha += aux [1];
            numero_de_caracteres++;
        }
        if (ch == 'B'){
            senha += aux [2];
            senha += aux [3];
            numero_de_caracteres++;
            }
        if (ch == 'C'){ 
            senha += aux [4];
            senha += aux [5];
            numero_de_caracteres++;
            }
        if (ch == 'D'){
            senha += aux [6];
            senha += aux [7];
            numero_de_caracteres++;
            }
        if (ch == 'E'){
            senha += aux [8];
            senha += aux [9];
            numero_de_caracteres++;
            }
    }
    senhas.push_back(senha);
}

std::string Intruso::tira_espaco_string (std::string str){
    std::string aux;
    for (int i = 0; i < str.size(); i++){
        if (str[i] != ' ')
            aux += str[i];
    }
    return aux;
}

std::string Intruso::crack_senha(){
   
}
