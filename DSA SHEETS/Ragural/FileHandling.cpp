#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

int main() {
    ofstream a;
    a.open("zzz.txt");

    if (!a) {
        cerr << "File could not be opened for writing." << endl;
        return 1;
    }

    int arr[5];
    cout << "Enter the 5 elements of the array:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Write array to file
    for (int i = 0; i < 5; i++) {
        a << arr[i] << " ";
    }
    a.close();

    ifstream b;
    b.open("zzz.txt");

    if (!b) {
        cerr << "File could not be opened for reading." << endl;
        return 1;
    }

    cout << "Without Sorting, the elements are:\n";
    vector<int> arrr(5, 0);
    for (int i = 0; i < 5; i++) {
        b >> arrr[i];
    }
    b.close();

    // Print unsorted array
    for (int i = 0; i < 5; i++) {
        cout << arrr[i] << " ";
    }
    cout << endl;

    // Sort the array
    sort(arrr.begin(), arrr.end());

    cout << "After Sorting, the elements are:\n";
    for (int i = 0; i < 5; i++) {
        cout << arrr[i] << " ";
    }
    cout << endl;

    ofstream c;
    c.open("zzz.txt");
    for (int i = 0; i < 5; i++) {
        c<< arrr[i] << " ";
    }
    cout << endl;

    return 0;
}
