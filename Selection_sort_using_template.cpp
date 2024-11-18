#include <iostream>
using namespace std;


template <typename T>
class SelectionSort {
private:
    T* arr;       
    int size;     
public:
    
    SelectionSort(T* inputArray, int inputSize) {
        size = inputSize;
        arr = new T[size];
        for (int i = 0; i < size; i++) {
            arr[i] = inputArray[i];
        }
    }

  
    ~SelectionSort() {
        delete[] arr;
    }

    
    void sort() {
        for (int i = 0; i < size - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < size; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            if (minIndex != i) {
                T temp = arr[i];
                arr[i] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }

    
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
  
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);

    SelectionSort<int> intSorter(intArray, intSize);

    cout << "Original Integer Array: ";
    intSorter.display();

    intSorter.sort();
    cout << "Sorted Integer Array: ";
    intSorter.display();

 
    float floatArray[] = {64.5, 34.2, 25.1, 12.7, 22.3, 11.6, 90.8};
    int floatSize = sizeof(floatArray) / sizeof(floatArray[0]);

    SelectionSort<float> floatSorter(floatArray, floatSize);

    cout << "\nOriginal Float Array: ";
    floatSorter.display();

    floatSorter.sort();
    cout << "Sorted Float Array: ";
    floatSorter.display();

    return 0;
}

