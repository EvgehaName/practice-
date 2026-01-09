#include "includes/inh_class.h"

#ifdef _WIN32
	#include <windows.h>
#endif // _WIN32

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif // _WIN32

	Animal animal{ "Животное", 0 };
	Cat cat{ "Муся", 15, "Кошка"};
	Dog dog{ "Вася", 25, "Собака"};
	std::cout << animal.getAnimal() << std::endl;
	std::cout << cat.getAnimal() << std::endl;
	std::cout << dog.getAnimal() << std::endl;
	return 0;
}
