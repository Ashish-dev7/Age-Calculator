#include <iostream>
#include <windows.h>
using namespace std;
void fly(int x, int y)
{
    COORD i;
    i.X = x;
    i.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int main()
{
    cout << "------------------------------------------------------------------------------------------------------------------------";
    fly(0, 1);
    cout << "|                                           WELCOME TO THE AGE CALCULATOR                                              |";
    fly(0, 2);
    cout << "-------------------------------------------------------------------------------------------------------------------------";
    int cd, cm, cy;
    int bd, bm, by;
    fly(0, 3);
    cout << "Enter your Birth Date (DD): ";
    cin >> bd;
    fly(35, 3);
    cout << "Enter your Birth Month (MM): ";
    cin >> bm;
    fly(70, 3);
    cout << "Enter your Birth Year (YY): ";
    cin >> by;
    fly(0, 6);
    cout << "Enter  Current  Date (DD) : ";
    cin >> cd;
    fly(35, 6);
    cout << "Enter  Current  Month (MM) : ";
    cin >> cm;
    fly(70, 6);
    cout << "Enter  Current  Year  (YY) : ";
    cin >> cy;

    if (cd < bd)
    {
        cm -= 1;
        cd += 30;
    }

    if (cm < bm)
    {
        cy -= 1;
        cm += 12;
    }

    system("color 3c");

    short DatE = cd - bd;
    short MonTh = cm - bm;
    short Year = cy - by;

    //    cout<<endl<<endl;

    fly(35, 8);
    cout << "You are currently " << Year << " Year " << MonTh << " Month " << DatE << " Day " << " old " << endl;
    fly(50, 10);
    cout << "THANKS";
    fly(90, 25);
}
