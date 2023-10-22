/* 
	Program that:	
		Escribir un programa que pida un número y si el que se introduce por 
		el teclado es menor de 100 que vuelva a solicitarlo hasta que se 
		ingrese un valor mayor o igual a 100.
*/


import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);
		int number_input = 0;

		while (number_input < 100) {
			number_input = userInput.nextInt();
		}

		System.out.printf("%d\n", number_input);
	}
}
