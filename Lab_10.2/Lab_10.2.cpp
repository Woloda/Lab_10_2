#include <iostream>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int kil_sliv(char* fname);

int main(void)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char fname[51];
	cout << "Введіть назву фізичного файлу: ";
	cin >> fname;
	cout << endl;

	int lichilnuk = kil_sliv(fname);

	cout << "В цьому реченні слів: " << lichilnuk << endl;

	return 0;
}

int kil_sliv(char* fname)
{
	ifstream fin(fname);

	string lit_r;

	int lichilnuk = 0;
	while (getline(fin, lit_r))
	{
		cout << "Літерний рядок зчитаний з фізичного файлу: ";
		cout << lit_r << endl << endl;

		size_t pos = 0;
		size_t p = 0;
		p = lit_r.find(" ", pos);

		int l = 0;
		while (p < lit_r.length() - 1)
		{
			p = lit_r.find(" ", ++l);
			if (p > pos + 1)
				lichilnuk++;
			pos = p;
		}
	}
	return lichilnuk;
}