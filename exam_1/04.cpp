/* 
	Program that:
		Dado un entero n, 
		dibujar un rectángulo de asteriscos de 2n-1 X 2n con un hueco 
		en forma de rombo como lo muestran los ejemplos.

		********
		***00***
		**0000**
		*000000*
		**0000**
		***00***
		********
*/

#include <iostream>
#include <stdlib.h>

int main (void) {
    int figure_size = 0;
    
    scanf("%d", &figure_size);
    
    int height = (2 * figure_size) - 1;
    int width = (2 * figure_size);
    int half = 0;
    
    for (int i = 0; i < height; i++) {
        int c_whi = i;
                
        if (i == figure_size) {
            half = 1;
        }
        
        if (half) {
            c_whi = height - (i + 1);
        }
        
        int c_ast = (width / 2) - c_whi;
       
        for (int j = 0; j < width; j++) {
            if (c_ast > 0) {
                std::cout << "*";
                c_ast--;
            } else if ( c_ast <= 0 && c_whi > 0) {
                std::cout << "  ";
                j++;
                c_whi--;
            } else {
                std::cout << "*";
            }
        }
        std::cout << "\n";
    }
    
	return 0;
}
