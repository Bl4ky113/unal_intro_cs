"""
    Encuentre los dos elementos de una lista con la diferencia más grande entre ellos.
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
    num_list: list[int] = [ random.randint(-4096, 4096) for _ in range(10_000_000) ]
    greatest_number: int = 0
    leastest_number: int = 0
    difference_numbers: int = 0

    # find the greatest number in the list
    for num in num_list:
        if num >= greatest_number:
            greatest_number = num

    # find the leastest number in the list
    for num in num_list:
        if num <= leastest_number:
            leastest_number = num

    difference_numbers = abs(greatest_number - leastest_number)

    print(num_list)
    print(leastest_number, greatest_number, difference_numbers)

if __name__ == "__main__":
    main()
