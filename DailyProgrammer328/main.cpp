//
//  main.cpp
//  DP_328_LatinSquares
//
//  Created by Michael Brewer on 8/24/17.
//  Copyright © 2017 Michael Brewer. All rights reserved.
//

/**
 User gives size (n) of array. Then enters all numbers for the n x n array.
 This program checks whether or not the numbers given are in fact a Latin Square
 */

#include <iostream>
#include "array2d.hpp"



int main(int argc, const char * argv[]) {
    
    int n = -1;
    
    while (n < 3) {
        std::cout << "Please enter a number greater than 2: ";
        std::cin >> n;
    }
    
    
    Array2D myArray = Array2D(n);
    
    myArray.setNums();
    myArray.printNums();
    
    std::cout << std::endl;
    std::cout << myArray.checkIfLatinSquare() << std::endl;

    
    return 0;
}
