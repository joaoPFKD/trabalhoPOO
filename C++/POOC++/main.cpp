#include <iostream>
#include <string>


using namespace std;

class Produto{

public:
    string nome;
    string descricao;
    double preco;
    int quantidade;

    void criar(string n, string d, double p, int q){
        nome = n;
        descricao = d;
        if (p > 0) preco = p;
        if (q > 0) quantidade = q;
    }

    void mostrar(){
        cout << "produto: " << nome << " " << descricao << endl << "preco: "<< preco << endl << "quantidade: " << quantidade << endl;
    }
};

class ItemCompra{

public:
    Produto* produto;
    double preco;
    int quantidade;

    void criar(Produto* p, int q){
        produto = p;
        quantidade = q;
        preco = p->preco;
    }

    void mostrar(){
        cout << "Item: " << produto->nome  << endl << " | Quantidade: " << quantidade << endl << " | Preco: " << preco << endl;
    }

};

class Pagamento{
public:
    double valor;
    string meio;

    void criar(double v, string m){
    valor = v;
    meio = m;
    }

    void mostrar(){
        cout << "pagamento de " << valor << "via"<< meio << endl;
    }
};

class Comprador {
public:
    string nome;
    string email;

    void criar(string n, string e){
    nome = n;
    email = e;
    }

    void mostrar() {
        cout << "Comprador: " << nome << " | Email: " << email << endl;
    }

};




int main()
{
Produto();
}
