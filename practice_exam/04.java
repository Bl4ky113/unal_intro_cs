/* 
	Program that:
		Dado intervalo dos números enteros, encuentre los números divisibles entre 7 o por 5.
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int num_1 = 0;
		int num_2 = 0;

		num_1 = userInput.nextInt();
		num_2 = userInput.nextInt();

		for (int i = num_1; i <= num_2; i++) {
			if (i % 5 == 0 || i % 7 == 0) {
				System.out.printf("%d\n", i);
			}
		}

		userInput.close();
	}
}
