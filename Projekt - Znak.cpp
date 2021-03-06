//Autor pliku - Cezary Piątek
//05.12.2017

#include "stdafx.h" //Prekompilowany plik nagłówkowy Visual Studio.
#include "iostream" //Plik nagłówkowy do obsługi strumieni wejscia wyjscia (input/output).
#include "conio.h" //Plik nagłówkowy potrzebny do obsługi funkcji _getch().
#include "windows.h" //Plik nagłówkowy potrzebny do obsługi okna konsoli (współrzędne, zmienianie wielkosci okna, itd.).
using namespace std; //Za pomocą słów kluczowych using namespace informujemy, że chcemy aby wszystkie funkcje, klasy i szablony należące do przestrzeni nazw nie wymagały przedrostka.

void okno(int &szerokosc, int &wysokosc) //Definiujemy funkcję bez zwracania wartosci (void) o nazwie okno, z argumentami ze zwrotem wartosci szerokosc oraz wysokosc.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	HWND konsola = GetConsoleWindow(); //Uchwyt okna HWND o nazwie konsola w którym jest pobierana wielkość konsoli
	RECT okno; //Struktura RECT o nazwie okno definiuje współrzędne lewego górnego i prawego dolnego narożnika prostokąta.
	GetWindowRect(konsola, &okno); //funkcja GetWindowRect pobiera prostokąt określający wymiary (konsola) i położenie podanego okna (&okno).
	MoveWindow(konsola, okno.left, okno.top, 800, 600, TRUE); //MoveWindow ustawia nową szerokość i wysokość dla tego okna - (800x600 to nowa szerokosc w pikselach)
	SetConsoleTitleA("Projekt - Cezary Piatek"); //Zmienia tytul okna konsoli na podany w cudzyslowie.
	CONSOLE_SCREEN_BUFFER_INFO opis; //Struktura opisująca okno o nazwie opis.
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &opis); // Pobieranie informacji o oknie.
	szerokosc = opis.srWindow.Right + 1; // Przypisanie zmiennej szerokosc ilosc znakow od prawej minus ilosc znakow od prawej plus jeden.
	wysokosc = opis.srWindow.Bottom + 1; // Przypisanie zmiennej wysokosc ilosc znakow od dolu do gory plus jeden.
} // Zamykamy nawiasem klamrowym (}) funkcję void.

void samouczek() //Definiujemy funkcję bez zwracania wartosci (void) o nazwie samouczek, bez argumentów.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	cout << "SAMOUCZEK" << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "--------------------------------------------------------------------------------" << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Program narysuje za pomoca kodu ASCII figure." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Mozesz poruszac figura za pomoca strzalek na klawiaturze." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Mozesz takze zmieniac wielkosc figury za pomoca przycisku" << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << " + ktory zwieksza powierzchnie dolna i gorna o 2 znaki i skosne o 1 znak, lub" << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << " - ktory zmniejsza powierzchnie dolna i gorna o 2 znaki i skosne o 1 znak." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Jesli chcesz zakonczyc program wcisnij przycisk ESC." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Nie mozesz poruszac sie figura poza krawedzie okna konsoli." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "Nie mozesz powiekszac figury na granicach okna konsoli." << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
	cout << "--------------------------------------------------------------------------------" << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
} //Zamykamy nawiasem klamrowym (}) funkcję void.

void wsp(int x, int y) //Definiujemy funkcję bez zwracania wartosci (void) o nazwie wsp, z dwoma argumentami int - x oraz y.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	COORD wsp; //Struktura COORD o nazwie wsp określa koordynaty komórki znakowej w buforze ekranu konsoli.
	wsp.X = x; //Do współrzędnej X przekazywana jest wartość zmiennej x.
	wsp.Y = y; //Do współrzędnej Y przekazywana jest wartość zmiennej x.
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), wsp); //Ustawia pozycję kursora dla określonej konsoli. Funkcja GetStdHandle pobiera uchwyt do standardowego wyjścia (STD_OUTPUT_HANDLE).
} //Zamykamy nawiasem klamrowym (}) funkcję void.

