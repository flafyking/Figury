#include <iostream>

using namespace std;
float bok,bok2,wys,L,promien;
int wybor,wybor2,wybor3;
float Pi = 3.14;

int plaskie() 
{
	cout << "Wybierz figure (1 - Kwadrat, 2 - Prostokat, 3 - Trojkat, 4 - Rownoleglobok, 5 - Trapez ): " << endl;
	cin >> wybor;
	switch(wybor)
	{
		case 1:
			cout << "Pole kwadratu:" << endl;
				do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
			cout << bok*bok << endl;
			break;
		case 2:
			cout << "Pole prostokatu:" << endl;
				do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
				do
				{
					cout << "Podaj drugi bok: ";
					cin >> bok2;
				}while(bok2 <= 1);
				cout << bok * bok2 << endl;
	
			break;
		case 3:
				cout << "Pole trojkata:" << endl;
			do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
			do
				{
					cout << "Podaj wysokosc: ";
					cin >> wys;
				}while(bok < 0);
				cout << (bok*wys)/2 << endl;
			break;
		case 4:
			cout << "Pole rownolegloboku:" << endl;
			do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
			do
				{
					cout << "Podaj wysokosc: ";
					cin >> wys;
				}while(wys <= 0);
				cout << bok*wys << endl;
			break;
		case 5:
			cout << "Pole trapezu:" << endl;
			do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
			do
				{
					cout << "Podaj drugi bok: ";
					cin >> bok2;
				}while(bok2 <= 0);
			do
				{
					cout << "Podaj wysokosc: ";
					cin >> wys;
				}while(wys <= 0);
				cout << ((bok + bok2)*wys)/2 << endl;
			break;
		default:
			cout << "Sorry mordo, ale nie ma takiego numeru" << endl;
			break;
	}
	
	return 0;
}
int przestrzenne()
{
	cout << "Wybierz figure przestrzenna (1 - Szescian, 2 - Prostopadloscian, 3 - Stozek, 4 - Kula, 5 - Walec ): " << endl;
	cin >> wybor3;
	switch(wybor3)
	{
		case 1:
			cout << "Szescian:" << endl;
				do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
			cout << "Pole: " << 6*(bok*bok) << endl;
			cout << "Objetosc: " << bok*bok*bok << endl;
			break;
		case 2:
			cout << "Prostopadloscian:" << endl;
				do
				{
					cout << "Podaj bok: ";
					cin >> bok;
				}while(bok <= 0);
				do
				{
					cout << "Podaj drugi bok: ";
					cin >> bok2;
				}while(bok2 <= 0);
				do
				{
					cout << "Podaj drugi bok: ";
					cin >> wys;
				}while(wys <= 0);
				cout << "Pole: "  << 2*(bok * bok + bok * wys + bok2 * wys) << endl;
				cout << "Objetosc: "  << bok*bok2*wys << endl;
	
			break;
		case 3:
				cout << "Stozek :" << endl;
			do
				{
					cout << "Podaj L: ";
					cin >> L;
				}while(L <= 0);
			do
				{
					cout << "Podaj promien: ";
					cin >> promien;
				}while(promien < 0);
					do
				{
					cout << "Podaj wysokosc: ";
					cin >> wys;
				}while(wys < 0);
				
				cout << "Pole: "  << (Pi * promien) * (Pi * promien) + Pi * promien * L << endl;
				cout << "Objetosc: "  << (Pi * promien * promien)/3 * wys << endl;
			break;
		case 4:
			cout << "Kula : " << endl;
			do
				{
					cout << "Podaj promien: ";
					cin >> promien;
				}while(promien <= 0);
			cout << "Pole: "  << 4*(Pi*promien*promien) << endl;
			cout << "Objetosc: "  << 4 * (Pi * promien * promien * promien)/3 * wys << endl;
		
			break;
		case 5:
			cout << "Walec:" << endl;
			do
				{
					cout << "Podaj promien: ";
					cin >> promien;
				}while(promien <= 0);
			do
				{
					cout << "Podaj wysokosc: ";
					cin >> wys;
				}while(wys <= 0);
			cout << "Pole: "  << Pi*promien*(promien * wys) << endl;
			cout << "Objetosc: "  << Pi * promien * promien * wys << endl;
			
			break;
		default:
			cout << "Sorry mordo, ale nie ma takiego numeru" << endl;
			break;
	}
	
	return 0;
}

int main()
{
	cout << "Na jakich figurach chcesz pracowac (1 - plaskie, 2 - przestrzenne): " << endl;
	cin >> wybor2;
	switch(wybor2)
	{
		case 1:
			plaskie();
			break;
		case 2:
			przestrzenne();
			break;
			
		default:
			cout << "Sorry mordo, ale nie ma takiego numeru" << endl;
			break;
			
	}
	
}
