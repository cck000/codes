package br.com.cck;


public class Apartamento {
    private int numAp;
    private String ocupado;
    private int reserva;

    public Apartamento(String ocupado, int reserva, int numAp){

        this.ocupado = ocupado;
        this.reserva = reserva;
        this.numAp = numAp;
        
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
}
