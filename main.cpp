//
//  main.cpp
//  ProjectEuler0001
//
//  Created by Matthew Bache on 1/19/22.
//

#include <iostream>
#include <chrono>
using namespace std::chrono;

long Algo1(int i);
long Algo2(int i);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Input natural number to calculate\n";
    int i;
    std::cin >> i;
    std::cout << "\nCalculating the sum of all the multiples of 3 or 5 below " << i << "\n";
    
    auto start = high_resolution_clock::now();
    long ourAnswer = Algo1(i);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "Our Answer is " << ourAnswer << "\n";
    std::cout << "Brute force Algo1 in " << duration.count() << " microseconds\n";
    
    return 0;
}

long Algo1(int target) {
    long ourAnswer = 0;
    for (int i = 1; i < target; i++) {
        if (i%3 == 0 || i%5 == 0) {
            ourAnswer = ourAnswer + i;
        }
    }
    return ourAnswer;
}

long Algo2(int target) {
    long ourAnswer = 0;

    return ourAnswer;
}
