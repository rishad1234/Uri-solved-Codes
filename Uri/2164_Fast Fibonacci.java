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
        int number = input.nextInt();
        double first = Math.pow(((1.0 + Math.sqrt(5.0)) / 2.0), (double)number);
        double second = Math.pow(((1.0 - Math.sqrt(5.0)) / 2.0), (double)number);
        double fin = ((first - second) / Math.sqrt(5.0));
        
        System.out.format("%.1f\n", fin);
    }
 
}