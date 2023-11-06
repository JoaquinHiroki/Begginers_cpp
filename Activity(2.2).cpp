#include <iostream>

using std::cout;
using std::endl;

//2-. oddNumber

int number (int); //prototype function

int main() { //initilize the function: datatype, name, parameters
int a; //define the only local variable

    while (true) { //open cicle that will break when the user types correct value

        std::cout << "Type and odd number: "; //ask for the user input
        std::cin >> a; //store the input in that variable 


        if (a % 2 == 1) { //add the first conditional
            std::cout << "You typed an odd number" << std::endl;
            break; //break when it is reached

        } else { //state the other option in case the if is not reached

            std::cout << "Try again with an odd number" << std::endl;

        }

    }

    return 0;
}





