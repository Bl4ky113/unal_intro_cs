/* 
	Program that:
		Dada los coefiecientes de una ecuación cuadratica determinar cuantas raices tiene.
*/

import java.util.Scanner;

public class Main {

	public static int calcNumberQuadraticEcuationSolutions (int coefficientA, int coefficientB, int coefficientC) {
		double discriminant = Math.sqrt(Math.pow(coefficientB, 2) - (4 * coefficientA * coefficientC));

		if (discriminant == 0) {
			return 1;
		} else if (discriminant > 0) {
			return 2;
		} else {
			return 0;
		}
	}

	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);
		int coefficientA = 0;
		int coefficientB = 0;
		int coefficientC = 0;
		int real_solutions = 0;

		coefficientA = userInput.nextInt();
		coefficientB = userInput.nextInt();
		coefficientC = userInput.nextInt();

		real_solutions = calcNumberQuadraticEcuationSolutions(
			coefficientA,
			coefficientB,
			coefficientC
		);

		System.out.printf("%d\n", real_solutions);
	} 
}
