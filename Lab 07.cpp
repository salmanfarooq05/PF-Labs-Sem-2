#include<iostream>
#include<fstream>
using namespace std;

//int countEven(int arr[], int size);
//int main()
//{
//	const int size = 5;
//	int arr[size];
//	cout << "Enter the array elements: ";
//	for (int i = 0; i < size; i++)
//	{
//		cin >> arr[i];
//	}
//	int a = countEven(arr, size);
//	cout << "Even Elements: " << a;
//	system("pause");
//	return 0;
//}
//
//int countEven(int arr[], int size)
//{
//	int evencount = 0;
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			evencount++;
//		}
//	}
//	return evencount;
//	
//}

//   task 02

//char getStringLength( char arr[]);
//int main()
//{
//	 char arr[20];
//	 cout << "Enter the String: ";
//	 cin.getline(arr, 50);
//	
//	 int a = getStringLength(arr);
//	 cout << "Length of string is " << a;
//	 return 0;
//
//}
//
//char getStringLength(char arr[])
//{
//	int len = 0;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		len++;
//	}
//	return len;
//}

// task 03

//void writeToFile( char message[]);
//int main()
//{
//	char arr[50];
//	cout << "Enter Message written to file. ";
//	cin.getline(arr, 50);
//	writeToFile(arr);
//	cout << "Message written to file. ";
//	return 0;
//}
//void writeToFile(char message[])
//{
//	ofstream fout("output.txt");
//	fout << message << endl;
//
//}

// task 04

//int countWords(char count[]);
//int main()
//
//{
//	char arr[50];
//	cout << "Enter the String ";
//	cin.getline(arr, 50);
//	int a = countWords(arr);
//	cout << "Number of words are " << a;
//
//
//}
//int countWords(char count[])
//{
//	char word[50];
//	int wcount = 1;
//	ifstream fin("input.txt");
//	fin.getline(word, 50);
//	for (int i = 0; word[i] != '\0'; i++)
//	{
//		if (word[i] == ' ')
//		{
//			wcount++;
//		}
//	}
//	return wcount;
//}

//  task 05


//void appendToFile(char line[]);
//
//int main() {
//	char string[100] = { '\0' };
//
//	cout << "Enter the line you want to append in the file: ";
//	cin.getline(string, 100);
//
//	appendToFile(string);
//
//	return 0;
//}
//
//void appendToFile(char line[]) {
//	ofstream fout("output.txt", ios::app);
//
//	fout << line << endl;
//
//	cout << "Words appended to the file " << endl;
//}



//   Task 06

//void readIntegers();
//
//int main()
//{
//	readIntegers();
//
//	return 0;
//}
//
//void readIntegers() {
//	ifstream fin("input.txt");
//	ofstream fout("output.txt");
//	int fword = 0, sword = 0;
//	fin >> fword;
//	fin >> sword;
//
//	for (int i = fword + 2; i < sword; i += 2) {
//		fout << i << " ";
//	}
//}


// Task 07

//int readSingleIntegers();
//
//int main() {
//	int s = readSingleIntegers();
//
//	cout << "Sum of digits: " << s << endl;
//
//	return 0;
//}
//
//int readSingleIntegers() {
//	ifstream fin("digit_input.txt");
//	ofstream fout("sum_output.txt");
//	int word = 0,sum=0;
//	fin >> word;
//	int orgword = word;
//	int lastword = 0;
//	while (word > 0) {
//		lastword = word % 10;
//		word = word / 10;
//		sum += lastword;
//	}
//
//	return sum;
//}

// Task 08

//void reverseTextofFile() {
//	ifstream fin("line.txt");
//	ofstream fout("reversed.txt");
//
//	if (!fin) cout << "Error! File does not exists" << endl;
//
//	char line[100] = { '\0' };
//	fin.getline(line, 100);
//
//	char revline[100] = { '\0' };
//
//	int lengthofline = 0;
//	while (line[lengthofline] != '\0')lengthofline++;
//
//	for (int i = 0; i < lengthofline; i++) {
//		revline[i] = line[lengthofline - i - 1];
//	}
//
//	fout << revline << endl;
//}
//
//int main() {
//	reverseTextofFile();
//
//
//	return 0;
//}


// Task 09

//int readConsonants(char arr[]) {
//	int consonants = 0;
//
//	for (int i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] >= 'A' && arr[i] <= 'A') arr[i] += 32;
//		if (arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u') consonants++;
//	}
//
//	return consonants;
//}
//
//int main() {
//	ifstream fin("input.txt");
//
//	char str[100] = { '\0' };
//
//	fin.getline(str, 100);
//
//	int n = readConsonants(str);
//
//	cout << "Number of consonants: " << n << endl;
//
//	return 0;
//}
//}