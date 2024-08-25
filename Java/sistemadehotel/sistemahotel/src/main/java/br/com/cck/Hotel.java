package br.com.cck;


import java.util.ArrayList;

import javafx.beans.binding.StringBinding;

public class Hotel {

    private Apartamento[] ap = new Apartamento[11];

    public Hotel(){

        for (int i = 0; i < 11; i++){
            this.ap[i] = new Apartamento("Livre", 0 ,i, "teste", "testudo", "000.000.000-00", "", "");
        
        } 
    }
    public ArrayList<Apartamento> listaAp(){

        
        ArrayList<Apartamento>  temp = new ArrayList<Apartamento>(10);
        for(Apartamento i : ap){
            if(i.getNumAp() != 0){
                temp.add(i);
            }
        }
        return temp;
    }

    public ArrayList<Integer> listaLivres(){
        ArrayList<Integer>  temp = new ArrayList<>(10);
        for(Apartamento i : ap){
            if(i.getNumAp() != 0 && i.getOcupado() == "Livre"){
                temp.add(i.getNumAp());
            }
        }
        return temp;
    }


    public void novaReserva(int numAp, int dias, String nome, String snome, String CPF, String email, String tel){
        if (ap[numAp].getOcupado() == "Livre"){
            ap[numAp].setCPF(CPF);
            ap[numAp].setReserva(dias);
            ap[numAp].setOcupado();
            ap[numAp].setNome(nome);
            ap[numAp].setSobrenome(snome);
            ap[numAp].setEmail(email);
            ap[numAp].setTel(tel);
        } 
    }

    public void removeReserva(int numAp){
        if (ap[numAp].getOcupado() == "Ocupado"){

            ap[numAp].setLivre();

        }
    }
        

}
