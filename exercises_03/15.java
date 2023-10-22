/*
	Program that: 
	Lea un número entero positivo n y, usando ciclos, 
	escribir un programa que calcule la suma de los cuadrados de los 
	n primeros números enteros.
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);
		int loop_limit = 0;
		int squares_sum = 0;

		loop_limit = userInput.nextInt();

		for (int i = 0; i <= loop_limit; i++) {
			squares_sum += i * i;
		}

		System.out.printf("%d\n", squares_sum);
	} 
}
