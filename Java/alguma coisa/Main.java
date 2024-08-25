
import java.util.ArrayList;


import javax.swing.JFrame;
import javax.swing.JOptionPane;

public class Main {
    public static void main(String[] args) {
        
        Hotel cliente = new Hotel();
        //Scanner leia =  new Scanner(System.in);
        Object roda = new Object(); 
        while (roda != null){
            
            
            roda = JOptionPane.showInputDialog(new JFrame(), "Insira a operação que deseja realizar","Sistema de hotel", 1, null, new Object[]{"LISTAR APARTAMENTOS", "CADASTRAR RESERVA", "REMOVER RESERVA"}, null);
            
            if (roda == null){
                break;
            }
            switch ((String)roda){

                
                case "CADASTRAR RESERVA":

                    if (cliente.listaLivres().isEmpty()){
                        JOptionPane.showMessageDialog(null, "Não há apartamentos livres", "Sistema de hotel", JOptionPane.WARNING_MESSAGE);
                        break;
                    }
                    int numeroap = (int)JOptionPane.showInputDialog(null, "Escolha o apartamento","Sistema de hotel", 1, null, cliente.listaLivres().toArray(), null );
                    int diasreserva = Integer.parseInt((String)JOptionPane.showInputDialog(new JFrame(), "Insira a quantitade de dias", "Sistema de hotel", 1, null, null, null));
                    cliente.novaReserva(numeroap, diasreserva);
                    break;    
                case "LISTAR APARTAMENTOS":
                    ArrayList<String> temp = new ArrayList<>();
                    for(Apartamento i : cliente.listaAp()){
                
                        if(!i.getOcupado()){
    
                            temp.add("Apartamento "+i.numAp+" está livre");
    
                        } else{
    
                            temp.add("Apartamento "+i.numAp+" está ocupado por "+i.getReserva()+" dias");
    
                    
                        }
                    }
                    JOptionPane.showMessageDialog(new JFrame(),temp.toArray(),"Sistema de hotel", JOptionPane.INFORMATION_MESSAGE, null);
                    break;         
                case "REMOVER RESERVA":
                ArrayList<Integer> temp2 = new ArrayList<>();
                for(Apartamento i : cliente.listaAp()){
            
                    if(i.getOcupado()){

                        temp2.add(i.numAp);

                    }
                }
                if(temp2.size()>0){
                    int numeroap2 = (int)JOptionPane.showInputDialog(null, "Escolha a reserva  a ser removida","Sistema de hotel", JOptionPane.QUESTION_MESSAGE, null, temp2.toArray(), null );
                    cliente.removeReserva(numeroap2);


                }else{
                    JOptionPane.showMessageDialog(new JFrame(),"Não há reservas cadastradas","Sistema de hotel", JOptionPane.ERROR_MESSAGE, null);
                }

                break; 


                default:
                        roda = new Object();
            }
            /* 
            if (roda == 2){
                System.out.println("insira o numero do apartamento e a quantidade de dias resevadas");
                int numeroap = leia.nextInt();
                int diasreserva = leia.nextInt();
                cliente.novaReserva(numeroap, diasreserva);  
            }
            
            if (roda == 1){

                for(Apartamento i : cliente.listaAp()){
                
                    if(!i.getOcupado()){
    
                        System.out.println("Apartamento "+i.numAp+" está livre");
    
                    } else{
    
                        System.out.println("Apartamento "+i.numAp+" está ocupado por "+i.getReserva()+" dias");
    
                    
                    }
                }
                
            }leia.close();*/
        } System.out.println("FIM DO PROGRAMA");
        
        
    }
}
