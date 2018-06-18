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
        int testCases;
        testCases = input.nextInt();
        for(int i = 0; i < testCases; i++){
            String namesAndChoice;
            input.nextLine();
            namesAndChoice = input.nextLine();

            long choice1 = input.nextInt();
            long choice2 = input.nextInt();
            boolean par = false;
            boolean impar = false;
            
            long sum = choice1 + choice2;
            
            if(sum % 2 == 0){
                par = true;
            }else{
                impar = true;
            }
            String[] names = namesAndChoice.split(" ");

            if(par == true){
                for(int j = 0; j < 4; j++){
                    if(names[j].equals("PAR")){
                        System.out.println(names[j - 1]);
                        break;
                    }
                }
            }
            if(impar == true){
                for(int j = 0; j < 4; j++){
                    if(names[j].equals("IMPAR")){
                        System.out.println(names[j - 1]);
                        break;
                    }
                }
            }
        }
    }
 
}