void ukryj() //Definiujemy funkcję bez zwracania wartosci (void) o nazwie ukryj, bez argumentów.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	HANDLE ukryj = GetStdHandle(STD_OUTPUT_HANDLE); //Definiujemy uchwyt o nazwie ukryj i przypisujemy jej wartosc funkcji GetStdHandle. Funkcja GetStdHandle pobiera uchwyt do standardowego wyjścia (STD_OUTPUT_HANDLE).
	CONSOLE_CURSOR_INFO info; //Struktura CONSOLE_CURSOR_INFO o nazwie info zawiera informacje o kursorze konsoli.
	GetConsoleCursorInfo(ukryj, &info); //Funkcja GetConsoleCursorInfo zwraca informacje widoczności kursora konsoli.
	info.bVisible = FALSE; //bVisible określa że kursor jest ukryty (FALSE).
	SetConsoleCursorInfo(ukryj, &info); //Funkcja SetConsoleCursorInfo ustawia widoczność kursora dla określonego bufora ekranu konsoli.
} //Zamykamy nawiasem klamrowym (}) funkcję void.

void wprowadzaniedanych(char &znak, int &bok, int &skos, int szerokosc, int wysokosc) //Definiujemy funkcję bez zwracania wartosci (void) o nazwie wprowadzaniedanych, z trzema argumentami.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	cout << "Wybierz znak kodu ASCII w jakim ma sie pokazac figura: "; //Cout wyprowadza tekst w cudzyslowie na ekran.
	cin >> znak; //Wprowadzamy zmienną znak z klawiatury (podczas uruchomionego programu).
	do //Definiujemy pętlę do while.
	{ //Otwieramy nawiasem klamrowym ({) pętlę do while.
		cout << "Wprowadz dlugosc gornej oraz dolnej powierzchni (od 4 do " << szerokosc/2 << "): "; //Cout wyprowadza tekst w cudzyslowie na ekran.
		cin >> bok; //Wprowadzamy zmienną bok z klawiatury (podczas uruchomionego programu).
		if (bok < 4 || bok > szerokosc/2) //Definiujemy instrukcję warunkową - jeżeli zmienna bok jest mniejsza od 4 lub większa od szerokosc przez 2.
		{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
			cout << "Sprobuj ponownie wprowadzic dlugosc od 4 do " << szerokosc/2 << "): " << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
		} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
	} while (bok < 4 || bok > szerokosc/2); //Zamykamy nawiasem klamrowym (}) pętlę do while, oraz będzie robić się tak długo dopóki zmienna bok będzie mniejsza od 4 lub wieksza od szerokosc przez 2.
	do //Definiujemy pętlę do while.
	{ //Otwieramy nawiasem klamrowym ({) pętlę do while.
		cout << "Wprowadz dlugosc powierzchni skosnych (od 1 do " << wysokosc/4 << "): "; //Cout wyprowadza tekst w cudzyslowie na ekran.
		cin >> skos; //Wprowadzamy zmienną skos z klawiatury (podczas uruchomionego programu).
		if (skos < 1 || skos > wysokosc/4) //Definiujemy instrukcję warunkową - jeżeli zmienna skos jest mnniejsza od 1 lub większa od wysokosc przez 4.
		{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
			cout << "Sprobuj ponownie wprowadzic dlugosc skosnych od 1 do " << wysokosc/4  << endl; //Cout wyprowadza tekst w cudzyslowie na ekran, endl przechodzi do nowej linii.
		} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
	} while (skos < 1 || skos > wysokosc/4); //Zamykamy nawiasem klamrowym (}) pętlę do while, oraz będzie robić się tak długo dopóki zmienna skos będzie mniejsza od 1 lub wieksza od od wysokosc przez 4.
} //Zamykamy nawiasem klamrowym (}) funkcję void.

