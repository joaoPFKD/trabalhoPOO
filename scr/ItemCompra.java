public class ItemCompra {
    private Produto produto;
    private int quantidade;
    private double preco;

    public ItemCompra(Produto produto, int quantidade) {
        this.produto = produto;
        this.quantidade = quantidade;
        this.preco = produto.getPreco();
    }

    public int getQuantidade() {
        return quantidade;
    }

    public double getPreco() {
        return preco;
    }

    public Produto getProduto() {
        return produto;
    }
}