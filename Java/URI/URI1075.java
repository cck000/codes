import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner ler = new Scanner(System.in);
        int entrada = ler.nextInt();
        ler.close();
        for (int i = 1; i < 10000; i++){

            if (i % entrada == 2){
                System.out.println(i);
            }
        }

    }
}