#include "includes/inh_class.h"
#include "includes/post_prefix_inc.h"
#ifdef _WIN32
	#include <windows.h>
#endif // _WIN32

void practiceInhClass() {
	Animal animal{ "Животное", 0 };
	Cat cat{ "Муся", 15, "Кошка"};
	Dog dog{ "Вася", 25, "Собака"};
	std::cout << animal.getAnimal() << std::endl;
	std::cout << cat.getAnimal() << std::endl;
	std::cout << dog.getAnimal() << std::endl;
}

void practicePostPrefix(int& prefix, int& postfix) {
	Prefix_Postfix post_prefix(prefix, postfix);
}


int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#endif // _WIN32
	// *** Работа с классами ***
	//practiceInhClass();
	// *** Работа с пост и префикс инкремент + указатели ***
	int n = 5;
	practicePostPrefix(n, n);

	return 0;
}
