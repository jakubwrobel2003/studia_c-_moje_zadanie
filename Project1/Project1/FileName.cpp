#include <iostream>
using namespace std;

int main()
{

    int N;
    int i = 0;
    int ujemne = 0;

    int max = 0, min = 0;
    do {
        cout << i << "\n";
        i++;
    } while (i < 5);
    do
    {
        cout << "podaj liczbe dodatni¹ parzysta" << endl;
        cin >> N;


    } while(N % 2 == 0 && N < 0);

    cout << N;
}