public class Pagamento {
    private double valor;
    private MeioPagamento meio;

    public Pagamento(double valor, MeioPagamento meio) {
        this.valor = valor;
        this.meio = meio;
    }

    public double getValor() {
        return valor;
    }

    public MeioPagamento getMeioPagamento() {
        return meio;
    }
}