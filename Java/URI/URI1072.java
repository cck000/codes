import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner ler = new Scanner(System.in);
        int x = ler.nextInt();

        int [] vet = new int[x];
        for (int i = 0; i < x; i++){
            vet[i] = ler.nextInt();
        }
        ler.close();
        int in = 0 , out = 0;
        for (int i : vet ){

            if (i >= 10 && i <= 20){
                in += 1;

            } else {
                out += 1;
            }
        }
        System.out.println(in+" in\n"+out+" out");
    }
}
