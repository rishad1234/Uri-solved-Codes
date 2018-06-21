import java.io.IOException;
 
/**
 * IMPORTANT: 
 *      O nome da classe deve ser "Main" para que a sua solução execute
 *      Class name must be "Main" for your solution to execute
 *      El nombre de la clase debe ser "Main" para que su solución ejecutar
 */
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        for(int i = 0; i < 39; i++){
            System.out.print("-");
        }
        for(int i = 1; i < 8; i++){
            if(i != 1 && i != 7){
                for(int j = 0; j < 39; j++){
                    if(j == 0 || j == 38){
                        System.out.print("|");
                    }else{
                        System.out.print(" ");
                    }
                }
            }
            if(i != 7){
                System.out.println("");
            }
        }
        for(int i = 0; i < 39; i++){
            System.out.print("-");
        }
        System.out.println("");
    }
 
}