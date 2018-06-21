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
        int minutes = input.nextInt();
        int first = input.nextInt();
        int second = input.nextInt();
        
        if((first + second) <= minutes){
            System.out.println("Farei hoje!");
        }else{
            System.out.println("Deixa para amanha!");
        }
 
    }
 
}