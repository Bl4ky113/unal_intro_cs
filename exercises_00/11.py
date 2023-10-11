"""
    Program that:
        Makes the Two complement of a decimal number
"""

def main () -> None:
    number: int = int(input())
    bin_number: int = 0

    bin_number = bin(~number)

    print(number, bin(number))
    print(int(bin_number, base=2), bin_number)

if __name__ == "__main__":
    main()
