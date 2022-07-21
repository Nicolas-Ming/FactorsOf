#include <iostream>
using namespace std;

int main()
{
    bool space = false;

    while(true){
        int number = 0;
        bool prime = true;
        bool first = true;
        if (space) cout << endl;
        cout << "Give me a number and I will find what it can factor into (input 0 to exit): ";
        cin >> number;
        if (number == 0) break;
        cout << endl << "Your number " << number << " can factor into ";

        for (int i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime = false;
                if (first) {
                    cout << i;
                    first = false;
                }
                else {
                    cout << ", " << i;
                }
            }
        }
        if (prime) {
            cout << "nothing, it is PRIME!!!";
        }
        space = true;
    }
    
}
