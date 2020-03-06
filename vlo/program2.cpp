//Emilia Plata 1Bg VLO
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c, s;
    cin >> a;
    for (int i=0; i<a; i++)
    {
        vector<int>tab;
        cin >> b >> c;
        if (c == 0)
            cout << 0 << endl;
        else
        {
            while(c>0)
            {
                tab.push_back(c%2);
                c /=2;
            }
            s = b*b%tab.size();
            if (s==0)
                cout << tab[0] << endl;
            else
                cout << tab[tab.size()-s] << endl;
        }
    }

}
