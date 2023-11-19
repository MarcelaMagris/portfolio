import java.util.Scanner;
import java.util.Random;

class Main {
  public static void main(String[] args) {
    Random gerador = new Random();
    int numero = gerador.nextInt(100);
    Scanner entrada = new Scanner(System.in);
    int palpite=-1;
    while(palpite!=numero){
      System.out.println("Digite um número:");
      palpite = entrada.nextInt();
      if(palpite==numero){
        System.out.println("Parabéns, você acertou!");
      }else if(palpite>numero){
        System.out.println("O número é menor");
      }else if(palpite<numero){
        System.out.println("O número é maior");
      }
    }
  }
}
