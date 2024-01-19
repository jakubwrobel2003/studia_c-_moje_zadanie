// zad.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <time.h>
#include <iostream>
using namespace std;

int isEven(int n)
{
	if(n%2==0)
	{
        return true;
	}
    return false;
}

int main()
{
    const int rozmiar = 20;
    int tab[rozmiar] = { 0 };
    int proby = 0;
	
    srand((unsigned)time(0));
    int n;
    do
    {
        cout << "podaj n" << endl;
        cin >> n;
    } while (!isEven(n) || n >= 15);


    for(int i=0;i<n;i++){
        do
        {
            cout << "podaj liczbe" <<i<< endl;
            cin >> tab[i];
            if(!isEven(tab[i]) || n > 100 || n < 0)
            {
                proby++;
                if(proby==3)
                {
                    tab[i] = 0;
                    i = n;
                    break;
                }
            }
        } while (!isEven(tab[i]) || n > 100 || n < 0);
	    
    }
    for(int i=0;i<rozmiar;i++)
    {
        cout << tab[i] << ", " ;
    }
    cout << endl;
    //////////////////////////////////////////////
    int liczba = 0;
    for(int i=0;i<rozmiar;i++)
    {
	    if(tab[i]==0)
	    {
            do
            {
                liczba = rand() % 90 + 10;
            } while (!isEven(liczba));
            tab[i] = liczba;
       
	    }
    }
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
    /////////////////////////////////////////////
    int swap;
    int *wsk1;
    int* wsk2;
    wsk1 = &tab[0];
    wsk2 = &tab[19];
    int i=0;
    while (wsk1-1!=wsk2)
    {
        
        swap = *wsk1;
        *wsk1 = *wsk2;
        *wsk2 = swap;
        wsk1++;
        wsk2--;


    }
    for (int i = 0; i < rozmiar; i++)
    {
        cout << tab[i] << ", ";
    }
    cout << endl;
}
