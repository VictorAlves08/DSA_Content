#include <iostream>

using namespace std;

int main()
{
    int KMsPerLiters;
    double totalKMs, gasolineValue;

    cout << "What is the distance of your trip?: " << endl;
    cin >> totalKMs;

    cout << "How many kilometers per liter?: " << endl;
    cin >> KMsPerLiters;

    cout << "What is the value of your gasoline?: " << endl;
    cin >> gasolineValue;

    double result = (totalKMs / KMsPerLiters) * gasolineValue;

    cout << "Your trip will cost " << result << " dollars.";
    return 0;
};
