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
        int counter;
        String word = "";
        counter = input.nextInt();
        input.nextLine();
        for(int i = 0; i < counter; i++){
            word = input.nextLine();
            int length = word.length();
            double time = length * 0.01;
            System.out.format("%.2f", time);
            System.out.println("");
        }
    }
 
}