public class Comprador {
    private String nome;
    private String email;

    public Comprador(String nome, String email){
        this.nome = nome;
        this.email = email;
    }

    public String getnome(){
        return nome;
    }

    public String getemail(){
        return email;
    }
    
}
