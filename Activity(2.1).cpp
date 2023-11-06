#include <iostream>

using std::cout;
using std::endl;

//1-. numberOperations 

int operation (int, int); // prototype function 


int main() { //initialize the function: datatype, name, parameters
    int a; //define first variable 
    int b; //define second variable

    char election; //character to store the choice of the user (S,R,M)


    std::cout << "Enter the first number: "; //ask the user for the value of a
    std::cin >> a; //store the answer in the variable

    std::cout << "Enter the second number: "; //ask the user for the value of b
    std::cin >> b; //store the answer in the variable 

    std::cout << "Type (S) to add your numbers, (R) to substract them, (M) to multiply them: "; //ask the user what arithmetic operation they want to do
    std::cin >> election; //store the answer in the char

   switch (election) {
        case 'S':
        {
            int sum = a + b;
            std::cout << "The result of the sum is: " << sum << std::endl;
            break;
        }
        case 'R':
        {
            int rest = a - b;
            std::cout << "The result of the subtraction is: " << rest << std::endl;
            break;
        }
        case 'M':
        {
            int multiplication = a * b;
            std::cout << "The result of the multiplication is: " << multiplication << std::endl;
            break;
        }
        default:
            std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}

   






