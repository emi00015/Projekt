#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{

    ofstream out;
    out.open("dane.txt");

    int a;
    cin >> a;
    for (int i=0; i<a; i++)
    {
        out << rand()%10+1 << endl;
    }

    out.close();

    return 0;
}
