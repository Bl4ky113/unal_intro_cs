/* 
	Program that:
		Dado un arreglo, calcule otro equivalente pero eliminando los repetidos. 
		El último debe ser definido del tamaño exacto.
*/

import java.util.Scanner;

public class Main {
    static public int[] readNumberArr (int size) {
        Scanner userInput = new Scanner(System.in);
        int[] number_arr = new int[size];

        for (int i = 0; i < size; i++) {
            number_arr[i] = userInput.nextInt();
        }

        userInput.close();
        return number_arr;
    }

    static public void printArr (int size, int[] arr) {
        for (int i = 0; i < size; i++) {
            System.out.printf("%d\n", arr[i]);
        }

        return;
    }

    static public int getMaskRepeatedNumbersArr (int size, int[] arr) {
        int repeatedIndexMask = 0;

        for (int i = 0; i < size; i++) {
            int number_1 = arr[i];
            for (int j = i; j < size; j++) {
                int number_2 = arr[j];
                if (i == j || number_1 != number_2) {
                    continue;
                }

                repeatedIndexMask = repeatedIndexMask | (1 << j);
            }
        }

        return repeatedIndexMask;
    }

    static public void printFilteredNumbersArr(int size, int[] arr) {
        int repeatedNumberMask = getMaskRepeatedNumbersArr(size, arr);
        int filteredArrSize = size;
        int currentIndex = 0;

        System.out.println(Integer.toBinaryString(repeatedNumberMask));

        for (int i = 0; i < size; i++) {
            int indexInMask = (repeatedNumberMask >> i) % 2;

            if (indexInMask == 1) {
                filteredArrSize--;
                continue;
            }

            System.out.printf("%d\n", arr[i]);
        }

        return;
    }

    static public void main (String[] args) {
        Scanner userInput = new Scanner(System.in);
        int[] arr;
        int repeatedNumberMask = 0;
        int size = 0;

        size = userInput.nextInt();

        arr = readNumberArr(size);

        printFilteredNumbersArr(size, arr);

        userInput.close();
        return;
    }
}
