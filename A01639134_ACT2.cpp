#include <iostream>
#include "Activity(2.1).cpp"  
#include "Activity(2.2).cpp" 
#include "Activity(2.3).cpp" 
#include "Acitivity(2.4).cpp"  

//Joaquin Hiroki Campos Kishi 


int main() {
    int election;

    while (true) {
        std::cout << "Select the problem you want to solve: " << std::endl;
        std::cout << "1. NUMBER_OPERATIONS" << std::endl;
        std::cout << "2. ODD_NUMBER" << std::endl;
        std::cout << "3. EVEN_SUM" << std::endl;
        std::cout << "4. ARITHMETIC_MEAN" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> election;

        switch (election) {
            case 1:
                int operation(int, int); 
                break;
            case 2:
                int number(int); 
                break;
            case 3:
                int main(); 
                break;
            case 4:
                int main1(); 
                break;
            case 5:
                std::cout << "Terminate the program" << std::endl;
                return 0;
            default:
                std::cout << "Enter a number between 1-4" << std::endl;
        }
    }

    return 0;
}
