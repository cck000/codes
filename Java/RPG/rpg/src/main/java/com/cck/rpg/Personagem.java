package com.cck.rpg;
public abstract class Personagem {

    private String nomeTipo;
    private double saude;
    private double forca;
    private double destreza;
    private Arma arma;
    
    public Personagem(String nomeTipo, double saude, double forca, double destreza, Arma arma){

        this.nomeTipo = nomeTipo;
        this.saude = saude;
        this.forca = forca;
        this.destreza = destreza;
        this.arma = arma;

    }

    public void printStatus(){
        if (!estaMorto()){
            System.out.println(nomeTipo+" [Saude: "+saude+", Forca: "+ forca+ ", Destreza: "+ destreza+", "+ arma.getNome()+"]");

        } else{
            System.out.println(nomeTipo+" [Morto, Forca: "+ forca+ ", Destreza: "+ destreza+", "+ arma.getNome()+"]");
        }

    }


    public void atacar(Personagem b){
        
        
        if(!estaMorto()){

            System.err.println("O "+ nomeTipo+" ataca o "+b.nomeTipo+" com "+arma.getNome()+".");

        }else{
            System.out.println("O "+nomeTipo+" não consegue atacar, pois está morto");
        }

        if(destreza > b.destreza){
            if (!b.estaMorto()){

                b.recebeDano(calculaDano());
                System.out.println("O ataque foi efetivo com "+calculaDano()+" pontos de dano!");
               
            } else {
                System.out.println("Pare! O "+b.nomeTipo+" já está morto!");
            }


        }else if(destreza < b.destreza){

            if (!b.estaMorto()){

                recebeDano(b.calculaDano());
                System.out.println("O ataque foi inefetivo e revidado com "+b.calculaDano()+" pontos de dano!");
              
            } else {
                System.out.println("Pare! O "+b.nomeTipo+" já está morto!");
            }


        }else if(destreza == b.destreza){
            if (!b.estaMorto()){

                System.out.println("O ataque foi defendido, ninguem se machucou!");
            } else {
                System.out.println("Pare! O "+b.nomeTipo+" já está morto!");
            }

        }

    }
        
    private double calculaDano(){
        
        double dano = forca * arma.getModDano();

        return dano;
    }

    private void recebeDano(double dano){

        saude -= dano;
        
    }

    private boolean estaMorto(){

        if (saude < 1) {
            return true;
        }

        return false;

    }



}


