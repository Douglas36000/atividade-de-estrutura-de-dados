#include <iostream>
#include <string>
#include <queue> // Contem estrutura fila 
using namespace std;

int main(){
    //criação da fila
    queue<string> itens;

    cout << "armazem de intens\n\n";

    cout << itens.empty();
    itens.push("britadeira\n");
    itens.push("portão do enem\n");
    itens.push("espinhos de vyse\n");
    itens.push("spot do sova\n");
    itens.push("transformardor\n");
    itens.push("copa do mundo2026\n");


    cout << "\nPremeiro de lista" << itens.front();
    cout << "\nultimo da lista" << itens.back();
    cout << "\ntamanho fila:"<< itens.size();

    itens.pop(); //remove da fila, retirando o primeiro da lista
    cout << "\n tamanho fila: "<< itens.size();
    itens.pop();
    cout << "\n Premeiro de lista" << itens.front();

}