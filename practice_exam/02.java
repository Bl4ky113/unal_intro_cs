/* 
	Program that:
		Number Decimal -> Hexadecimal
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int number = userInput.nextInt();

		System.out.printf("%x", number);
	}
}
