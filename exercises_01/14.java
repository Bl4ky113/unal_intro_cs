
import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int num50Bills = 0;
		int num20Bills = 0;
		int num10Bills = 0;
		int retirement = 0;
		int retirementCopy = 0;

		retirement = userInput.nextInt();
		retirementCopy = retirement;

		num50Bills = retirement / 50000;
		retirement = retirement - (num50Bills * 50000);

		num20Bills = retirement / 20000;
		retirement = retirement - (num20Bills * 20000);

		num10Bills = retirement / 10000;
		retirement = retirement - (num10Bills * 10000);

		System.out.printf("%d\n%d\n%d\n", num50Bills, num20Bills, num10Bills);
	}
}
