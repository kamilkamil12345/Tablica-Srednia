#include <iostream>

using namespace std;

int main()
{
    int tab[4];
    int srednia = 0;

    cout << "Program obliczajacy srednia z 5 ocen" << endl;

    for (int i=0; i<=4; i++)
    {
        cout << "Podaj " << i+1 << ". ocene." << endl;  cin >> tab[i];
    }
    for (int i=0; i<=4; i++)
    {
        cout << "Twoja " << i+1 << ". ocena to." << tab[i] << endl;
        srednia = srednia + tab[i];
    }

    cout << "Twoja srednia wynosi: " << srednia/5 << endl;
    return 0;
}
