#include <iostream>
#include <string> // Библиотека, содержащая в себе функции и методы класса "std::string".


int main() {
	system("chcp 1251>null");
	// system("cls"); // Очистка содержимого консоли.
	int n, m;

	// Строки "С".
	
	char cstr[6]{ 'H', 'e', 'l', 'l', 'o', '\0'};
	for (int i = 0; i < 5; i++)
		std::cout << cstr[i];
	std::cout << std::endl;

	std::cout << cstr << std::endl;

	char cstr2[] = "Hello World!"; // Можно писать так же - "char cstr2[]{ "Hello World!" };"
	std::cout << cstr2 << std::endl;
	

	// Строки "С++".
	
	std::string mystr; // Пустая строка ("").
	mystr = "Hello World!";
	std::cout << mystr << std::endl;

	std::string mystr1 = "Green", mystr2 = "Apple";
	std::string mystr3 = mystr1 + ' ' + mystr2 + '!';
	std::cout << mystr3 << std::endl;

	mystr2 += "...";
	std::cout << mystr2 << std::endl;
	

	// Ввод строки.
	
	std::string name;
	std::cout << "Введите имя: ";
	// std::cin >> name; // Проблема: ввод одного лишь слова.
	std::getline(std::cin, name);
	std::cout << "Здравствуйте, " << name << "!\n" << std::endl;

	std::cout << "Сколько Вам лет? Ввод: ";
	int age;
	std::cin >> age;
	std::cout << "Когда-то и мне было " << age << "...\n";

	std::cin.ignore();

	std::cout << "А кем Вы работаете? Ввод: ";
	std::string job;
	std::getline(std::cin, job);
	std::cout << "Всегда хотел стать " << job << "!\n";


	// Методы строк.
	
	std::string str = "Hello World!";

	// Методы "size" и "length", возвращающие длину строки.
	// std::cout << str.size() << std::endl;   // Вывод: "12".
	// std::cout << str.length() << std::endl; // Вывод: "12".

	// Метод "insert", вставляющий подстроку в строку.
	// str.insert(3, "###");
	// std::cout << str << std::endl; // Вывод: "Hel###lo World!".

	// Метод "replace", заменяющий часть строки на новую.
	// str.replace(3, 5, "!!!");
	// std::cout << str << std::endl; // Вывод: "Hel!!!rld!".

	// Методы "find" и "rfind", реализующие линейный поиск внутри строки.
	// std::cout << str.find('l') << std::endl;       // Вывод: "2".
	// std::cout << str.find('l', 5) << std::endl;    // Вывод: "9".
	// std::cout << str.rfind('o') << std::endl;      // Вывод: "7".
	// std::cout << str.rfind('o', 5) << std::endl;   // Вывод: "4".

	// Метод "substr", извлекающий подстроку из строки.
	// std::cout << str.substr(4) << std::endl;    // Вывод: "o World!".
	// std::cout << str.substr(3, 6) << std::endl; // Вывод: "lo Wor".
	

	// Изменение регистра строки.
	std::string s1 = "Hello World!";
	for (int i = 0; i < s1.length(); i++)
		s1[i] = std::toupper(s1[i]);
	std::cout << s1 << std::endl;



	return 0;
}

// Строка - упорядоченный набор символьных элементов, объединённых в массив, в конце которого располагается нуль-терминатор (\0).
// --------------------------------------------------------------------------------------------------------------------------------
// Конструктор класса - это функция, вызываемая в момент создания объекта класса.
// --------------------------------------------------------------------------------------------------------------------------------
// Конкатенация строк - это процесс слияния двух или более строк в одну новую. 
// --------------------------------------------------------------------------------------------------------------------------------
// Метод - специальная функция, принадлежащая какому-либо объекту и применяемая исключительно этим объектом. 