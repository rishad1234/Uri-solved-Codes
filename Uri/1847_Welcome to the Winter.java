
package urisolve;

import java.util.Scanner;



public class URIsolve {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] temps = new int[3];
        temps[0] = input.nextInt();
        temps[1] = input.nextInt();
        temps[2] = input.nextInt();
//        ist
        if(temps[1] < temps[0] && (temps[2] > temps[1] || temps[2] == temps[1])){
            System.out.println(":)");
        }else if(temps[1] > temps[0] && (temps[2] < temps[1] || temps[2] == temps[1])){
            System.out.println(":(");//2nd
        } 
        //3rd
        if(temps[1] > temps[0] && temps[2] > temps[1]){
            int diff1 = Math.abs(temps[1] - temps[0]);
            int diff2 = Math.abs(temps[2] - temps[1]);
            if(diff1 > diff2){
                System.out.println(":(");
            }
        }
        //4th
        if(temps[1] > temps[0] && temps[2] > temps[1]){
            int diff1 = Math.abs(temps[1] - temps[0]);
            int diff2 = Math.abs(temps[2] - temps[1]);
            if(diff1 <= diff2){
                System.out.println(":)");
            }
        }
        //last 2
        if(temps[1] == temps[0]){
            if(temps[2] > temps[1]){
                System.out.println(":)");
            }else{
                System.out.println(":(");
            }
        }
        //5th
        if(temps[1] < temps[0] && temps[2] < temps[1]){
            int diff1 = Math.abs(temps[2] - temps[1]);
            int diff2 = Math.abs(temps[1] - temps[0]);
            if(diff1 < diff2){
                System.out.println(":)");
            }
        }
        //6th
        if(temps[1] < temps[0] && temps[2] < temps[1]){
            int diff1 = Math.abs(temps[2] - temps[1]);
            int diff2 = Math.abs(temps[1] - temps[0]);
            if(diff1 >= diff2){
                System.out.println(":(");
            }
        }
    }
}