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
        cout << "pagamento de " << "R$ "<< valor << " via "<< meio << endl;
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

class Compra {
public:
    Comprador* comprador;
    string estado;
    ItemCompra itens[10];
    Pagamento pagamentos[5];
    int qtdItens = 0;
    int qtdPagamentos = 0;

    void criar(Comprador* c) {
        comprador = c;
        estado = "PENDENTE";
    }

    void adicionarItem(ItemCompra i) {
        if (qtdItens < 10) {
            itens[qtdItens] = i;
            qtdItens++;
        }
    }

    void finalizar(Pagamento p) {
        if (qtdPagamentos < 5) {
            pagamentos[qtdPagamentos] = p;
            qtdPagamentos++;
            estado = "CONFIRMADA";
        }
    }

    void mostrar() {
        cout << "\n=== COMPRA ===" << endl;
        comprador->mostrar();
        cout << "Estado: " << estado << endl;

        cout << "\nItens:" << endl;
        for (int i = 0; i < qtdItens; i++) {
            itens[i].mostrar();
        }

        cout << "\nPagamentos:" << endl;
        for (int i = 0; i < qtdPagamentos; i++) {
            pagamentos[i].mostrar();
        }
    }
};


int main() {
    Produto p1;
    p1.criar("Prancha de surf", "32L e 5.8", 2500.00, 10);

    Comprador c1;
    c1.criar("Joao Paulo", "joaopaulo.kruppell@email.com");

    ItemCompra item1;
    item1.criar(&p1, 2);

    Pagamento pag1;
    pag1.criar(5000.00, "CREDITO");

    Compra compra;
    compra.criar(&c1);
    compra.adicionarItem(item1);
    compra.finalizar(pag1);

    p1.mostrar();
    compra.mostrar();

    return 0;
}
