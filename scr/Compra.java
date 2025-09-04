public class Compra {
    private Comprador comprador;
    private EstadoCompra estado;
    private ItemCompra[] itens;
    private Pagamento[] pagamentos;
    private int qtditens;
    private int qtdpagamentos;

    public Compra(Comprador comprador){
        this.comprador = comprador;
        this.estado = EstadoCompra.PENDENTE;
        this.itens = new ItemCompra[10];
        this.pagamentos = new Pagamento[5];
        this.qtditens = 0;
        this.qtdpagamentos = 0;
    }

    public void adicionarItem(ItemCompra item) {
        if (qtditens < itens.length) {
            itens[qtditens] = item;
            qtditens++;
        }
    }

    public void finalizarCompra(Pagamento pagamento) {
        if (qtdpagamentos < pagamentos.length) {
            pagamentos[qtdpagamentos] = pagamento;
            qtdpagamentos++;
            this.estado = EstadoCompra.CONFIRMADA;
        }
    }

     public EstadoCompra getEstado() {
        return estado;
    }

    public ItemCompra[] getItens() {
        return itens;
    }

    public Pagamento[] getPagamentos() {
        return pagamentos;
    }

    public Comprador getComprador() {
        return comprador;
    }
    
}

