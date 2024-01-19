// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <cstdlib>   // dołączenie biblioteki zawierającej funkcje związane z generowaniem liczb losowych
#include <ctime> 
using namespace std;


int main()
{
    int min = 0, max = 0;
    int tab[20];
    std::srand(static_cast<unsigned int>(std::time(0)));
    cout << "podaj liczbe dodatnią parzysta" << endl;
    int n;
    do
    {
        cin >> n;
    } while ((n <= 0) ||( n%2==1));
    int g;
    int test = 0;
    cout << "2zad" << endl;
    for(int i=0;i<n;i++)
    {
       
        cin >> g;
        if (i == 0)
        {
            min = g;
            max = g;

        }
       if(max<g){
           max =g;
       }
       if (min > g) {
          min = g;
       }
        if(g<0)
        {
            test++;
        }
        if(test==2)
        {
	        break;
        }
    }
    
    for(int i=0;i<20;i++)
    {
        tab[i] = rand() % (max - min + 1) + min;
    }
    for (int i = 0; i < 20; i++)
    {
        cout << tab[i] << endl;;
    }
    int* maxliczba = &tab[0];
    int* minliczba = &tab[0];
    int* mediana=tab;
   // cout << maxliczba << minliczba << mediana;
    mediana = mediana +10;
    cout << *maxliczba << "X" << *minliczba << "X" << *mediana << endl;

    for(int i=0;i<20;i++)
    {
	    if(tab[i]>*maxliczba)
	    {
            maxliczba = &tab[i];
	    }
        if (tab[i] < *minliczba)
        {
            minliczba = &tab[i];
        }
        cout << *maxliczba << "X" << *minliczba << "X" << *mediana << endl;
    }
   //cout << maxliczba << minliczba << mediana << endl;
    cout << *maxliczba <<"X"<< *minliczba<< "X" << *mediana << endl;

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
