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
        while(input.hasNext()){
            int one = input.nextInt();
            int two = input.nextInt();
            
            if(one == two){
                System.out.println(one);
            }
            if(one > two){
                System.out.println(one);
            }
            if(one < two){
                System.out.println(two);
            }
        }
 
    }
 
}