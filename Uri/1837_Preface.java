
package urisolve;

import java.util.Scanner;



public class URIsolve {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int divide = input.nextInt();
        int divider = input.nextInt();
        
        int quotient = Integer.MIN_VALUE;
        for(int i = 0; i < Math.abs(divider); i++){
            int equation = (divide - i)/divider;
            if(Math.abs(equation) > Math.abs(quotient)){
                quotient = equation;
            }
        }
        int remainder = divide - (divider * quotient);
        
        System.out.println(quotient + " " + remainder);
    }
}