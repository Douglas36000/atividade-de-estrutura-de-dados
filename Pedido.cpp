#include<iostream>
#include<string>
#include<queue>
using namespace std;

//estrutura pedido
struct Pedido
{
    int Id;
    string Descricao; 
    double Valor;
};


int main(){
    Pedido Pedido1;
    Pedido Pedido2;
    Pedido Pedido3;

    queue<Pedido>Atendimento;

    cout<< "--------------Restaurante do Bom------------"<< endl;

    //Pedido 1
    Pedido1.Descricao ="Sanduiche de Frango";
    Pedido1.Id = 101;
    Pedido1.Valor = 22.50;

    //Pedido2 
    Pedido2.Descricao = "Batata Frita rande";
    Pedido2.Id = 103;
    Pedido2.Valor = 12.00;

    //Pedido3
    Pedido3.Descricao = "Combo Familia";
    Pedido3.Id = 103;
    Pedido3.Valor = 45.90;

    Atendimento.push(Pedido1);
    cout << "(id 101) Primeiro pedido.\n";
    Atendimento.push(Pedido2);
    cout << "(id 102) Segundo pedido.\n";
    Atendimento.push(Pedido3);
    cout << "(id 103) Terceiro pedido.\n";


//demonstrar o pedido1
    cout << Atendimento.front().Id; 
    cout << Atendimento.front().Descricao;
    cout << Atendimento.front().Valor;

    cout << "pedido a ser preparado:\n";
    cout << "ID: " << Atendimento.front().Id << endl;
    cout << "Descricao: " << Atendimento.front().Descricao << endl << endl;

    
    cout << "Entregando o pedido ID " << Atendimento.front().Id << "...\n";
    Atendimento.pop();
    cout << "Pedido entregue!\n\n";

    if(!Atendimento.empty()) {
        cout << "proximo pedido da fila:\n";
        cout << "ID: " << Atendimento.front().Id << endl;
        cout << "Descricao: " << Atendimento.front().Descricao << endl;
    } else {
        cout << "Fila vazia. Nenhum pedido restante.\n";
    }


    



    return 0;
}

