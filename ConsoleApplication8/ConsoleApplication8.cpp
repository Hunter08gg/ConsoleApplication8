#include <iostream>// Для использования функции rand()
#include <time.h>// генератор случайных чисел

using namespace std;

int main() {
	
	setlocale(LC_ALL, "");
	// Инициализация генератора случайных чисел
	srand(time(0));

	// Симулировать бросок игральных костей
	int dice1 = rand() % 6 + 1; // Генерация случайного числа от 1 до 6
	int dice2 = rand() % 6 + 1; // Генерация случайного числа от 1 до 6

	// Вывод результатов броска
	cout << "Первая кость: " << dice1 << std::endl;
	cout << "Вторая кость: " << dice2 << std::endl;

	return 0;
}

