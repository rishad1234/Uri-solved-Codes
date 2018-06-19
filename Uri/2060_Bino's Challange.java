import java.io.IOException;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        int testCase = input.nextInt();
        int two = 0, three = 0, four = 0, five = 0;
        for(int i = 0; i < testCase; i++){
            int number = input.nextInt();
            if(number % 2 == 0){
                two++;
            } if(number % 3 == 0){
                three++;
            } if(number % 5 == 0){
                five++;
            } if(number % 4 == 0){
                four++;
            }
        }
        System.out.format("%d Multiplo(s) de 2", two);
        System.out.println("");
        System.out.format("%d Multiplo(s) de 3", three);
        System.out.println("");
        System.out.format("%d Multiplo(s) de 4", four);
        System.out.println("");
        System.out.format("%d Multiplo(s) de 5", five);
        System.out.println("");
 
    }
 
}