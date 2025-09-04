public class Main {
    public static void main(String[] args){
        Produto p1 = new Produto("Notebook", "DELL i5", 3500.00, 10);
        Comprador c1 = new Comprador("joao", "Joao@email.com");

        Compra compra = new Compra(c1);
        ItemCompra item1 = new ItemCompra(p1, 2);

        compra.adicionarItem(item1);

        Pagamento pag = new Pagamento(7000.00, MeioPagamento.PIX);
        compra.finalizarCompra(pag);

        System.out.println("Compra Finalizada por: " + compra.getComprador().getemail());
        System.out.println("Estado da compra: " + compra.getEstado());
        System.out.println("pagamento: "+ compra.getPagamentos()[0].getValor());
    }
    
}
