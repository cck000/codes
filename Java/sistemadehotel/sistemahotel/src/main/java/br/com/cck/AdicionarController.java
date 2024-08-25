package br.com.cck;

import java.net.URL;
import java.util.ResourceBundle;
import java.io.IOException;

import javafx.collections.FXCollections;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ComboBox;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.paint.Color;

public class AdicionarController implements Initializable{

    @FXML
    private ComboBox<Integer> comboap;

    @FXML
    private Label labelstatus;

    @FXML
    private TextField txtcpf;

    @FXML
    private TextField txttel;

    @FXML
    private TextField txtdias;

    @FXML
    private TextField txtemail;

    @FXML
    private TextField txtnome;

    @FXML
    private TextField txtsnome;


    @FXML
    
    private void voltar() throws IOException{
        App.setRoot("FXMLTelaInicial");

    }

    @FXML 
    private void salvar(){
        if (comboap.getValue() != null && !txtnome.getText().isEmpty() && !txtsnome.getText().isEmpty() && !txtcpf.getText().isEmpty() && !txtnome.getText().isEmpty() && !txtdias.getText().isEmpty() && Integer.parseInt(txtdias.getText()) != 0  && !txttel.getText().isEmpty()){
            teste.novaReserva(comboap.getValue(), Integer.parseInt(txtdias.getText()), txtnome.getText(), txtsnome.getText(), txtcpf.getText(), txtemail.getText(), txttel.getText());
            labelstatus.setText("Salvo com sucesso"); 
            labelstatus.setTextFill(Color.GREEN);

           
        }else{
            labelstatus.setText("Erro um ou mais itens estão incompletos");
            labelstatus.setTextFill(Color.RED);
          
        }
        
    }

    @FXML 

    private void cancelar(){
            txtnome.clear();
            txtcpf.clear();
            txtdias.clear();
            txtsnome.clear();
            txtemail.clear();
            txttel.clear();
            comboap.getSelectionModel().clearSelection();
    }

    private void carregacombo(){

        comboap.setItems(FXCollections.observableArrayList(teste.listaLivres()));
    }

    
    
    Hotel teste = App.getHotel();

    @Override
    
    

    public void initialize(URL arg0, ResourceBundle arg1) {
       
       
        carregacombo();
       
    }
    
}
