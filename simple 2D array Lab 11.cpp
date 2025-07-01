//
//Task 1:
//Write a C++ program that :
//1.	Creates a 4x4 array of integers.
//2.	Initializes all the elements row - wise(horizontally) using input from the user through loops.
//3.	Displays all the elements row - wise, such that each row is printed on a separate line.
//Sample Output :
//Enter 16 integers to fill the 4x4 array(row - wise) :
//    1 2 3 4
//    5 6 7 8
//    9 10 11 12
//    13 14 15 16
//
//    The 4x4 array is :
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16


//#include <iostream>
//using namespace std;
//
//void inputRowWise(int arr[4][4]) 
//{
//    cout << "Enter 16 integers to fill the 4x4 array (row-wise):\n";
//    for (int i = 0; i < 4; ++i)
//        for (int j = 0; j < 4; ++j)
//            cin >> arr[i][j];
//}
//
//void displayRowWise(int arr[4][4]) {
//    cout << "\nThe 4x4 array is:\n";
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//
//int main() {
//    int arr[4][4];
//    inputRowWise(arr);
//    displayRowWise(arr);
//    return 0;
//}

//<------------------------------------------------------------------------------------------------------>

//Task 2:
//Write a C++ program that :
//1.	Creates a 4x4 array of integers.
//2.	Initializes all the elements column - wise(vertically) using input from the user through loops.
//3.	Displays all the elements column - wise, such that each column is printed on a separate line with values from top to bottom.
//Sample Output :
//Enter 16 integers to fill the 4x4 array(column - wise) :
//    1 5 9 13
//    2 6 10 14
//    3 7 11 15
//    4 8 12 16
//
//    The 4x4 array displayed column - wise is :
//1 5 9 13
//2 6 10 14
//3 7 11 15
//4 8 12 16


////      Task 02

//#include <iostream>
//using namespace std;
//
//void inputColumnWise(int arr[4][4]) {
//    cout << "Enter 16 integers to fill the 4x4 array (column-wise):\n";
//    for (int j = 0; j < 4; ++j)
//        for (int i = 0; i < 4; ++i)
//            cin >> arr[i][j];
//}
//
//void displayColumnWise(int arr[4][4]) {
//    cout << "\nThe 4x4 array displayed column-wise is:\n";
//    for (int i = 0; i < 4; ++i) {
//        for (int j = 0; j < 4; ++j)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//
//int main() {
//    int arr[4][4];
//    inputColumnWise(arr);
//    displayColumnWise(arr);
//    return 0;
//}

//<------------------------------------------------------------------------------------------------------>

////      Task 03

//Task 3:
//Write a C++ program to :
//1.	Create a 2×3 matrix.
//2.	Take input from the user to fill the matrix.
//3.	Compute and display the transpose of the matrix.
//The transpose of a 2×3 matrix results in a 3×2 matrix.
//Sample Output :
//Enter elements of a 2x3 matrix :
//1 2 3
//4 5 6
//
//Transpose :
//    1 4
//    2 5
//    3 6


//#include <iostream>
//using namespace std;
//void inputMatrix(int arr[2][3])
//{
//    cout << "Enter elements of a 2x3 matrix:\n";
//    for (int i = 0; i < 2; ++i)
//        for (int j = 0; j < 3; ++j)
//            cin >> arr[i][j];
//}
//
//void transposeMatrix(int arr[2][3], int transpose[3][2]) 
//{
//    for (int i = 0; i < 2; ++i)
//        for (int j = 0; j < 3; ++j)
//            transpose[j][i] = arr[i][j];
//}
//void displayTranspose(int transpose[3][2]) 
//{
//    cout << "\nTranspose:\n";
//    for (int i = 0; i < 3; ++i) {
//        for (int j = 0; j < 2; ++j)
//            cout << transpose[i][j] << " ";
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int matrix[2][3], transpose[3][2];
//    inputMatrix(matrix);
//    transposeMatrix(matrix, transpose);
//    displayTranspose(transpose);
//    return 0;
//}
//<------------------------------------------------------------------------------------------------------>


////      Task 04
// 
// Task 4:

//Write a C++ program to :
//1.	Create a 3×3 matrix.
//2.	Take input from the user to fill the matrix.
//3.	Compute and display the sum of each row.
//Sample Output :
//Enter 3x3 matrix :
//1 2 3
//4 5 6
//7 8 9
//Sum of row 0 = 6
//Sum of row 1 = 15
//Sum of row 2 = 24

//#include <iostream>
//using namespace std;
//
//void inputMatrix(int arr[3][3]) {
//    cout << "Enter 3x3 matrix:\n";
//    for (int i = 0; i < 3; ++i)
//        for (int j = 0; j < 3; ++j)
//            cin >> arr[i][j];
//}
//
//void displayRowSums(int arr[3][3]) {
//    for (int i = 0; i < 3; ++i) {
//        int sum = 0;
//        for (int j = 0; j < 3; ++j)
//            sum += arr[i][j];
//        cout << "Sum of row " << i << " = " << sum << endl;
//    }
//}
//
//int main() {
//    int arr[3][3];
//    inputMatrix(arr);
//    displayRowSums(arr);
//    return 0;
//}
//<------------------------------------------------------------------------------------------------------>

