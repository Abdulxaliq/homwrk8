#include <iostream>

using namespace std;

int main()
{



	int secim = 0;
	double azn = 0;
	double num1 = 0;
	double num2 = 0;
	double cvb = 0;
	double mil = 0;
	double dollar = 0;
	do {
		cout << "Hansi proqrami istediyinizi secin:" << endl;
		cout << "1. Valyuta mubadilesi" << endl;
		cout << "2. Kalkulyator" << endl;
		cout << "3. Mili kilometre cevirmek" << endl;
		cin >> secim;

		switch (secim) {
		case 1:
			cout << "Valyuta mubadilesi (manati yazin): ";
			cin >> azn;
			dollar = azn * 1.70;
			cout << "Manat beraberdir " << dollar << "dollara";
			break;
		case 2:
			cout << "Secim edin (+,-,*,/): ";
			cin >> secim;
			cout << "1- ci ededi daxil edin: ";
			cin >> num1;
			cout << "2- ci ededi daxil edin: ";
			cin >> num2;
			if (secim == '+') cvb = num1 + num2;
			else if (secim == '-') cvb = num1 - num2;
			else if (secim == '*') cvb = num1 * num2;
			else if (secim == '/') cvb = num1 / num2;
			else
			{
				cout << "sifira bolmek olmaz" << endl;
			}
			cout << "Cavab " << cvb << endl;
			break;
		case 3:
			cout << "mili qeyd edin: ";
			cin >> mil;
			double km = mil * 1.60934;
			cout << "qeyd etdiyinizmil " << km << " km ya beraberdir" << endl;
			break;
		}
		return 0;
	} while (secim != 4);




	double musbet = 0;
	double menfi = 0;
	double sifir = 0;
	double sayi = 0;
	double yazilansayi = 0;

	cout << "10 tam eded daxil edin: ";

	do {
		cin >> sayi;

		if (sayi > 0) musbet++;
		else if (sayi < 0) menfi++;
		else sifir++;

		yazilansayi++;


	} while (yazilansayi < 10);

	int toplam = 10;
	double musbetfaizi = (musbet * 100) / toplam;
	double menfifaizi = (menfi * 100) / toplam;
	double sifirfaizi = (sifir * 100) / toplam;
	cout << "Musbetin faizi " << musbetfaizi << endl;
	cout << "Menfi faizi " << musbetfaizi << endl;
	cout << "Sifir faizi " << musbetfaizi << endl;
}