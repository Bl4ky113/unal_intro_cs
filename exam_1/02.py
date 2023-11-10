"""
	Program that:
		Programa que dada una ecuación cuadrática, determine cuántas raíces reales tiene.
"""

def calc_discriminant (a, b, c):
    return ((b ** 2) - (4 * a * c)) ** 0.5

def main ():
    coe_a = int(input())
    coe_b = int(input())
    coe_c = int(input())
    
    discriminant = calc_discriminant(coe_a, coe_b, coe_c)
    
    if (type(discriminant) is complex):
        print("0")
        return
    
    if (discriminant == 0):
        print("1")
    elif (discriminant > 0):
        print("2")
    
    return

if __name__ == "__main__":
    main()
