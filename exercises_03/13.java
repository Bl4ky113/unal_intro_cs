
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