void poruszanie(int x, int &x1, int y, int &y1, int bok, char &znak, int skos, char &klawisz, int wysokosc, int szerokosc) //Definiujemy funkcję bez zwracania wartosci (void) o nazwie poruszanie, z osmioma argumentami.
{ //Otwieramy nawiasem klamrowym ({) funkcję void.
	do //Definiujemy pętlę do while.
	{ //Otwieramy nawiasem klamrowym ({) pętlę do while.
		system("cls"); //Poleceniem system("cls"); czyscimy okno konsoli.
		x1 = x; y1 = y; //Zmiennej x1 przypisujemy wartość x, oraz zmiennej y1 przypisujemy wartosc y.
		wsp(x1, y1); //Wywołujemy funkcję wsp z dwoma argumentami - x1 oraz y1.
		for (int i = 1; i <= bok; i++) //Definiujemy pętlę for - Będzie się robić tak długo dopóki i nie wzrośnie do takiej samej wartości jak zmienna bok.
		{ //Otwieramy nawiasem klamrowym ({) pętlę for.
			x1 = x1 - i; //Zmiennej x1 przypisujemy wartość x1 minus i.
			wsp(x1, y1); //Wywołujemy funkcję wsp z dwoma argumentami - x1 oraz y1.
			cout << znak; //Cout wypisuje zmienną znak na ekran.
			x1 = x; //Zmiennej x1 przypisujemy wartość x.
		} //Zamykamy nawiasem klamrowym (}) pętlę for.
		for (int i = 1; i <= skos; i++) //Definiujemy pętlę for - Będzie się robić tak długo dopóki i nie wzrośnie do takiej samej wartości jak zmienna skos.
		{ //Otwieramy nawiasem klamrowym ({) pętlę for.
			y1++; //Zwiększamy zmienną y1 o 1.
			x1 = x1 - i - 1; //Zmiennej x1 przypisujemy wartość x1 minus i minus 1.
			wsp(x1, y1); //Wywołujemy funkcję wsp z dwoma argumentami - x1 oraz y1.
			cout << znak; //Cout wypisuje zmienną znak na ekran.
			x1 = x; //Zmiennej x1 przypisujemy wartość x.
		} //Zamykamy nawiasem klamrowym (}) pętlę for.
		for (int i = 1; i <= skos; i++) //Definiujemy pętlę for - Będzie się robić tak długo dopóki i nie wzrośnie do takiej samej wartości jak zmienna skos.
		{ //Otwieramy nawiasem klamrowym ({) pętlę for.
			y1++; //Zwiększamy zmienną y1 o 1.
			x1 = x1 + i - skos - 1; //Zmiennej x1 przypisujemy wartość x1 plus i minus zmienna skos minus 1.
			wsp(x1, y1); //Wywołujemy funkcję wsp z dwoma argumentami - x1 oraz y1.
			cout << znak; //Cout wypisuje zmienną znak na ekran.
			x1 = x; //Zmiennej x1 przypisujemy wartość x.
		} //Zamykamy nawiasem klamrowym (}) pętlę for.
		for (int i = 1; i <= bok; i++)  //Definiujemy pętlę for - Będzie się robić tak długo dopóki i nie wzrośnie do takiej samej wartości jak zmienna bok.
		{ //Otwieramy nawiasem klamrowym ({) pętlę for.
			x1 = x1 - i; //Zmiennej x1 przypisujemy wartość x1 minus i.
			wsp(x1, y1); //Wywołujemy funkcję wsp z dwoma argumentami - x1 oraz y1.
			cout << znak; //Cout wypisuje zmienną znak na ekran.
			x1 = x; //Zmiennej x1 przypisujemy wartość x.
		} //Zamykamy nawiasem klamrowym (}) pętlę for.
		ukryj(); //Wywołujemy funkcję ukryj bez argumentów.
		klawisz = _getch(); //Zmienna klawisz (_getch()) oprócz oczekiwania na znak, pozwala nam również odczytać kod wciśniętego klawisza na klawiaturze.
		switch (klawisz) //Definiujemy instrukcję wyboru od zmiennej klawisz.
		{ //Otwieramy nawiasem klamrowym ({) instrukcję wyboru switch.
		case '+': //W przypadku kiedy zmienna klawisz wynosi '+' rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if ((x1 - bok < 2) || (x1 - skos < 2) || y1 > wysokosc - 3) //Definiujemy instrukcję warunkową - jeżeli wartosc x1 minus bok jest mniejsza niz 2 lub wartosc x1 minus skos jest mniejsza niz 2 lub wartosc y1 większa niz wysokosc - 2
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			skos = skos + 1; //Zmiennej skos przypisujemy wartosc skos plus 1.
			bok = bok + 2; //Zmiennej bok przypisujemy wartosc bok plus 2.
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case '-': //W przypadku kiedy zmienna klawisz wynosi '-' rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if ((bok <= 4) || (skos <= 1)) //Definiujemy instrukcję warunkową - jeżeli zmienna bok jest mniejsza równa 4 lub zmienna skos jest większa lub równa 1.
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			skos = skos - 1;    //Zmiennej skos przypisujemy wartosc skos minus 1.
			bok = bok - 2; //Zmiennej bok przypisujemy wartosc bok minus 2.
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case 75: //W przypadku kiedy zmienna klawisz wynosi 75 (strzałka w lewo) rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if ((x1 - bok < 1) || (x1 - skos < 2)) //Definiujemy instrukcję warunkową - jeżeli wartosc x1 minus bok mniejsza od 1 lub wartosc x1 minus skos mniejsza od 2.
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			x--; //Odejmujemy od zmiennej x wartość 1
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case 77: //W przypadku kiedy zmienna klawisz wynosi 77 (strzałka w prawo) rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if (x1 > szerokosc - 1) //Definiujemy instrukcję warunkową - jezeli wartosc x1 większa od szerokosc - 1. 
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			x++; //Dodajemy do zmiennej x wartość 1
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case 72: //W przypadku kiedy zmienna klawisz wynosi 72 (strzałka do góry) rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if (y < 1) //Definiujemy instrukcję warunkową - jezeli wartosc y mniejsza od 1. 
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			y--; //Odejmujemy od zmiennej y wartość 1
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case 80: //W przypadku kiedy zmienna klawisz wynosi 80 (strzałka w dół) rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			if (y1 > wysokosc - 2) //Definiujemy instrukcję warunkową - jezeli wartosc y1 mniejsza od wysokosc - 2. 
			{ //Otwieramy nawiasem klamrowym ({) instrukcję warunkową if.
				break; //Przerwa wykonywanie przypadku (case).
			} //Zamykamy nawiasem klamrowym (}) instrukcję warunkową if.
			y++; //Dodajemy do zmiennej y wartość 1
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		case 27: //W przypadku kiedy zmienna klawisz wynosi 27 (ESC) rozważamy przypadek.
		{ //Otwieramy nawiasem klamrowym ({) przypadek (case).
			break; //Przerwa wykonywanie przypadku (case).
		} //Zamykamy nawiasem klamrowym (}) przypadek (case).
		} //Zamykamy nawiasem klamrowym (}) instrukcję wyboru switch.
	} while (klawisz != 27); //Zamykamy nawiasem klamrowym(}) pętlę do while - będzie robić się tak długo dopóki zmienna klawisz będzie różna od 27 (ESC).
} //Zamykamy nawiasem klamrowym (}) funkcję void.