////      Task 05
// 
// Create a program to manage student marks for 3 subjects using a fixed-size 2D array. Your program should:
//1.	Store marks for 5 students and 3 subjects in a 2D array.
//2.	Use functions to :
//o	Input data from a file(marks.txt)
//o	Display all student marks
//o	Calculate average marks for each student and write the result to averages.txt
//o	Find and display the student with the highest average
//Sample output :
//Student Marks :
//Student 1 : 78  85  90
//Student 2 : 92  88  81
//Student 3 : 65  70  72
//Student 4 : 89  94  91
//Student 5 : 55  60  58
//
//Topper is Student 4 with average 91.33
//
//Output file : average.txt :
//
//    Student 1 Average : 84.33
//    Student 2 Average : 87.00
//    Student 3 Average : 69.00
//    Student 4 Average : 91.33
//    Student 5 Average : 57.67

//#include <iostream>
//#include <fstream>
//using namespace std;
//
//const int STUDENTS = 5;
//const int SUBJECTS = 3;
//
//void inputFromFile(int marks[STUDENTS][SUBJECTS]) {
//    ifstream fin("marks.txt");
//    for (int i = 0; i < STUDENTS; ++i)
//        for (int j = 0; j < SUBJECTS; ++j)
//            fin >> marks[i][j];
//    fin.close();
//}
//
//void displayMarks(int marks[STUDENTS][SUBJECTS]) {
//    cout << "Student Marks:\n";
//    for (int i = 0; i < STUDENTS; ++i) {
//        cout << "Student " << i + 1 << ": ";
//        for (int j = 0; j < SUBJECTS; ++j)
//            cout << marks[i][j] << " ";
//        cout << endl;
//    }
//}
//
//void calculateAverages(int marks[STUDENTS][SUBJECTS], float averages[STUDENTS]) {
//    for (int i = 0; i < STUDENTS; ++i) {
//        int sum = 0;
//        for (int j = 0; j < SUBJECTS; ++j)
//            sum += marks[i][j];
//        averages[i] = sum / 3.0f;
//    }
//}
//
//void writeAveragesToFile(float averages[STUDENTS]) {
//    ofstream fout("averages.txt");
//    for (int i = 0; i < STUDENTS; ++i)
//        fout << "Student " << i + 1 << " Average: " << averages[i] << endl;
//    fout.close();
//}
//
//void findTopper(float averages[STUDENTS]) {
//    int index = 0;
//    for (int i = 1; i < STUDENTS; ++i)
//        if (averages[i] > averages[index])
//            index = i;
//    cout << "\nTopper is Student " << index + 1 << " with average " << averages[index] << endl;
//}
//
//int main() {
//    int marks[STUDENTS][SUBJECTS];
//    float averages[STUDENTS];
//    inputFromFile(marks);
//    displayMarks(marks);
//    calculateAverages(marks, averages);
//    writeAveragesToFile(averages);
//    findTopper(averages);
//    return 0;
//}
//<------------------------------------------------------------------------------------------------------>

////      Task 06


//Task 6:
//Write a C++ program to store the temperatures(in Celsius) recorded in 4 cities over 7 days.Use a 4x7 fixed - size 2D array.The program should :
//1.	Input temperatures from the user.
//2.	Save the data into a file named temperature.txt.
//3.	Read the data from the file into a 2D array.
//4.	Display :
//    o	Temperatures in table format.
//    o	Average weekly temperature of each city
//    Sample output :
//Recorded Temperatures(°C) :
//    City 1 : 30	32	31	33	34	35	36
//    City 2 : 25	24	23	22	21	20	19
//    City 3 : 15	18	17	16	19	20	21
//    City 4 : 10	12	14	16	18	20	22
//
//    Average Temperature per City :
//City 1 Average : 33
//City 2 Average : 22
//City 3 Average : 18
//City 4 Average : 16


//#include <iostream>
//#include <fstream>
//using namespace std;
//
//const int CITIES = 4;
//const int DAYS = 7;
//
//void inputTemperatures(int temps[CITIES][DAYS]) {
//    cout << "Enter temperatures for 4 cities over 7 days:\n";
//    for (int i = 0; i < CITIES; ++i)
//        for (int j = 0; j < DAYS; ++j)
//            cin >> temps[i][j];
//}
//
//void writeToFile(int temps[CITIES][DAYS]) {
//    ofstream fout("temperature.txt");
//    for (int i = 0; i < CITIES; ++i) {
//        for (int j = 0; j < DAYS; ++j)
//            fout << temps[i][j] << " ";
//        fout << endl;
//    }
//    fout.close();
//}
//
//void readFromFile(int temps[CITIES][DAYS]) {
//    ifstream fin("temperature.txt");
//    for (int i = 0; i < CITIES; ++i)
//        for (int j = 0; j < DAYS; ++j)
//            fin >> temps[i][j];
//    fin.close();
//}
//
//void displayTemperatures(int temps[CITIES][DAYS]) {
//    cout << "\nRecorded Temperatures (°C):\n";
//    for (int i = 0; i < CITIES; ++i) {
//        cout << "City " << i + 1 << ": ";
//        for (int j = 0; j < DAYS; ++j)
//            cout << temps[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//void averagePerCity(int temps[CITIES][DAYS]) {
//    cout << "\nAverage Temperature per City:\n";
//    for (int i = 0; i < CITIES; ++i) {
//        int sum = 0;
//        for (int j = 0; j < DAYS; ++j)
//            sum += temps[i][j];
//        cout << "City " << i + 1 << " Average: " << sum / 7 << endl;
//    }
//}
//
//int main() {
//    int temps[CITIES][DAYS];
//    inputTemperatures(temps);
//    writeToFile(temps);
//    readFromFile(temps);
//    displayTemperatures(temps);
//    averagePerCity(temps);
//    return 0;
//}