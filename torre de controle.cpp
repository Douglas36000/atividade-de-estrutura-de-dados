#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    stack<string>Preparacao_do_Foguetes;
    cout << "Preparando Foguetes" << endl;

    Preparacao_do_Foguetes.push("Alpha");

    
    Preparacao_do_Foguetes.push("Beta");

    Preparacao_do_Foguetes.push("Gama");

    Preparacao_do_Foguetes.push("Delta");

    cout << "Preparando Foguetes" << endl;

    cout << "lacando Foguete" << Preparacao_do_Foguetes.top() <<  endl;


    Preparacao_do_Foguetes.pop();
    cout << "lacando Foguete" << Preparacao_do_Foguetes.top() <<  endl;

}   