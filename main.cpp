#include <iostream>
using namespace std;

int main() {

    int value = 0;
    int i;
    do
        {
        cout << "Please enter a value." << endl;
        cin >> value;
        for(i=value-1; i>1; i--)
        {
            if (value % i == 0)
            {
                cout << "non prime" << endl;
                break;
            }
        }
        if (i == 1)
            cout << "IS PRIME!" << endl;

    } while (value != 0);

    return 0;
}