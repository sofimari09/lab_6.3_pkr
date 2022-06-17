#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

typedef int Info;
struct Elem
{
	Elem* next,
		* prev;
	Info info;
};


void enqueue(Elem*& first, Elem*& last, Info value)
{
	Elem* tmp = new Elem; // 1
	tmp->info = value; // 2
	tmp->next = NULL; // 3
	if (last != NULL)
		last->next = tmp; // 4
	tmp->prev = last; // 5
	last = tmp; // 6
	if (first == NULL)
		first = tmp; // 7
}

int Count(Elem*& first,  Info value) {
	int k = 0;
	Elem* tmp = first;
	while (tmp != NULL)
	{
		if (tmp->info == value) 
			k++;
			tmp = tmp->next;
		
	}
	return k;
}

void Create(Elem*& first, Elem*& last)
{
	for (int i = -20; i <= 20; i++)
	{
		enqueue(first, last, i);
	}
}


void Print(Elem*& first, Elem*& last)
{
	Elem* tmp = first;
	while (tmp != NULL)
	{
		cout << tmp->info << " ";
		tmp = tmp->next;
	}
	cout << endl;
}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Elem* first = NULL,
		* last = NULL;
	Create(first, last);
	Print(first, last);

	int searchItem;
	cout << "Пошук:"; cin >> searchItem;
	cout << "Кількість знайдених елементів:" << Count(first, searchItem) << endl;
	return 0;
}
