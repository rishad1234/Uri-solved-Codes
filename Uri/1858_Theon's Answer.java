
package urisolve;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;



public class URIsolve {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = input.nextInt();
        List<Integer> list = new ArrayList<>();
        for(int i = 0; i < count; i++){
            list.add(input.nextInt());
        }
        System.out.println(list.indexOf(Collections.min(list)) + 1);
    }
}