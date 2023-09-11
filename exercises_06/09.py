"""
    Prgram that:
        Encuentre los dos elementos de una lista con la diferencia más grande entre ellos.
        THIS ALGOITHM HAS A O(n^2)
"""

import random
import time

from typing import Callable

def timer (function: callable) -> Callable:
    def timer_decorator () -> None:
        time_start = time.time()

        function()

        time_end = time.time()

        print(f"Time Execution: {time_end - time_start}")

    return timer_decorator

@timer
def main () -> None:
    num_list: list[int] = [ random.randint(-4096, 4096) for _ in range(100_000) ]
    greatest_difference: int = 0
    number_1_difference: int = 0
    number_2_difference: int = 0


    for num_i in num_list:
        for num_j in num_list:
            if abs(num_i - num_j) > greatest_difference:
                greatest_difference = abs(num_i - num_j)

                number_1_difference = num_i
                number_2_difference = num_j

    print(num_list)
    print(number_1_difference, number_2_difference, greatest_difference)

if __name__ == "__main__":
    main()
