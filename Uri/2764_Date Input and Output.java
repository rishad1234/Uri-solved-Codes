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
        String date;
        String output1 = "";
        String output2 = "";
        String output3 = "";
        String m = "", d = "", y = "";
        date = input.nextLine();
        char[] dateArray = date.toCharArray();
        int length = dateArray.length;
        for(int i = 0; i < length; i++){
            if(i < 2){
                d += dateArray[i];
            }else if(i > 2 && i < 5){
                m += dateArray[i];
            }else if(i > 5 && i <= length){
                y += dateArray[i];
            }
        }
        for(int i = 0; i < 3; i++){
            if(i == 0){
                output1 += m + "/";
                output2 += y + "/";
                output3 += d + "-";
            }
            if(i == 1){
                output1 += d + "/";
                output2 += m + "/";
                output3 += m + "-";
            }
            if(i == 2){
                output1 += y;
                output2 += d;
                output3 += y;
            }
        }
        
        System.out.println(output1);
        System.out.println(output2);
        System.out.println(output3);
    }
 
}