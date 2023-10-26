/* 
	Program that:
		Dado un número, muestre la suma de sus dígitos.
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);
		int sum = 0;
		int number = 0;

		number = userInput.nextInt();

		while (number > 0) {
			sum += number % 10;	
			number /= 10;
		}

		System.out.printf("%d", sum);

		userInput.close();
	}
}
