#include <iostream>
#include <list>

using std::cout;
using std::endl;

//4-. arithmeticMean

int main1 () { //initialize the function
    std::list <int> numbersList; //initialize an empty list 

    int counter; //variable of the numbers to add
    int value; //variable to store teh numbers

    std::cout << "Enter the amount of numbers: "; //ask for the numbers
    std::cin >> counter;

    for (int i = 0; i < counter; i++) { //ask for the value of the numbers
        std::cout << "Enter value: " << i + 1 << ": ";
        std::cin >> value;
        numbersList.push_back(value); //add the values to the list 

    }


    int sum = 0; //initialize variable 
    for (int item : numbersList) {
        sum += item;
    }

    double mean = static_cast<double>(sum) / numbersList.size(); //convert to float 

    

    std::cout << "The mean is: " << mean << std::endl; //print the mean

    return 0; 




}