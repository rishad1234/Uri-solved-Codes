import java.io.IOException;
 import java.util.Scanner;
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        
        for(int i = 0; i < number; i++){
            int level = input.nextInt();
            if(level > 8000){
                System.out.println("Mais de 8000!");
            }else{
                System.out.println("Inseto!");
            }
        } 
 
    }
 
}