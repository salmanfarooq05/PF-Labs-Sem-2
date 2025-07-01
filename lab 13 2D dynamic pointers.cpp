//
//Task 1:
//
//Write a C++ program using double pointers to :
//1.	Dynamically create a 2D array of size r × c.
//2.	Take input from the user.
//3.	Compute the sum of all elements.
//4.	Create and display the transpose of the matrix.
//Sample Output :
//Enter rows and columns : 2 3
//Enter matrix elements :
//1 2 3
//4 5 6
//
//Original Matrix :
//1	2	3
//4	5	6
//Sum of all elements : 21
//
//Transpose Matrix :
//1	4
//2	5
//3	6



//#include <iostream>
//using namespace std;
//
//// Function to create a 2D array dynamically
//int** createMatrix(int rows, int cols) {
//    int** mat = new int* [rows];
//    for (int i = 0; i < rows; i++)
//        mat[i] = new int[cols];
//    return mat;
//}
//
//// Function to take input in matrix
//void inputMatrix(int** mat, int rows, int cols) {
//    cout << "Enter matrix elements:\n";
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            cin >> mat[i][j];
//}
//
//int main() {
//    int rows, cols;
//    cout << "Enter rows and columns: ";
//    cin >> rows >> cols;
//
//    // Create and input matrix
//    int** matrix = createMatrix(rows, cols);
//    inputMatrix(matrix, rows, cols);
//
//    // Display original matrix
//    cout << "\nOriginal Matrix:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++)
//            cout << matrix[i][j] << "\t";
//        cout << endl;
//    }
//
//    // Calculate and show sum
//    int sum = 0;
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            sum += matrix[i][j];
//    cout << "\nSum of all elements: " << sum << endl;
//
//    // Transpose matrix
//    int** transpose = createMatrix(cols, rows);
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            transpose[j][i] = matrix[i][j];
//
//    // Display transpose matrix
//    cout << "\nTranspose Matrix:\n";
//    for (int i = 0; i < cols; i++) {
//        for (int j = 0; j < rows; j++)
//            cout << transpose[i][j] << "\t";
//        cout << endl;
//    }
//
//    // Free memory
//    for (int i = 0; i < rows; i++)
//        delete[] matrix[i];
//    delete[] matrix;
//
//    for (int i = 0; i < cols; i++)
//        delete[] transpose[i];
//    delete[] transpose;
//
//    return 0;
//}



//
//Task 2:
//Write a C++ program that :
//Dynamically allocates a 2D array using double pointers.
//Finds the row with the highest sum and prints that row and the sum.
//
//Sample Output :
//Enter rows and columns : 3 4
//Enter elements :
//1 2 3 4
//9 9 9 9
//0 1 0 1
//
//Row with max sum is row 1 (sum = 36) : 9 9 9 9




//   task 02
//
//#include<iostream>
//using namespace std;
//
//void input(int** mat, int rows, int col);
//int maxRowIndex(int** mat, int rows, int col, int& maxsum);
//int** createMatrix(int rows, int cols)
//{
//	int** mat = new int* [rows];
//	for (int i = 0; i < rows; i++)
//		mat[i] = new int[cols];
//	return mat;
//}
//
//int main()
//{
//	int rows, cols;
//	cout << "Enter rows and columns: ";
//	cin >> rows >> cols;
//
//	int** matrix = createMatrix(rows, cols);
//	input(matrix, rows, cols);
//
//	int maxSum = 0;
//	int maxRow = maxRowIndex(matrix, rows, cols, maxSum);
//
//	cout << "\nRow with max sum is row " << maxRow << " (sum = " << maxSum << "): ";
//	for (int j = 0; j < cols; j++)
//		cout << matrix[maxRow][j] << " ";
//	cout << endl;
//
//	for (int i = 0; i < rows; i++)
//		delete[] matrix[i];
//		delete[] matrix;
//
//	return 0;
//}
//
//void input(int** mat, int rows, int col)
//{
//	cout << "Enter the elements:\n";
//	for (int i = 0; i < rows; i++)
//		for (int j = 0; j < col; j++)
//			cin >> mat[i][j];
//}
//
//int maxRowIndex(int** mat, int rows, int col, int& maxsum)
//{
//	int maxr = 0;
//	maxsum = 0;
//
//	for (int i = 0; i < rows; i++)
//	{
//		int rowsum = 0; 
//		for (int j = 0; j < col; j++)
//		{
//			rowsum += mat[i][j];
//		}
//		if (rowsum > maxsum)
//		{
//			maxsum = rowsum;
//			maxr = i;
//		}
//	}
//	return maxr;
//}

//<------------------------------------------------------------------------------------------------------>

//  task 03

//Task 3:
//Write a program that :
//1.	Dynamically allocates a 2D array using double pointers.
//2.	Accepts integers from the user.
//3.	Replaces all even numbers in the matrix with 0.
//4.	Displays the modified matrix.
//Sample Output :
//Enter number of rows and columns : 2 3
//Enter elements :
//1 2 3
//4 5 6
//
//Modified Matrix :
//1	0	3
//0	5	0


//#include <iostream>
//using namespace std;
//
//int** createMatrix(int rows, int cols)
//{
//    int** mat = new int* [rows];
//    for (int i = 0; i < rows; i++)
//        mat[i] = new int[cols];
//    return mat;
//}
//
//void inputMatrix(int** mat, int rows, int cols) 
//{
//    cout << "Enter elements:\n";
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            cin >> mat[i][j];
//}
//
//
//void replaceEvens(int** mat, int rows, int cols) {
//    for (int i = 0; i < rows; i++)
//        for (int j = 0; j < cols; j++)
//            if (mat[i][j] % 2 == 0)
//                mat[i][j] = 0;
//}
//
//
//void displayMatrix(int** mat, int rows, int cols) {
//    cout << "\nModified Matrix:\n";
//    for (int i = 0; i < rows; i++) {
//        for (int j = 0; j < cols; j++)
//            cout << mat[i][j] << "\t";
//        cout << endl;
//    }
//}
//
//int main() {
//    int rows, cols;
//    cout << "Enter number of rows and columns: ";
//    cin >> rows >> cols;
//
//    int** matrix = createMatrix(rows, cols);
//
//    inputMatrix(matrix, rows, cols);
//    replaceEvens(matrix, rows, cols);
//    displayMatrix(matrix, rows, cols);
//
//    // Free memory
//    for (int i = 0; i < rows; i++)
//        delete[] matrix[i];
//    delete[] matrix;
//
//    return 0;
//}


//<------------------------------------------------------------------------------------------------------>

// task 04

#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

void input1DArray(int arr[], int size) {
    cout << "Enter " << size << " elements for the 1D array:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}


void copyTo2D(int array2D[MAX_SIZE][MAX_SIZE], int array1D[], int rowIndex, int cols) {
    for (int j = 0; j < cols; j++) {
        array2D[rowIndex][j] = array1D[j];
    }
}

int main() {
    int rows, cols;
    int array2D[MAX_SIZE][MAX_SIZE] = { 0 }; 

    cout << "Enter number of rows for 2D array (max 5): ";
    cin >> rows;

    cout << "Enter number of columns for 2D array (max 5): ";
    cin >> cols;

    int array1D[MAX_SIZE];

    input1DArray(array1D, cols);

    int rowIndex;
    cout << "Enter the row index where you want to copy the 1D array: ";
    cin >> rowIndex;

    if (rowIndex < 0 || rowIndex >= rows) {
        cout << "Invalid row index.\n";
        return 1;
    }


    copyTo2D(array2D, array1D, rowIndex, cols);


    cout << "\nFinal 2D Array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array2D[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
