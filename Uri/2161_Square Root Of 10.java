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
        double root = 0;
        for(int i = 1; i <= number; i++){
            root += 6;
            root = 1 / root;
        }
        root += 3;
        System.out.format("%.10f", root);
        System.out.println("");
    }
 
}