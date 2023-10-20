/* 
	Program that:
		El promedio de prácticas de un curso se calcula en base a cuatro prácticas calificadas de las cuales 
		se elimina la nota menor y se promedian las tres notas más altas. Diseñe un programa que calcule dicho promedio.
*/

import java.util.Scanner;

public class Main {
	public static void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int[] grades = {0, 0, 0, 0};
		int minorGrade = grades[0];
		int gradesSum = 0;
		double gradesAverage = 0.0;

		for (int i = 0; i < grades.length; i++) {
			grades[i] = userInput.nextInt();

			gradesSum += grades[i];
		}

		minorGrade = grades[0];

		for (int i = 0; i < grades.length; i++) {
			if (grades[i] < minorGrade) {
				minorGrade = grades[i];
			}
		}
		
		gradesSum -= minorGrade;
		gradesAverage = gradesSum / 3.0;
	
		System.out.printf("%.1f\n", gradesAverage);
	}
}
