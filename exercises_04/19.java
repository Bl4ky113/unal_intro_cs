/*
 *  Prgoram that:
 *      Escriba una función que determine si un número es narcissista en la base dada.
 */

import java.util.Scanner;

public class Main {
    static public int get_number_digits (int number, int base) {
        int number_digits = 0;
        int copy_number = number;

        while (copy_number > 0) {
            number_digits++;
            copy_number /= base;
        }

        return number_digits;
    }

    static public int get_number_in_base (int number, int base) {
        int copy_number = number;
        int number_in_base = 0;
        int i = 0;

        while (copy_number > 0) {
            number_in_base += (copy_number % base) * Math.pow(10, i);
            copy_number /= base;
            i++;
        }

        return number_in_base;
    }

    static public boolean check_number_narcissist (int number, int base) {
        int digits_in_number = get_number_digits(number, base);
        int number_in_base = get_number_in_base(number, base);
        int copy_number = number_in_base;
        int sum_number = 0;
        int i = 1;
        
        while (copy_number > 0) {
            int base_10_last_position = (int) Math.pow(10, (int) (Math.log(copy_number) / Math.log(10)));
            int digit = (int) copy_number / base_10_last_position;
            double power_base = Math.pow(base, digits_in_number - i);

            sum_number += power_base * digit;
            copy_number -= digit * base_10_last_position;
            i++;

        }

        return sum_number == number;
    }

    static public void main (String[] args) {
        Scanner userInput = new Scanner(System.in);

        int number = 0;
        int base = 0;
        boolean is_narcissist = false;

        number = userInput.nextInt();
        base = userInput.nextInt();

        is_narcissist = check_number_narcissist(number, base);

        System.out.printf("%b\n", is_narcissist);

        return;
    }
}
