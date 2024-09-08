package br.com.cck;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;

import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;

public class BuscarController implements Initializable {
    
    Hotel temp = App.getHotel();

    @FXML
    private TableColumn<Apartamento, Integer> diasres;

    @FXML
    private TableColumn<Apartamento, String> estadoap;

    @FXML
    private TableColumn<Apartamento, Integer> numap;

    @FXML
    private TableView<Apartamento> tabelaap;
    
    @FXML
    private TableColumn<Apartamento, String> tabnome;

    @FXML
    private TableColumn<Apartamento, String> tabtel;

    @FXML
    private TextField textbusca;


    @FXML
    private void buscar(ActionEvent event) {
     
        ObservableList<Apartamento> listaap = FXCollections.observableArrayList(

            temp.buscaReserva(textbusca.getText())
            

        );
    
        tabelaap.setItems(listaap);

    }

    @FXML
    private void voltar() throws IOException{
        App.setRoot("FXMLTelaInicial");

    }

    
    public void initialize(URL arg0, ResourceBundle arg1) {
    

        diasres.setCellValueFactory( new PropertyValueFactory<Apartamento, Integer>("reserva"));
        estadoap.setCellValueFactory( new PropertyValueFactory<Apartamento, String>("ocupado"));
        numap.setCellValueFactory( new PropertyValueFactory<Apartamento, Integer>("numAp"));
        tabnome.setCellValueFactory(new PropertyValueFactory<Apartamento, String>("nome"));
        tabtel.setCellValueFactory(new PropertyValueFactory<Apartamento, String>("tel"));
    
        
    }


}
