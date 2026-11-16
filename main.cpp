#include <iostream>

int main()
{
    int choice = 0;

    
    std::cout << "Welcome to the Git Development Training Program!" << std::endl;
    std::cout << "Learning Git step by step." << std::endl;

    std::cout << "\n--- Main Menu ---" << std::endl;
    std::cout << "1. Start Application" << std::endl;
    std::cout << "2. Settings" << std::endl;
    std::cout << "3. Exit" << std::endl;

    std::cout << "\nEnter your choice: ";
    std::cin >> choice;

    std::cout << "\nYou selected option " << choice << "." << std::endl;

    return 0;
}
