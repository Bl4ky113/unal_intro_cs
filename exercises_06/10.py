"""
    Program that:
        Encuentre los dos elementos de una lista cuya suma sea más cercana a cero.
"""

import random
import time

from typing import Callable

def timer (function: Callable) -> Callable:
    def timer_decorator () -> None:
        time_start = time.time()

        function()

        time_end = time.time()

        print(f"Time Execution: {time_end - time_start}")

    return timer_decorator

@timer
def main () -> None:
    num_list: list[int] = list(set([ random.randint(-4096, 4096) for _ in range(10) ]))
    difference: int = 0
    difference_number_1: int = 0
    difference_number_2: int = 0

    for num_i in num_list:
        print(num_i)
        for num_j in num_list:
            print(num_list.index(num_i) == num_list.index(num_j))
            # init normal checking
            if difference == 0 and difference_number_1 == 0 and difference_number_2 == 0:
                print('_init_')
                difference = abs(num_i - num_j)
                difference_number_1 = num_i
                difference_number_2 = num_j

            # check if num_i and num_j are the same number, with different index
            if num_i == num_j and num_list.index(num_i) != num_list.index(num_j):
                print('_same_')
                difference = 0 # same_number - same_number = 0
                difference_number_1 = num_i
                difference_number_2 = num_j

            # normal check
            # check the difference of the abs value of the numbers is lesser or equal than the one stored
            if abs(num_i - num_j) <= difference and num_list.index(num_i) != num_list.index(num_j):
                print('_normal_')
                difference = abs(num_i - num_j)
                difference_number_1 = num_i
                difference_number_2 = num_j

    print(num_list, len(num_list))
    print(difference, difference_number_1, difference_number_2)

if __name__ == "__main__":
    main()
