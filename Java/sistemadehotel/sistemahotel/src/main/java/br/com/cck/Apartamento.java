package br.com.cck;


public class Apartamento {
    private int numAp;
    private String ocupado;
    private int reserva;
    private String nome;
    private String sobrenome;
    private String CPF;
    private String email;
    private String tel;

    public Apartamento(String ocupado, int reserva, int numAp, String nome, String sobrenome, String CPF, String email, String tel){

        this.ocupado = ocupado;
        this.reserva = reserva;
        this.numAp = numAp;
        this.nome = nome;
        this.sobrenome = sobrenome;
        this.CPF = CPF;
        this.email = email;
        this.tel = tel;
    }

    public String getOcupado(){

        return ocupado;
    }

    public void setOcupado() {
        this.ocupado = "Ocupado";
    }

    public int getReserva() {
        return reserva;
    }

    public void setReserva(int reserva) {
        this.reserva = reserva;
    }


    public void setLivre() {
        this.ocupado = "Livre";
    }

    public int getNumAp() {
        return numAp;
    }

    public void setOcupado(String ocupado) {
        this.ocupado = ocupado;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getSobrenome() {
        return sobrenome;
    }

    public void setSobrenome(String sobrenome) {
        this.sobrenome = sobrenome;
    }

    public String getCPF() {
        return CPF;
    }

    public void setCPF(String CPF) {
        this.CPF = CPF;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    public String getEmail() {
        return email;
    }

    public void setTel(String tel) {
        this.tel = tel;
    }
    public String getTel() {
        return tel;
    }
    
}
