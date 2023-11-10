/* 
	Program that:
		Programa que lea (en decimal) 5 elementos pertenecientes a cierto conjunto y calcule la máscara de bits para el mismo.
*/

import java.util.Scanner;

public class Main {
    public static void main (String[] args) {
        Scanner userInput = new Scanner(System.in);

        int num_inputs = userInput.nextInt();
        int sum_mask = 0;

        for (int i = 0; i < num_inputs; i++) {
            int number = userInput.nextInt();
            int number_mask = 1 << number - 1;

            sum_mask = sum_mask | number_mask;
        }

        System.out.printf("%d\n", sum_mask);

        userInput.close();
    }
}
