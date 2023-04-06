#include <iostream>

using namespace std;

// define number of numbeers (n), create a new array with max of 100, define what the sum is
int n, i;
float num[100], sum = 0.0, average;


int main() {
    cout << "please enter number of numbers u want to average\n";
    cin >> n;

    // loop until it has looped n times, 
    for(i = 0; i < n; ++i) {
        //cout number of times
        cout << i + 1 << ". enter first number ";
        // add number to array
        cin >> num[i];
        //put number into sum
        sum += num[i];
    }

    average = sum / n;
    cout << average << endl;
}