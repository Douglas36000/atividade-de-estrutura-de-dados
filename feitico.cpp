#include <iostream>
#include <string>


using namespace std;

struct feitico{
    string nome;
    int dificuldade;
    int dano_base;
    float custo_mana_final;
};

int main(){
    feitico feitico1;
    feitico1.nome =  "Relâmpago em Cadeia";
    feitico1.dificuldade = 4;
    feitico1.dano_base = 75;
    float mulitiplicador;

if (feitico1.dificuldade == 1 || feitico1.dificuldade == 2)
{
    mulitiplicador = 1.0;
}
else if (feitico1.dificuldade ==  3 || feitico1.dificuldade == 4)
{
    mulitiplicador = 1.5;
}
else if (feitico1.dificuldade == 5)
{
    mulitiplicador = 2.0;
}
    feitico1.custo_mana_final = feitico1.dano_base * mulitiplicador;
    cout << feitico1.custo_mana_final;
}