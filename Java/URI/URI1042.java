import java.util.Scanner;
public class Main
{
  public static void main(String[] args)
  {
    Scanner ler = new Scanner(System.in);
    
    int[] imc = new int[3];
    int[] original = new int[3];

    for(int i = 0; i < 3; i++){
      imc[i] = ler.nextInt();
      original[i] = imc[i];
    }
    
    ler.close();

    if (imc[1] > imc[2]){
      int temp = imc[2];
      imc[2] = imc[1];
      imc[1] = temp;
    }
    if (imc[0] > imc[1] ){
      int temp = imc[1];
      imc[1] = imc[0];
      imc[0] = temp;

    }

    
    if (imc[1] > imc[2]){
      int temp = imc[2];
      imc[2] = imc[1];
      imc[1] = temp;
      
    }
    for(int i = 0; i< 3; i++){
        System.out.println(imc[i]);

    }
    System.out.println();
    for(int i = 0; i< 3; i++){
      System.out.println(original[i]);

    }

  }
}