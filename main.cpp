#include "c-echo.h"

<<<<<<< HEAD
int main(int argv, char** argc) {
	std::cout << echo(argv, argc);
	std::cout << "\n";
=======
int main()
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
>>>>>>> 9e1586a5a531438260ebd8e76b0851239f1a7873
}
