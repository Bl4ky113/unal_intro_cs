/* 
	
    Program that:
        Lea el tamaño de la matriz, lea fila por fila sus elementos y luego calcule la suma de cada una de sus columnas.
*/

import java.util.Scanner;

public class Main {
	static public int[][] createMatrix (int height, int width) {
		int[][] matrix = new int[height][width];
		Scanner userInput = new Scanner(System.in);
		
		for (int i = 0; i < height; i++) {
			int[] number_row = new int[width];

			for (int j = 0; j < width; j++) {
				int input = 0;

				input = userInput.nextInt();

				number_row[j] = input;
			}

			matrix[i] = number_row;
		}
		
		userInput.close();
		return matrix;
	}

	static public int[][] reverseMatrix (int height, int width, int[][] matrix) {
		int[][] reversedMatrix = new int[width][height];

		for (int i = 0; i < width; i++) {
			int[] reversedRow = new int[height];

			for (int j = 0; j < height; j++) {
				reversedRow[j] = matrix[j][i];
			}

			reversedMatrix[i] = reversedRow;

		}
		
		return reversedMatrix;
	}

	static public int[][] sumMatrixRows (int height, int width, int[][] matrix) {
		int[][] sumMatrix = new int[height][1];

		for (int i = 0; i < height; i++) {
			int[] sum = {0};

			for (int j = 0; j < width; j++) {
				sum[0] += matrix[i][j];
			}

			sumMatrix[i] = sum;
		}

		return sumMatrix;
	}

	static public void printMatrix (int height, int width, int[][] matrix) {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				System.out.printf("%d\t", matrix[i][j]);
			}

			System.out.printf("\n");
		}

		return;
	}

	static public void main (String[] args) {
		Scanner userInput = new Scanner(System.in);

		int[][] matrix;
		int[][] sumMatrix;
		int height = 3;
		int width = 3;

		height = userInput.nextInt();
		width = userInput.nextInt();

		matrix = createMatrix(height, width);
		matrix = reverseMatrix(height, width, matrix);
		sumMatrix = sumMatrixRows(width, height, matrix);

		printMatrix(width, 1, sumMatrix);
		return;
	}
}
