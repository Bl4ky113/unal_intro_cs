/* 
	Program that:
		Lea n números y que calcule el promedio de los números pares con 4 figuras significantes
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int number_inputs = 0;
		int number_added_inputs = 0;
		int sum = 0;
		double average = 0;

		number_inputs = userInput.nextInt();

		for (int i = 0; i < number_inputs; i++) {
			int number = 0;
			number = userInput.nextInt();

			if (number % 2 != 0) {
				continue;
			}

			sum += number;
			number_added_inputs++;
		}

		average = sum / number_added_inputs;

		System.out.printf("%.4f\n", average);

		userInput.close();
	}
}
