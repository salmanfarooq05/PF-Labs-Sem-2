//#include <iostream>
//using namespace std;
//int stringLength(const char* str) 
//{
//    const char* ptr = str;
//    while (*ptr != '\0') {
//        ++ptr;
//    }
//    return ptr - str;
//}
//
//int main() {
//    char input[100];
//
//    cout << "Enter a string: ";
//    cin.getline(input, 100);
//
//    int length = stringLength(input);
//    cout << "Length of the string: " << length << endl;
//
//    return 0;
//}

// ----------------------------Task 02---------------------------

//#include <iostream>
//using namespace std;
//void displayArray(int* arr, int size) {
//    cout << "You entered: ";
//    for (int i = 0; i < size; ++i) {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//int main() {
//    int arr[5] = { 0 };
//
//    cout << "Enter 5 integers: ";
//    for (int i = 0; i < 5; ++i) {
//        cin >> *(arr + i); 
//    }
//    displayArray(arr, 5);
//
//    return 0;
//}

//-------------------------Task 03-----------------------------
//#include <iostream>
//using namespace std;
//void reverseArray(int* arr, int size)
//{
//    int* start = arr;
//    int* end = arr + size - 1;
//    while (start < end) 
//    {
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//        start++;
//        end--;
//    }
//}
//void displayArray(int* arr, int size)
//{
//    cout << "Reversed array: ";
//    for (int* ptr = arr; ptr < arr + size; ++ptr) {
//        cout << *ptr << " ";
//    }
//    cout << endl;
//}
//int main() {
//    int arr[5] = { 0 };
//    cout << "Enter 5 integers: ";
//    for (int i = 0; i < 5; ++i) {
//        cin >> *(arr + i); 
//    }
//    reverseArray(arr, 5);
//    displayArray(arr, 5); 
//    return 0;
//}
//-----------------------------Task 04-----------------------
//#include <iostream>
//using namespace std;
//void displayArray(float* arr, int size) 
//{
//    cout << "Array elements using pointer subscript notation:\n";
//    for (int i = 0; i < size; ++i) 
//    {
//        cout << *(arr + i) << " ";
//    }
//    cout << endl;
//}
//int main()
//{
//    float arr[6] = { 0 };
//    cout << "Enter 6 float numbers:\n";
//    for (int i = 0; i < 6; ++i)
//    {
//        cin >> *(arr + i); 
//    }
//    displayArray(arr, 6); 
//    return 0;
//}
//-------------------------Task 05----------------------------

//#include <iostream>
//using namespace std;
//void convertToUpper(char* str)
//{
//    while (*str != '\0') {
//        if (*str >= 'a' && *str <= 'z') 
//		  {
//            *str = *str - 32;
//        }
//        ++str;
//    }
//}
//int main()
//{
//    char input[] = "hello world";
//    convertToUpper(input);
//    cout << "Uppercase string: " << input << endl;
//    return 0;
//}
//------------------------------Task 06-------------------
//#include <iostream>
//using namespace std;
//double calculateAverage(double* p, int size) {
//    double sum = 0.0;
//    for (int i = 0; i < size; i++) {
//        sum += p[i]; 
//    }
//    return sum / size;
//}
//int main() {
//    double numbers[5];
//    cout << "Enter 5 double values: ";
//    for (int i = 0; i < 5; ++i) {
//        cin >> numbers[i];
//    }
//    double average = calculateAverage(numbers, 5);
//    cout << "Average: "<<average;
//    return 0;
//}

//---------------------------Task 07---------------------
//#include <iostream>
//using namespace std;
//void replaceVowelsWithAsterisk(char* str)
//{
//    while (*str != '\0') {
//        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
//            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') 
//        {
//            *str = '*';
//        }
//        ++str;
//    }
//}
//int main() {
//    char input[100];
//    cout << "Enter string = ";
//    cin.getline(input, 100); 
//    replaceVowelsWithAsterisk(input);
//    cout << "Updated string = " << input << endl;
//    return 0;
//}
//------------------------Task 08---------------------------
//#include <iostream>
//using namespace std;
//void displayArrayInfo(int* arr, int size)
//{
//    for (int i = 0; i < size; ++i)
//    {
//        cout << "Address: " << &arr[i] << ", Value: " << *(arr + i) << endl;
//    }
//}
//int main()
//{
//    int numbers[3];
//    cout << "Enter 3 integers: ";
//    for (int i = 0; i < 3; ++i) {
//        cin >> numbers[i];
//    }
//    displayArrayInfo(numbers, 3);
//    return 0;
//}
//----------------------Task 09--------------------------
//#include <iostream>
//using namespace std;
//void swapValues(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int x, y;
//    cout << "Enter two integers: ";
//    cin >> x >> y;
//    cout << "Before swapping:\n";
//    cout << "x = " << x << ", y = " << y << endl;
//    swapValues(&x, &y);
//    cout << "After swapping:\n";
//    cout << "x = " << x << ", y = " << y << endl;
//
//    return 0;
//}

//------------------Task 10------------------------
#include <iostream>
using namespace std;
void countEvenOdd(int* arr, int size, int& evenCount, int& oddCount) {
    for (int i = 0; i < size; ++i) {
        if (*(arr + i) % 2 == 0) {
            ++evenCount;
        }
        else {
            ++oddCount;
        }
    }
}

int main() {
    int numbers[7];
    int evenCount = 0, oddCount = 0;

    cout << "Enter 7 integers: ";
    for (int i = 0; i < 7; ++i) {
        cin >> numbers[i];
    }

    countEvenOdd(numbers, 7, evenCount, oddCount);

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}
