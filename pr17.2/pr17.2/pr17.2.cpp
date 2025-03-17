//Дано 2 файла вещественных чисел а1.txt и а2.txt.Найти сумму положительных элементов в двух
//файлов.Вывести в консоли данные из файлов и результат.
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
void generateFiles();
{
	ofstream fout1("a1.txt");
	ofstream fout2("a2.txt");

	srand(time(0));
	for (int i = 0; i < 10; ++i) {
		n = rand() % 201 - 100;
	}
	
	srand(time(0));
	for (int i = 0; i < 10; ++i) {
		m = rand() % 201 - 100;
	}
	fout.close();
	fout.close();
}
double numberspositivies(const string& filename)
{
	
}
int main()
{
	setlocale(0, "ru");

	ifstream fin("a1.txt");
	if (!fin.is_open())
	{
		cout << "ошибка открытия файла! " << endl;
	}
	else
	{
		cout << choto << endl;
	}

	cout << choto << endl;

	system("pause");
	return 0;
}

