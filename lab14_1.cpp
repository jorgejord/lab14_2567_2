#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[], int N) {
    for (int i = 1; i < N; i++) {
        T temp = d[i];
        int j = i - 1;
        
        while (j >= 0 && d[j] < temp) {
            d[j + 1] = d[j];
            j--;
        }
        d[j + 1] = temp;

        cout << "Pass " << i << ":";
        for (int k = 0; k < N; k++) {
            if (k == 0) cout << d[k];
            else cout << " " << d[k];
        }
        cout << "\n";
    }
}