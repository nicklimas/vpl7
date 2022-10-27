#include "intruso.hpp"

void Intruso::set_senha_vazada(std::string vazou){
    std::string senha;
    for (auto &ch : vazou){
        if (ch == 'A')
            senha += vazou [0] + vazou [1];
        if (ch == 'B')
            senha += vazou [2] + vazou [3];
        if (ch == 'C')
            senha += vazou [4] + vazou [5];
        if (ch == 'D')
            senha += vazou [6] + vazou [7];
        if (ch == 'E')
            senha += vazou [8] + vazou [9];
    }
    senhas.push_back(senha);
}