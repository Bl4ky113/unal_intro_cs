/* 
	Program that:
		Dadas unas coordenadas, determinar en que caudrante del plano catersiano se encuentra
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int coord_x = 0;
		int coord_y = 0;

		boolean positive_x = false;
		boolean positive_y = false;

		coord_x = userInput.nextInt();
		coord_y = userInput.nextInt();

		// Check if the point is in an Axis
		if (coord_x == 0 && coord_x == coord_y) {
			System.out.printf("cero\n");
			return;
		}

		if (coord_x == 0) {
			System.out.printf("eje x\n");
			return;
		}

		if (coord_y == 0) {
			System.out.printf("eje y\n");
			return;
		}

		// Check the point quadrant

		positive_x = coord_x > 0;
		positive_y = coord_y > 0;

		if (positive_x && positive_y) {
			System.out.printf("cuadrante 1\n");
		} else if (!positive_x && positive_y) {
			System.out.printf("cuadrante 2\n");
		} else if (!positive_x && !positive_y) {
			System.out.printf("cuadrante 3\n");
		} else if (positive_x && !positive_y) {
			System.out.printf("cuadrante 4\n");
		}
	}
}
