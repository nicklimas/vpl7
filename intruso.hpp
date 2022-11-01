#include <string>
#include <vector>


class Intruso{
    /Continue a implementação da classe Intruso/
    std::vector <std::string> senhas;
    int numero_de_caracteres = 0;

    public:
        void set_senha_vazada(std::string vazou);
        std::string crack_senha();
        std::string tira_espaco_string (std::string str);
        int calcula_numero_de_caracteres ();
};