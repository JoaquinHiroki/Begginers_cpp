#include <iostream>


using std::cout;
using std::endl;

//3-. evenSum 



int main() { //initialize the function 
    int sum = 0; //start the counter in 0 

    for (int i = 0; i <= 100; i += 2) { //set a list with values from 0-100 with stepsize of 2
        sum += i; //sum the values inside that list 
    }

    std::cout << "Sum of even numbers: " << sum << std::endl; //print the sum of values of the list 

    return 0;
}
