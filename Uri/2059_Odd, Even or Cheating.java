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
        int choice, number1, number2, cheat, accuse;
        choice = input.nextInt();
        number1 = input.nextInt();
        number2 = input.nextInt();
        cheat = input.nextInt();
        accuse = input.nextInt();
        
        if(cheat == 0 && accuse == 0){
            if(choice == 1){
                int sum = number1 + number2;
                if(sum % 2 == 0){
                    System.out.println("Jogador 1 ganha!");
                }else{
                    System.out.println("Jogador 2 ganha!");
                }
            }
            if(choice == 0){
                int sum = number1 + number2;
                if(sum % 2 == 0){
                    System.out.println("Jogador 2 ganha!");
                }else{
                    System.out.println("Jogador 1 ganha!");
                }
            }
        }
        if(cheat == 1 && accuse == 0){
            System.out.println("Jogador 1 ganha!");
        }
        if(cheat == 1 && accuse == 1){
            System.out.println("Jogador 2 ganha!");
        }
        if(cheat == 0 && accuse == 1){
            System.out.println("Jogador 1 ganha!");
        }
    }
 
}