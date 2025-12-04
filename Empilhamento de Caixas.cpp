#include <iostream>
#include <string>
#include <stack>

using namespace std;

struct Carga
{
   int id_caixa;
   float peso_kg;
   string destino;
};


int main(){
    stack<Carga>armazenando_caixas;

    Carga Carga1;
    Carga Carga2;
    Carga Carga3;

    cout << "----Galbao----" << endl;



//primeira ordem
    Carga1.id_caixa = 501;
    Carga1.peso_kg = 15.5;
    Carga1.destino = "Setor Leste";

// segunda ordem 
    Carga2.id_caixa = 502;
    Carga2.peso_kg = 22.0;
    Carga2.destino = "Setor Oeste";


//terceira ordem
    Carga3.id_caixa = 503;
    Carga3.peso_kg = 10.1;
    Carga3.destino = "Setor Norte";

//empilhamento de caixa
    armazenando_caixas.push(Carga1);
    armazenando_caixas.push(Carga2);
    armazenando_caixas.push(Carga3);

//remover o primeiro da carga    
    armazenando_caixas.top().id_caixa;
    cout << "(501)foi removido" << endl;
    armazenando_caixas.top().destino;
    cout << "Setor leste foi removido" << endl;

//remover a seunda carga;
    armazenando_caixas.top().id_caixa;
    cout << "(502)_foi removido" << endl;
    armazenando_caixas.top().destino;
    cout << "_Setor Oeste foi removido_";

//topo da pilha
    armazenando_caixas.pop();
    cout << " nova caixa no topo da Pilha removida " << armazenando_caixas.top().id_caixa << endl;

    armazenando_caixas.pop();
    cout << " nova caixa no topo da Pilha removida " << armazenando_caixas.top().id_caixa << endl;
    
    
    armazenando_caixas.size();
    cout << "_tamanho atual_" <<  armazenando_caixas.size() << endl;





}