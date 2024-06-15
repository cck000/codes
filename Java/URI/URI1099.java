import java.util.Scanner;

public class Main{

    public static void main (String args[]){

        Scanner leia = new Scanner(System.in);
        
        int casos = leia.nextInt();
        for(int i = 0; i < casos; i++){
            
            
            int x = leia.nextInt();
            int y = leia.nextInt();
            
            int entre = 0;
            if (y > x){
                for(int j = x+1; j < y; j++){

                    if (j%2 != 0){

                        entre += j;
                    }

                }
            } else {
                for(int j = y+1; j < x; j++){

                    if (j%2 != 0){

                        entre += j;
                    }

                }                


            }

            System.out.println(entre);

        }
        leia.close();
    }
}