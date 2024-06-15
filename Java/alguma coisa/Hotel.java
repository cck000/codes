
import java.util.ArrayList;

public class Hotel {

    private Apartamento[] ap = new Apartamento[11];

    public Hotel(){

        for (int i = 0; i < 11; i++){
            this.ap[i] = new Apartamento(false, 0 ,i);
        
        }

        
    }
    public ArrayList<Apartamento> listaAp(){

        
        ArrayList<Apartamento>  temp = new ArrayList<Apartamento>(10);
        for(Apartamento i : ap){
            if(i.numAp != 0){
                temp.add(i);
            }
        }
        return temp;
    }


    public ArrayList<Integer> listaLivres(){
        ArrayList<Integer>  temp = new ArrayList<>(10);
        for(Apartamento i : ap){
            if(i.numAp != 0 && !i.getOcupado()){
                temp.add(i.numAp);
            }
        }
        return temp;
    }
    public String novaReserva(int numAp, int dias){
        if (!ap[numAp].getOcupado()){

            ap[numAp].setReserva(dias);
            ap[numAp].setOcupado(true);

            return "SUCESS";
        }else{
            return "APARTAMENTO "+numAp+" JÁ ESTÁ OCUPADO";
        }

        
    }
        

}
