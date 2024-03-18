#include <iostream>
using namespace std;

const int n = 20;

int main() {
    int array1[n], array2[n];

    
    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array1[i];
    }

    
    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array2[i];
    }

    
    int count = 0;
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int j = 0; j < n; ++j) {
            if (array1[i] == array2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            count++;
        }
    }

    
    cout << "Number of elements in the first array that are not present in the second array: " << count << endl;

    return 0;
}



