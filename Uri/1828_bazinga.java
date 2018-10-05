
package urisolve;

import java.util.Scanner;

public class UriSolve {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        input.nextLine();
        for(int i = 0; i < number; i++){
            String ans = input.nextLine().trim();
            String[] answers = ans.split(" ");
            
            if(answers[0].equals("tesoura") && answers[1].equals("papel")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("tesoura") && answers[0].equals("papel")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("papel") && answers[1].equals("pedra")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("papel") && answers[0].equals("pedra")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("pedra") && answers[1].equals("lagarto")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("pedra") && answers[0].equals("lagarto")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("lagarto") && answers[1].equals("Spock")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("lagarto") && answers[0].equals("Spock")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("Spock") && answers[1].equals("tesoura")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("Spock") && answers[0].equals("tesoura")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("tesoura") && answers[1].equals("lagarto")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("tesoura") && answers[0].equals("lagarto")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("lagarto") && answers[1].equals("papel")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("lagarto") && answers[0].equals("papel")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("papel") && answers[1].equals("Spock")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("papel") && answers[0].equals("Spock")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("Spock") && answers[1].equals("pedra")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("Spock") && answers[0].equals("pedra")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else if(answers[0].equals("pedra") && answers[1].equals("tesoura")){
                System.out.format("Caso #%d: Bazinga!\n", i + 1);
            }else if(answers[1].equals("pedra") && answers[0].equals("tesoura")){
                System.out.format("Caso #%d: Raj trapaceou!\n", i + 1);
            }else{
                System.out.format("Caso #%d: De novo!\n", i + 1);
            }
        }  
    }
    
}