package br.com.cck;

import java.io.IOException;


import javafx.event.ActionEvent;
import javafx.fxml.FXML;

import javafx.scene.control.Label;
import javafx.scene.control.TextField;

public class PrimaryController{
   
    @FXML
    
    
    private Label labelTeste;

    @FXML
    private TextField txtTeste;
    

    @FXML
    private void testeBotao(ActionEvent event){
        System.out.println("Teste");
        labelTeste.setText("Isso é um teste? "+ txtTeste.getText());
        
    }

    @FXML
    private void switchToSecondary() throws IOException {
        App.setRoot("secondary");
    }
    

}
