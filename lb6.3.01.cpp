//використовувати шаблони функцій для реалізації універсального алгоритму.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


template <typename T>
vector<T> createArray(int size) {
    vector<T> arr(size);
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;  
    }
    return arr;
}


template <typename T>
void printArray(const vector<T>& arr, const string& message) {
    cout << message << ": ";
    for (int i = 0; i < arr.size(); i++) {
        cout << setw(4) << arr[i]; 
    }
    cout << endl;
}


template <typename T>
void reverseArray(vector<T>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);  
    }
}

int main() {
    int size;
    cout << "size ";
    cin >> size;

   
    vector<int> arr = createArray<int>(size);

   
    printArray(arr, "p mas");

    
    reverseArray(arr);

    
    printArray(arr, "mas ");

    return 0;
}

