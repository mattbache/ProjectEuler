//
//  main.cpp
//  ProjectEuler0001
//
//  Created by Matthew Bache on 1/19/22.
//

#include <iostream>
#include <chrono>
using namespace std::chrono;

long Algo1(long i);
long Algo2(long i);
long sumDivisibleBy(long target, int i);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Input natural number to calculate\n";
    long i;
    std::cin >> i;
    std::cout << "\nCalculating the sum of all the multiples of 3 or 5 below " << i << "\n";
    
    auto start = high_resolution_clock::now();
    long ourAnswer = Algo1(i);
    auto stop = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(stop - start);
    std::cout << "Brute force Algo1 in " << duration1.count() << " MICROseconds\n";
    std::cout << "Our Answer is " << ourAnswer << "\n";

    start = high_resolution_clock::now();
    ourAnswer = Algo2(i);
    stop = high_resolution_clock::now();
    auto duration2 = duration_cast<nanoseconds>(stop - start);
    std::cout << "Smart Algo2 in " << duration2.count() << " NANOseconds\n";
    std::cout << "Our Answer is " << ourAnswer << "\n";

    return 0;
}

long Algo1(long target) {
    long ourAnswer = 0;
    for (int i = 1; i < target; i++) {
        if (i%3 == 0 || i%5 == 0) {
            ourAnswer = ourAnswer + i;
        }
    }
    return ourAnswer;
}

long Algo2(long target) {
    long ourAnswer = 0;
    ourAnswer = sumDivisibleBy(target,3)+sumDivisibleBy(target,5)-sumDivisibleBy(target,15);
    return ourAnswer;
}

long sumDivisibleBy(long target, int i) {
    long p = (target-1)/i;
    long sum = 0;
    sum = i*(p*(p+1))/2;
    return sum;
}
