//
//  main.cpp
//  PE_2_Fibonnaci
//
//  Created by Michael Brewer on 8/29/17.
//  Copyright © 2017 Michael Brewer. All rights reserved.
//

#include <iostream>

#define LIMIT 4000000


int calcSum(int n1, int n2);

int main(int argc, const char * argv[]) {

    std::cout << calcSum(1, 1) << std::endl;
    
    return 0;
}


int calcSum(int n1, int n2) {
    
    int newNum = n1 + n2;
    if (newNum >= LIMIT) return 0;
    else if (newNum % 2 == 0) {
        return newNum + calcSum(newNum, n1);
    }
    else {
        return calcSum(newNum, n1);
    }
}
