//
//  main.cpp
//  ProjectEuler0001
//
//  Created by Matthew Bache on 1/19/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Input natural number to calculate\n";
    int i;
    std::cin >> i;
    std::cout << "\nCalculating the sum of all the multiples of 3 or 5 below " << i << "\n";
    int ourAnswer = 0;
    for (int j = 1; j < i; j++) {
        if (j%3 == 0 || j%5 == 0) {
            ourAnswer = ourAnswer + j;
        }
    }
    
    std::cout << "Our Answer is " << ourAnswer << "\n";
    
    return 0;
}
