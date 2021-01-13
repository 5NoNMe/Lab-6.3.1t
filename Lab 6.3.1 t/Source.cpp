#include <iostream>
#include <iomanip>
#include <time.h>
#include <windows.h>

using namespace std;

template < typename T >
void input(T* a, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}

template < typename T >
void Print(T* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

template < typename T >
void indexMax(T* a, const int size)
{
	bool flag = false;
	int max, imax;
	for (int i = 0; i < size; i++)
	{
		if ((a[i] % 2) == 0)
		{
			if (!flag)
			{
				flag = true;
				max = a[i];
				imax = i;
			}
			else if (max < a[i])
			{
				max = a[i];
				imax = i;
			}

		}
	}

	if (!flag)
	{
		cout << "Всі числа не парні. " << endl;
	}
	else
	{
		cout << "Індекс найбільшого парного елемента масиву: " << imax << endl;
	}

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));

	int n = 0;
	cout << "Введіть розмір масиву: "; cin >> n;
	int* a = new int[n];

	input(a, n);
	Print(a, n);
	indexMax(a, n);

	delete[] a;

	return 0;
}