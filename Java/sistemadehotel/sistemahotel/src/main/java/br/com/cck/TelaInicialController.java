package br.com.cck;

import java.io.IOException;

import javafx.fxml.FXML;

public class TelaInicialController {



    @FXML

    private void listarApartamentos() throws IOException{
        App.setRoot("FXMLListar");

    }
    
    @FXML

    private void adicionarApartamentos() throws IOException{
        App.setRoot("FXMLAdicionar");

    }
    
    @FXML

    private void removerApartamentos() throws IOException{
        App.setRoot("FXMLRemover");

    }
    
    @FXML

    private void editarApartamentos() throws IOException{
        App.setRoot("FXMLEditar");

    }
    
    @FXML

    private void buscarApartamentos() throws IOException{
        App.setRoot("FXMLBuscar");

    }
    
    
    
}
