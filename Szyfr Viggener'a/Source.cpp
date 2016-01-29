#include<iostream>
#include<fstream>

using namespace std;

int main() {

	int lenght = 0;

	int lenght2 = 0;

	int* intKey;

	int* script;

	char* buffor;

	char* bufforKey;

	fstream file;

	fstream file2;

	file.open("dane.txt", ios::in);

	file2.open("klucz.txt", ios::in);

	if (file.good() == false) {
		cout << "Brak dostepu do pliku" << endl;
	}
	else {

		file.seekg(0, ios::end);
		lenght = file.tellg();
		file.seekg(0, ios::beg);

		buffor = new char[lenght];
		script = new int[lenght];

		file.read(buffor, lenght);

		cout << "Dlugosc tekstu: " << lenght << endl;

		cout << endl;
		cout << endl;


		cout << "tekst z pliku: " << endl;

		cout.write(buffor, lenght);

		cout << endl;
		cout << endl;

	}
		
	if (file2.good() == false) {
			cout << "Brak dostepu do klucza" << endl;
		}
		else {



			file2.seekg(0, ios::end);
			lenght2 = file2.tellg();
			file2.seekg(0, ios::beg);

			bufforKey = new char[lenght2];

			intKey = new int[lenght2];

			file.read(bufforKey, lenght2);

			cout << "Dlugosc klucza: " << lenght2 << endl;

			cout << endl;
			cout << endl;

			cout << "klucz: " << endl;

			cout.write(bufforKey, lenght2);

		}
	
	

	cout << endl;
	cout << endl;

	/*delete[]buffor;
	delete[]script;

	delete[]bufforKey;
	delete[]intKey;*/
	

	system("pause");
	return 0;
}