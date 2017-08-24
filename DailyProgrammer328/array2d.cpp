//
//  array2d.cpp
//  DP_328_LatinSquares
//
//  Created by Michael Brewer on 8/24/17.
//  Copyright © 2017 Michael Brewer. All rights reserved.
//

#include <iostream>
#include "array2d.hpp"


Array2D::Array2D(int &n) {
    // constructor
    size = n;
    
    this->nums = new int*[size];
    for (int i = 0; i < size; i++) {
        this->nums[i] = new int[size];
    }
}


// sets the numbers for the array
void Array2D::setNums() {
    
    for (int i = 0; i < size; i++) {
        std::cout << "Enter row " << i;
        std::cout << ", separate by spaces. Enter when done with row.";
        std::cout << std::endl;
        
        for (int j = 0; j < size; j++) {
            std::cin >> this->nums[i][j];
        }
    }
    
    std::cout << std::endl;
}


// checks whether or not the array forms a latin square.
// checks rows and columns
bool Array2D::checkIfLatinSquare() {
    
    int *temp;
    
    temp = new int[size];
    
    // check rows
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < j; k++) {
                if (this->nums[i][k] == this->nums[i][j]) return false;
            }
        }
    }
    
    
    // check columns
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < j; k++) {
                if (this->nums[j][i] == this->nums[k][i]) return false;
            }
        }
    }
    
    delete temp;
    return true;
}



// print the 2D array
void Array2D::printNums() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << this->nums[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
