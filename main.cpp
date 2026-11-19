#include <iostream>

int main()
{

    int choice = 0;

    std::cout << "Welcome to the Advanced Git Development Training Program!" << std::endl;
    std::cout << "Learning Git step by step." << std::endl;

    std::cout << "\n--- Main Menu ---" << std::endl;
    std::cout << "1. Start Application" << std::endl;
    std::cout << "2. Settings" << std::endl;
    std::cout << "3. GitHub Remote Synchronisation Test" << std::endl;
    std::cout << "4. About" << std::endl;
    std::cout << "5. Help" << std::endl;
    std::cout << "6. Version Information" << std::endl;
    std::cout << "7. Exit" << std::endl;

    std::cout << "\nEnter your choice: ";
    std::cin >> choice;

    std::cout << "\nYou selected option " << choice << "." << std::endl;

    return 0;
}
