import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner ler = new Scanner(System.in);
        int entrada = ler.nextInt();
        ler.close();
        for (int i = 1; i <= entrada; i++){
            if (i % 2 == 0 ){
                System.out.println(i+"^2 = "+(i*i));
            }
        }

    }
}

