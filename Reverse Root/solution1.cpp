//Elva Nguyen
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    long long number;
    vector<long long> vector;

    do
    {
        if(cin)
        {
            cin >> number;
//            cin.ignore(1000, '\n');
            if(number != -1)
            {
                vector.push_back(number);
            }
        }

    }while (number != -1);

    cout << setprecision(4) << fixed;
    for(int index = vector.size()-1; index >= 0; index--)
    {
        cout << sqrt(vector.at(index)) << endl;
    }


    return 0;
}

