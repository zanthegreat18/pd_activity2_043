#include <iostream>
using namespace std;

float Luaspersegipanjang(float p, float l) {
	return p * l;
}

float Luassegitiga(float a, float t) {
	return 0.5 * a * t;
}

float Luaslingkaran(float r) {
	return 3.14 * r * r;
}


int main() {

	float panjang, lebar, tinggi, jejari, alas;
	int pilihan;


	cout << "_____________________" << endl;
	cout << "_______M E N U_______" << endl;
	cout << "_____________________" << endl;

	cout << "1. Luas Persegipanjang" << endl;
	cout << "2. Luas Segitiga" << endl;
	cout << "3. Luas Lingkaran" << endl;
	cout << "4. Exit" << endl;

	cout << "Masukkan pilihan : ";
	cin >> pilihan;

	system("cls");

	do
	{
		cout << "\n\n_____________________" << endl;
		cout << "_______M E N U_______" << endl;
		cout << "_____________________" << endl;

		cout << "1. Luas Persegipanjang" << endl;
		cout << "2. Luas Segitiga" << endl;
		cout << "3. Luas Lingkaran" << endl;
		cout << "4. Exit" << endl;

		cout << "Masukkan pilihan : ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			cout << "Masukan panjang : ";
			cin >> panjang;
			cout << "Masukan lebar : ";
			cin >> lebar;
			cout << "Luas persegipanjang = " << Luaspersegipanjang(panjang, lebar);
			break;

		case 2:
			cout << "Masukan alas : ";
			cin >> alas;
			cout << "masukan tinggi : ";
			cin >> tinggi;
			cout << "Luas segitiga = " << Luassegitiga(alas, tinggi);
			break;

		case 3:
			cout << "Masukan Jari-jari : ";
			cin >> jejari;
			cout << "Luas Lingkaran = " << Luaslingkaran(jejari);
			break;

		case 4:

			break;
		default:
			cout << "pilihan anda salah!";
			break;
		}
	} while (pilihan != 4);

}