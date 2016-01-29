#include<iostream>
#include<fstream>

using namespace std;

int main() {

	int lenght = 0;

	fstream file;

	file.open("dane.txt", ios::binary | ios::in);

	if (file.good() == true) {

		file.seekg(0, ios::end);
		lenght = file.tellg();
		file.seekg(0, ios::beg);

		char* buffor = new char[lenght];

		file.read(buffor, lenght);

		cout << "Dlugosc tekstu: " << lenght << endl;

		cout << endl;
		cout << endl;


		cout << "tekst z pliku: " << endl;
		for (int i = 0; i < lenght; i++) {

			cout << buffor[i];
		}



	}
	else {
		cout << "Brak dostepu do pliku" << endl;
	}

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}