/* 
	Program that:
		Determine si un número es primo o no.
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int number = userInput.nextInt();

		for (int i = 1; i < number; i++) {
			if ( (number % i) == 0 && ((number != i) && (i != 1) )) {
				System.out.printf("No Primo\n");
				return;
			}
		}

		System.out.printf("Primo\n");
		userInput.close();
		return;
	}
}
