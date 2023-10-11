
import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int radius_inner = userInput.nextInt();
		int radius_outer = userInput.nextInt();
		
		double result_volume = calc_torus_volume(radius_inner, radius_outer);
		double result_area = calc_torus_area(radius_inner, radius_outer);

		System.out.printf("%.2f\n", result_area);
		System.out.printf("%.2f\n", result_volume);
	}

	public static double calc_torus_volume (int radius_inner, int radius_outer) {
		return 2 * Math.pow(Math.PI, 2) * radius_outer * Math.pow(radius_inner, 2);
	} 

	public static double calc_torus_area (int radius_inner, int radius_outer) {
		return 4 * Math.pow(Math.PI, 2) * radius_outer * radius_inner;
	}
}
