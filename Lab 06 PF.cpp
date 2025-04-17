#include<iostream>
using namespace std;
//int isprime(int n) 
//{
//	int count = 0;
//	
//	for (int i = n; i >= 1; i--)
//	{
//		if (n % i == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//void printprime()
//{
//	int prime_numbers = 2;
//	cout << "First 10 prime numbers are: ";
//	while (prime_numbers < 30)
//	{
//		if (isprime(prime_numbers))
//		{
//			cout << prime_numbers << " ";
//		}
//		prime_numbers++;
//	}
//	cout << endl;
//}
//
//	void revprime()
//	{
//		int revprime = 29;
//		cout << "First 10 prime numbers are: ";
//		while (revprime >= 2)
//		{
//			if (isprime(revprime))
//			{
//				cout << revprime << " ";
//			}
//			revprime--;
//		}
//		cout << endl;
//	}
//	int main()
//	{
//		int num;
//		cout << "Enter a positivr integer: ";
//		cin >> num;
//		int call = isprime(num);
//		if(call)
//		{
//			cout << num << " is a prime number:";
//		}
//		else
//		{
//			cout << num << " is not a prime number:";
//		}
//		printprime();
//		revprime();
//	}

// Task 02

//void printmatrix(int n)
//{
//	int count = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (j == count)
//			{
//				cout << "1 ";
//			}
//			else
//			{
//				cout << "0 ";
//			}
//			
//		}
//		cout << endl;
//		count++;
//	}
//}
//int main()
//{
//	printmatrix(5);
//	return 0;
//}

// Task 03

//int fact(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	int fact = 1;
//	for (int i = n; i >= 1; i--)
//	{
//		fact *= i;
//	}
//	return fact;
//}
//int main()
//{
//	int num=0;
//	cout << "Enter a positivr integer : ";
//	cin >> num;
//	int Return = fact(num);
//
//	cout << "factorial of " << num << " is " << Return;
//	return 0;
//}

// Task 04

//int findGCD(int a, int b) {
//	while (b != 0) {
//		int temp = b;
//		b = a % b;
//		a = temp;
//	}
//	return a;
//}
//
//
//int main() {
//	int num1, num2;
//
//	cout << "Enter number1: ";
//	cin >> num1;
//
//	cout << "Enter number2: ";
//	cin >> num2;
//
//	cout << "GCD of " << num1 << " and " << num2 << " is " << findGCD(num1, num2) << endl;
//
//	return 0;
//}

// Task 05
//int countDigits(int num)
//{
//	int digits=0;
//	for (int i = num; i != 0; i /= 10)
//	{
//		digits++;
//	}
//	return digits;
//}
//int main()
//{
//	int n;
//	cout << "Enter the Digits ";
//	cin >> n;
//	int digitCount = countDigits(n);
//	cout << "Digits in " << n <<" is "<< digitCount;
//	return 0;
//	
//}

// Task 06

//int integarray(int arr[], int s)
//{
//	int sum = 0;
//	for (int i = 0; i < s; i++)
//	{
//		sum += arr[i];
//	}
//	float avg = sum/s;
//
//	return avg;
//}
//int main()
//{
//	int n;
//	int arr[5] = { 10, 20, 30, 40, 50 };
//	int s = 5;
//	int arraysize = integarray(arr,s);
//	cout << "Average of the array: " << " is " << arraysize;
//}

// Task 07

//void removeDuplicates(int arr[], int& size) {
//	int newsize = 0;
//
//	for (int i = 0; i < size; i++) {
//		bool isDuplicate = false;
//		for (int j = 0; j < newsize; j++) {
//			if (arr[i] == arr[j]) {
//				isDuplicate = true;
//				break;
//			}
//		}
//
//		if (!isDuplicate) {
//			arr[newsize++] = arr[i];
//		}
//	}
//	size = newsize;
//}
//
//int main() {
//	int arr[] = { 1, 2, 2, 3, 4, 4, 5 };
//	int lengthofarr = sizeof(arr) / sizeof(arr[0]);
//
//	removeDuplicates(arr, lengthofarr);
//
//	int sum = 0;
//
//	for (int i = 0; i < lengthofarr; i++) {
//		sum += arr[i];
//	}
//
//	cout << "Sum of unique elements: " << sum << endl;
//
//	return 0;
//}

// Task 08

//int sumoddelemnets(int arr[], int s) {
//	int sum = 0;
//
//	for (int i = 0; i < s; i++) {
//		if (i % 2 != 0) {
//			sum += arr[i];
//		}
//	}
//
//	return sum;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int lengthofarr = sizeof(arr) / sizeof(arr[0]);
//
//	int s = sumoddelemnets(arr, lengthofarr);
//
//	cout << "Sum of elements at odd indices: " << s << endl;
//
//	return 0;
//}

// Task 09
// 
//int findMax(int arr[], int s) {
//	int MAX = arr[0];
//
//	for (int i = 0; i < s; i++) {
//		if (arr[i] > MAX) {
//			MAX = arr[i];
//		}
//	}
//
//	return MAX;
//}
//
//int main() {
//	int arr[] = { 7, 3, 12, 4, 9 };
//	int lengthofarr = sizeof(arr) / sizeof(arr[0]);
//
//	int m = findMax(arr, lengthofarr);
//
//	cout << "Maximum element of array is: " << m << endl;
//
//	return 0;
//}