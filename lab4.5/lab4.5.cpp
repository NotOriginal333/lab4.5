#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

int main()
{
    double x, y;
    double R;

    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;
        cout << "R = "; cin >> R;


        if (((x >= 0) && (y <= x) && (y >= 0) && ((y - R) * (y - R) <= R * R - (x - R) * (x - R))) || ((x <= 0) && (y >= x) && (y - (-R)) * (y - (-R)) >= R * R - (x - (-R)) * (x - (-R)) && (y <= 0)))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    cout << endl << fixed;
    cout << "R = "; cin >> R;
    cout << endl<< fixed;
    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |"
        << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < 10; i++)
    {
        x = (4*R) * rand() / RAND_MAX - 2 * R;
        y = (4*R) * rand() / RAND_MAX - 2 * R;

        if (((x >= 0) && (y <= x) && (y >= 0) && ((y - R) * (y - R) <= R * R - (x - R) * (x - R))) || ((x <= 0) && (y >= x) && (y - (-R)) * (y - (-R)) >= R * R - (x - (-R)) * (x - (-R)) && (y <= 0)))
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "no" << endl;
    }
    cout << "---------------------------" << endl;
    return 0;
}