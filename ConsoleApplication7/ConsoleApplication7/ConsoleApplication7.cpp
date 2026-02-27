#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    vector<double> a(n);
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) minIndex = i;
        if (a[i] > a[maxIndex]) maxIndex = i;
    }

    int left = min(minIndex, maxIndex);
    int right = max(minIndex, maxIndex);

    vector<double> result;
    for (int i = 0; i < n; i++) {
        if (i < left || i > right) {
            result.push_back(a[i]);
        }
    }

    cout << "Новий масив: ";
    for (double x : result) {
        cout << x << " ";
    }

    return 0;
}