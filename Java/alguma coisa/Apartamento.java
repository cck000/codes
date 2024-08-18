
public class Apartamento {
    public int numAp;
    private boolean ocupado;
    private int reserva;

    public Apartamento(boolean ocupado, int reserva, int numAp){

        this.ocupado = ocupado;
        this.reserva = reserva;
        this.numAp = numAp;
        
    }

    public boolean getOcupado(){

        return ocupado;
    }

    public void setOcupado() {
        this.ocupado = true;
    }

    public int getReserva() {
        return reserva;
    }

    public void setReserva(int reserva) {
        this.reserva = reserva;
    }


    public void setLivre() {
        this.ocupado = false;
    }
}
