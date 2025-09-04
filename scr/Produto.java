public class Produto {
        private String nome;
        private String descricao;
        private double preco;
        private int quantidade;


    public Produto(String nome, String descricao, double preco, int quantidade){
        this.nome = nome;
        this.descricao = descricao;
        setPreco(preco);
        setQuantidade(quantidade);
    }

    public String getNome(){
        return nome;
    }

    public String getDescricao(){
        return descricao;
    }

    public double getPreco(){
        return preco;
    }

    public void setPreco (double preco){
        if (preco > 0) {
            this.preco = preco;
        }
    }

    public int getQuantidade(){
        return quantidade;
    }

    public void setQuantidade(int quantidade){
        if (quantidade > 0) {
            this.quantidade = quantidade;
        }
    }

}