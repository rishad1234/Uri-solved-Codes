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
        int number;
        int [][] array = new int[100][100];
        while((number = input.nextInt()) != 0){
            for(int i = 0; i < 100; i++){
                for(int j = 0; j < 100; j++){
                    array[i][j] = 1;
                }            
            }
            
            if(number == 1){
                System.out.format("%3d" ,array[0][0]);
                System.out.println("");
                System.out.println("");
            }else if(number == 2){
                System.out.format("%3d %3d\n", array[0][0], array[0][1]);
                System.out.format("%3d %3d\n", array[0][0], array[0][1]);
                System.out.println("");
            }else{
                double counter = Math.ceil(number / 2.0);
                int condition = number - 1;
                for(int temp = 2; temp <= counter; temp++){
                    for(int i = temp - 1; i < condition; i++){
                        for(int j = temp - 1; j < condition; j++){
                            array[i][j] = temp;
                        }
                    }
                    condition--;
                }
                for(int i = 0; i < number; i++){
                    for(int j = 0; j < number; j++){
                        if(j != number - 1){
                            System.out.format("%3d ", array[i][j]);
                        }else{
                            System.out.format("%3d", array[i][j]);
                        }
                    }
                    System.out.println("");
                }
                System.out.println("");
            }
        }
 
    }
 
}