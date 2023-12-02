/*
 *  Dados dos arreglos de enteros de igual tamaño, calcule un arreglo 
 *  que contenga la suma de los elementos correspondientes de los otros dos.
 */

import java.util.Scanner;

public class Main {
    static public int[] readNumberArr (int size) {
        Scanner userInput = new Scanner(System.in);
        int[] arr = new int[size];

        for (int i = 0; i < size; i++) {
            arr[i] = userInput.nextInt();
        }

        return arr;
    }

    static public int[] sumNumberArr(int size, int[] arr1, int[] arr2) {
        int[] arrSum = new int[size];

        for (int i = 0; i < size; i++) {
            arrSum[i] = arr1[i] + arr2[i];
        }
        
        return arrSum;
    }

    static public void printArr (int size, int[] arr) {
        for (int i = 0; i < size; i++) {
            System.out.printf("%d\n", arr[i]);
        }

        return;
    }

    static public void main (String[] args) {
        Scanner userInput = new Scanner(System.in);
        int size = 0;

        size = userInput.nextInt();

        int[] arr1 = readNumberArr(size);
        int[] arr2 = readNumberArr(size);

        int[] arrSum = sumNumberArr(size, arr1, arr2);

        printArr(size, arrSum);

        return;
    }
}
