package com.cck.rpg;

public abstract class Arma {
    
   private String nome;
   private double modDano;


    Arma(String nome, double modDano){
        this.nome = nome;
        this.modDano = modDano;

    }

    public String getNome() {
        return nome;
    }

    public double getModDano() {
        return modDano;
    }

}
