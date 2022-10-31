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
    std::string digitos;
    for (int i = 0; i < senhas.size(); i++){
        if (i+1 == senhas.size())
            break;
        else {
            for (int caracter = 0; caracter < numero_de_caracteres; caracter++){
                if(caracter % 2 == 0){
                    if (senhas[i][caracter] == senhas [i+1][caracter] || senhas[i][caracter] == senhas [i+1][caracter+1])
                        digitos += senhas [i][caracter];
                }
                if(caracter % 2 == 1){
                    if (senhas[i][caracter] == senhas [i+1][caracter-1] || senhas[i][caracter] == senhas [i+1][caracter])
                        digitos += senhas [i][caracter];  
                } 
            }
        }  
    }
    return digitos;
}