int main() //Definiujemy główną funkcję main 
{ //Otwieramy nawiasem klamrowym ({) funkcję main.
	int szerokosc, wysokosc; // Deklaracja zmiennych bez przypisania wartosci.
	okno(szerokosc, wysokosc); //Wywołanie funkcji okno, z argumentami szerokosc oraz wysokosc.
	int x = szerokosc/2, y = wysokosc/2, x1, y1, bok, skos; //Definiujemy zmienne int - x, y, x1, y1, bok, skos. Przypisujemy zmiennej x wartość szerokosc/2, a zmiennej y wartość wysokosc/2 (połowa wielkosci okna).
	char klawisz, znak; //Definiujemy zmienne char - klawisz, znak
	samouczek(); //Wywołanie funkcji samouczek, bez argumentów.
	wprowadzaniedanych(znak, bok, skos, szerokosc, wysokosc); //Wywołanie funkcji wprowadzaniedanych, z trzema argumentami - znak, bok i skos.
	poruszanie(x, x1, y, y1, bok, znak, skos, klawisz, wysokosc, szerokosc); //Wywołanie funkcji poruszanie, z dziesiecioma argumentami - x, x1, y, y1, bok, znak, skos, klawisz, wysokosc i szerokosc.
	return 0; //Funkcja main jest intem więc musi zwracać wartość.
} //Zamykamy nawiasem klamrowym (}) funkcję main.