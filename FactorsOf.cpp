#include <iostream>
using namespace std;

void displayFactors(int num, bool &primeNum);

int main()
{
    bool space = false;
    
    while(true){
        int number = 0;
        bool prime = true;
        if (space) cout << endl;
        cout << "Give me a number and I will find what it can factor into (input 0 to exit): ";
        cin >> number;
        if (number == 0) break;
        cout << endl << "Your number " << number << " can factor into ";
        // This is where all the factoring happens, everything else is to check for extra things and to loop!
        displayFactors(number, prime);
        if (prime) {
            cout << "nothing, it is PRIME!!!";
        }
        space = true;
    }
    
}
// Checks the reference for one flag to check if has no factors making it prime, for a new output.
void displayFactors(int num, bool& primeNum) {
    bool first = true;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            primeNum = false;
            // this checks to see if the value is first to make sure to not add a , beforehand
            if (first) {
                cout << i;
                first = false;
            }
            else {
                cout << ", " << i;
            }
        }
    }
}
