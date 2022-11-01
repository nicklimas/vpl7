#include "intruso.hpp"
#include <iostream>

void Intruso::set_senha_vazada(std::string vazou){
    std::string aux = tira_espaco_string(vazou);
    std::string senha;
    for (auto &ch : aux){
        if (ch == 'A'){
            senha += aux [0];
            senha += aux [1];
            
        }
        if (ch == 'B'){
            senha += aux [2];
            senha += aux [3];
            
            }
        if (ch == 'C'){ 
            senha += aux [4];
            senha += aux [5];
            
            }
        if (ch == 'D'){
            senha += aux [6];
            senha += aux [7];
            
            }
        if (ch == 'E'){
            senha += aux [8];
            senha += aux [9];
        
            }
    }

    bool repete;
    for (auto &x : senhas){
        if (x == senha)
            repete = true;
        if (x != senha)
            repete = false;
    }
    
    if (!repete)
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

int Intruso::calcula_numero_de_caracteres() {
    return senhas [0].size();
}

std::string Intruso::crack_senha(){
    std::string digitos;
    numero_de_caracteres = calcula_numero_de_caracteres();
    char numero;
    for (int caracter = 0; caracter < numero_de_caracteres; caracter++){
        if (caracter % 2 == 0){
            for (int i = 0; i + 1 < senhas.size(); i++){
                if (senhas[i][caracter] == senhas[i+1][caracter] || senhas[i][caracter] == senhas [i+1][caracter+1])
                    numero = senhas[i][caracter];
            }
        }
        if(caracter % 2 == 1){
            for (int i = 0; i + 1 < senhas.size(); i++){
                if (senhas[i][caracter] == senhas [i+1][caracter-1] || senhas[i][caracter] == senhas [i+1][caracter])
                        numero = senhas[i][caracter];
             }
            digitos += numero;
            digitos += ' ';
        }
    }
    return digitos;       
}