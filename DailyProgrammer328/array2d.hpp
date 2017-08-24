//
//  array2d.hpp
//  DP_328_LatinSquares
//
//  Created by Michael Brewer on 8/24/17.
//  Copyright © 2017 Michael Brewer. All rights reserved.
//

#ifndef array2d_hpp
#define array2d_hpp

#include <stdio.h>


class Array2D {
public:
    Array2D(int&);

    void setNums();
    void printNums();
    bool checkIfLatinSquare();
    
private:
    int size = 0;
    int **nums = nullptr;
};

#endif /* array2d_hpp */
