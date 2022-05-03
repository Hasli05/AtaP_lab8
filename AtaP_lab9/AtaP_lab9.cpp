#include <string>
#include <iostream>
using namespace std;


int main()
{
    string month[12] = { "January", "Fabruary", "March", "April", "May", "June", "July",
                         "Augest", "September", "Octomber", "November", "December" };

    int k, n;

    cout << "Value"<<endl;

    cout << "n = ";
    cin >> n;
    --n;

    cout << "k = ";
    cin >> k;

    int sum = n + k;

    bool fitTheCondN = (n >= 1) && (n <= 12);
    bool fitTheCondK = (k >= 1) && (k <= 12);

    bool overCount = sum <= 12;
    
    int nextYear = sum - 12;

    switch (fitTheCondN)
    {
        case 1:
            cout << "month n : "<< month[n]<<endl;
            break;
        default:
            cout << "error" << endl;
            break;
    }


    switch(overCount)
    {
        case 1:
            cout << month[sum];
            break;
        default:
            cout << "It's next year " << month[nextYear];
            break;
        }
}

