//
//  main.cpp
//  PE_4_LargestPalindrome
//
//  Created by Michael Brewer on 8/29/17.
//  Copyright © 2017 Michael Brewer. All rights reserved.
//

#include <iostream>
#include <string>


std::string reverse(std::string str);

int main(int argc, const char * argv[]) {
    
    int n1 = 100;
    int answer = 0;
    
    while (n1 < 1000) {
        int n2 = 100;
        while (n2 < 1000) {
            int num = (n1 * n2);
            std::string sNum = std::to_string(num);
            std::string sNum2;
            sNum2 = reverse(sNum);
            
            if (sNum.compare(sNum2) == 0) {
                if (num > answer)  answer = num;
            }
            
            n2 += 1;
        }
        
        n1 += 1;
    }
    
    
    std::cout << "Largest (XXX x XXX) palindrome is: " << answer << std::endl;
    
    return 0;
}

std::string reverse(std::string str) {
    std::string strTemp = std::string();
    
    int n = (int)str.length();
    
    for (int i = 0; i < n; i++) {
        strTemp += str[n - i - 1];
    }
    
    return strTemp;
}
