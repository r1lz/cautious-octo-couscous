#include <iostream>
using namespace std;

int main()
{
     int column;
     string row;

     // Default Database
     int a[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     int c[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
     int d[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

     // Changes
     a[1] = 1;
     a[2] = 1;
     a[3] = 1;

     a[8] = 2;
     b[8] = 2;
     c[8] = 2;

     int agretor = a[8] + b[8] + c[8];
     cout << agretor << endl;

     for (int i = 0; i < 10; i++)
     {
          cout << a[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << b[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << c[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << d[i] << " ";
     }
     cout << endl;

     if (agretor <= 4)
     {
          cout << agretor << endl;
     }

     cout << "Masukan Row    : ";
     cin >> row;
     cout << "Masukan Column : ";

     cin >> column;

     a[column] = 0;

     for (int i = 0; i < 10; i++)
     {
          cout << a[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << b[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << c[i] << " ";
     }
     cout << endl;
     for (int i = 0; i < 10; i++)
     {
          cout << d[i] << " ";
     }
     cout << endl;
}