import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner ler = new Scanner(System.in);
        int entrada = ler.nextInt();
        float[] notas = new float[3];

        for (int i = 0; i < entrada; i++){
            for (int x = 0; x < 3; x++){
                notas[x] = ler.nextFloat();
            }
            System.out.printf("%.1f\n",((notas[0]*2+notas[1]*3+notas[2]*5)/10));
        }
        ler.close();
    }
}
