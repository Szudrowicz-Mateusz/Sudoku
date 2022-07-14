#include <iostream>
#include <iomanip>  
#include <vector>

using namespace std;

//Pokzauje ca³y vector w 2D
void pokaz_wektor2D(vector<vector<short int>> tabl)
{

	for (auto rzad : tabl)
	{
		
		for (auto elem : rzad)
			cout << setw(4) << elem << " | ";
		cout << endl;
	}
}

//Sprawdzam czy liczby w pionie oraz poziomie siê nie powtarzaj¹
bool poziom_check(vector<vector<short int>>  &s)
{
	short int zliczanie{ 0 };

	for (short int p = 0; p <= 8; p++)
	{
		for (short int i = 0; i <= 8; i++)
		{
			for (short int j = 0; j <= 8; j++)
			{
				if (s[p][i] == s[p][j]) zliczanie++;
			}
		}
	}
	cout <<"W poziomie: " << zliczanie<<endl;

	if (zliczanie == 81) return true;
	else return false;
}

bool pion_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };

	for (short int p = 0; p <= 8; p++)
	{
		for (short int i = 0; i <= 8; i++)
		{
			for (short int j = 0; j <= 8; j++)
			{
				if (s[i][p] == s[j][p]) zliczanie++;
			}
		}
	}
	cout <<"W pionie: " << zliczanie<<endl;

	if (zliczanie == 81) return true;
	else return false;
}

//|1|4|7|
//|2|5|8|
//|3|6|9|
//Wizualizacja kwadratow w jaki sposób podzieli³em sudoku


//Sprawdzam czy ka¿dy kwadrat 1-9 nie powtarza liczb
bool pierwszy_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int o = 0; o <= 2; o++)
	{
		for (short int p = 0; p <= 2; p++)
		{
			for (short int i = 0; i <= 2; i++)
			{
				for (short int j = 0; j <= 2; j++)
				{
					if (s[p][o] == s[j][i]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 1: " << zliczanie<<endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool drugi_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 0; poziom <= 2; poziom++)
	{
		for (short int pion = 3; pion <= 5; pion++)
		{
			for (short int poziom_ruch = 0; poziom_ruch <= 2; poziom_ruch++)
			{
				for (short int pion_ruch = 3; pion_ruch <= 5; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 2: " << zliczanie<<endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool trzeci_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 0; poziom <= 2; poziom++)
	{
		for (short int pion = 6; pion <= 8; pion++)
		{
			for (short int poziom_ruch = 0; poziom_ruch <= 2; poziom_ruch++)
			{
				for (short int pion_ruch = 6; pion_ruch <= 8; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 3: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool czwarty_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 3; poziom <= 5; poziom++)
	{
		for (short int pion = 0; pion <= 2; pion++)
		{
			for (short int poziom_ruch = 3; poziom_ruch <= 5; poziom_ruch++)
			{
				for (short int pion_ruch = 0; pion_ruch <= 2; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 4: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool piaty_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 3; poziom <= 5; poziom++)
	{
		for (short int pion = 3; pion <= 5; pion++)
		{
			for (short int poziom_ruch = 3; poziom_ruch <= 5; poziom_ruch++)
			{
				for (short int pion_ruch = 3; pion_ruch <= 5; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 5: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool szosty_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 3; poziom <= 5; poziom++)
	{
		for (short int pion = 6; pion <= 8; pion++)
		{
			for (short int poziom_ruch = 3; poziom_ruch <= 5; poziom_ruch++)
			{
				for (short int pion_ruch = 6; pion_ruch <= 8; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 6: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool siodmy_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 6; poziom <= 8; poziom++)
	{
		for (short int pion = 0; pion <= 2; pion++)
		{
			for (short int poziom_ruch = 6; poziom_ruch <= 8; poziom_ruch++)
			{
				for (short int pion_ruch = 0; pion_ruch <= 2; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 7: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}


bool osmy_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 6; poziom <= 8; poziom++)
	{
		for (short int pion = 3; pion <= 5; pion++)
		{
			for (short int poziom_ruch = 6; poziom_ruch <= 8; poziom_ruch++)
			{
				for (short int pion_ruch = 3; pion_ruch <= 5; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 8: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}

bool dziewiaty_kwadrat_check(vector<vector<short int>>& s)
{
	short int zliczanie{ 0 };
	for (short int poziom = 6; poziom <= 8; poziom++)
	{
		for (short int pion = 6; pion <= 8; pion++)
		{
			for (short int poziom_ruch = 6; poziom_ruch <= 8; poziom_ruch++)
			{
				for (short int pion_ruch = 6; pion_ruch <= 8; pion_ruch++)
				{
					if (s[pion][poziom] == s[pion_ruch][poziom_ruch]) zliczanie++;
				}
			}
		}
	}
	cout << "Kwadrat 9: " << zliczanie << endl;

	if (zliczanie == 9) return true;
	else return false;
}


//Sprawdza wszystkie zgdonoœci czyli pion,poziom oraz kwadraty
void sprawdzacz(vector<vector<short int>>& s)
{
	if (pion_check(s) == 1 && poziom_check(s) == 1 && pierwszy_kwadrat_check(s) == 1 && drugi_kwadrat_check(s) == 1 && trzeci_kwadrat_check(s) == 1 && czwarty_kwadrat_check(s) == 1
		&& piaty_kwadrat_check(s) == 1 && szosty_kwadrat_check(s) == 1 && siodmy_kwadrat_check(s) == 1 && osmy_kwadrat_check(s) == 1 && dziewiaty_kwadrat_check(s) == 1)
		cout << "Wygrales !!!";
	else
		cout << "Niestety nie udalo ci sie :<";
}

//Wpisywanie liczb
void wpisz(vector<vector<short int>>& s)
{
	short int pion,poziom,place_holder;

	cout << "Podaj miejsce w pionie 1-9: "<<endl;
	cin >> pion;
	cout << "Podaj miesce w poziomie 1-9: " << endl;
	cin >> poziom;
	cout << "Jaka liczbe chcesz wstawic? " << endl;
	cin >> place_holder;

	s[pion - 1][poziom - 1] = place_holder;
}

int main()
{
	//Plansza rozwi¹zana "testowa"
	vector<vector<short int>>  sudoku_done{
		{2,9,5,4,8,1,7,3,6},
		{1,4,7,6,3,9,2,8,5},
		{8,3,6,7,5,2,9,4,1},
		{6,8,4,5,1,7,3,9,2},
		{7,5,3,9,2,8,1,6,4},
		{9,1,2,3,6,4,8,5,7},
		{5,6,1,2,9,3,4,7,8},
		{3,7,8,1,4,6,5,2,9},
		{4,2,9,8,7,5,6,1,3}
	};
	//Plansza do gry
	vector<vector<short int>> sudoku{
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0}
	};


	while (true)
	{
		char czekac;
		short int choice;

		cout << "Menu" << endl;
		cout << "_______" << endl;

		cout << "1.Wpisz liczbe"<<endl;
		cout << "2.Sprawdz" << endl;
		cout << "3.Zakoncz" << endl;

		pokaz_wektor2D(sudoku);

		cout << "Co chcesz zrobic ?" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			wpisz(sudoku);
			break;
		case 2:
			sprawdzacz(sudoku);
			cin >> czekac;
			break;
		case 3:
			exit(1);
			break;
		}
		system("cls");
	}


	return 0;
}