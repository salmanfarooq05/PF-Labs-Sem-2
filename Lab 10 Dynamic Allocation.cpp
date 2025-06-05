
// Task 1

//#include <iostream>
//using namespace std;
//
//int main() {
//    int n;
//    cout << "Enter the number of elements: ";
//    cin >> n;
//    int* arr = new int[n];
//    cout << "Enter " << n << " integers: ";
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//    }
//    int max = arr[0];
//    for (int i = 1; i < n; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    cout << "Maximum element is: " << max << endl;
//    delete[] arr;
//    return 0;
//}

/*
// Task 2

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of float values: ";
    cin >> n;
    float* arr = new float[n];
    cout << "Enter " << n << " float values:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Average = " << (sum / n) << endl;
    delete[] arr;
    return 0;
}


// Task 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Elements in reverse order: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}

// Task 4

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Distinct elements in the array are: ";
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    delete[] arr;
    return 0;
}

// Task 5

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool unique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                unique = false;
                break;
            }
        }
        if (unique) {
            count++;
        }
    }
    cout << "Total distinct elements: " << count << endl;
    delete[] arr;
    return 0;
}

// Task 6

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter target sum K: ";
    cin >> k;
    int* arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int l = j + 1; l < n; l++) {
                if (arr[i] + arr[j] + arr[l] == k) {
                    count++;
                }
            }
        }
    }
    cout << "Number of triplets with sum " << k << ": " << count << endl;
    delete[] arr;
    return 0;
}

// Task 7
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cin.ignore();
    int size = n * 51;
    char* names = new char[size];
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names + i * 51, 51);
    }
    cout << "\nList of student names:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": " << (names + i * 51) << endl;
    }
    delete[] names;
    return 0;
}

// Task 8

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of names: ";
    cin >> n;
    cin.ignore();
    int size = n * 51;
    char* names = new char[size];
    for (int i = 0; i < n; i++) {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names + i * 51, 51);
    }
    for (int i = 0; i < n; i++) {
        char* name = names + i * 51;
        bool used[128] = { false };
        int count = 0;
        for (int j = 0; name[j] != '\0'; j++) {
            char c = name[j];
            bool isUnique = true;
            for (int k = 0; name[k] != '\0'; k++) {
                if (j != k && name[k] == c) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique && !used[(int)c]) {
                used[(int)c] = true;
                count++;
            }
        }
        cout << "Unique characters in \"" << name << "\": " << count << endl;
    }
    delete[] names;
    return 0;
}

