#include<iostream>
using namespace std;
int main()
//{
//	int arr[50];
//	cout << "Enter the array elements: ";
//	for (int i = 0; i < 5; i++)
//	{	
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//	cout << "Reverse Array: ";
//	for (int j = 4; j >= 0; j--)
//	{
//		cout<< arr[j];
//	}
//	return 0;
//}

// Task 02

//{
//	int arr[50];
//	cout << "Enter the array elements: ";
//	for (int i = 0; i < 5; i++)
//	{	
//		cin >> arr[i];
//	}
//	int max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	cout << "Maximum Element is: " << max;
//
//}

// Task 03

//{
//	int arr[50];
//	cout << "Enter the array elements: ";
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//	}
//	int max = 0;
//	int s_max = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		if (arr[i] > max)
//		{
//			s_max = max;
//			max = arr[i];
//		}
//	}
//	cout << " Second Maximum Element is: " << s_max;
//
//}

// Task 04
//{
//	int arr[20] = { 0 };
//	int count = 0;
//	int tempinp = 0;
//	cout << "Input sequence: ";
//	for(int i=0;i<20;i++)
//	{
//		cin >> tempinp;
//		if (tempinp == -99)
//		{
//			break;
//		}
//		if (tempinp != -99)
//		{
//			arr[i] = tempinp;
//			count++;
//		}
//	}
//	cout << "Entered Sequence: ";
//	for (int i = 0; i < count; i++)
//	{
//		cout << arr[i];
//	}
//	int choice;
//	cout << "\nEnter choice: ";
//	cin >> choice;
//	if (choice == 1)
//	{
//		for (int i = 0; i < count; i++)
//		{
//			for (int j = 0; j < count - i - 1; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//	if (choice == 2)
//	{
//		for (int i = 0; i <count; i++)
//		{
//			for (int j = 0; j < count  - i - 1; j++)
//			{
//				if (arr[j] < arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//	}
//	else
//	{
//		cout << "Invalid input: ";
//	}
//	cout << "\nUpdated Array: ";
//	for (int i = 0; i < count; i++)
//	{
//		cout << arr[i];
//	}
//	
//}

// Task 05
//{
//		int arr[20] = { 0 };
//		int count = 0;
//		int tempinp = 0;
//		cout << "Input sequence: ";
//		for(int i=0;i<20;i++)
//		{
//			cin >> tempinp;
//			if (tempinp == -99)
//			{
//				break;
//			}
//			if (tempinp != -99)
//			{
//				arr[i] = tempinp;
//				count++;
//			}
//		}
//		cout << "Entered Sequence: ";
//		for (int i = 0; i < count; i++)
//		{
//			cout << arr[i];
//		}
//		int choice;
//		cout << "\nEnter choice: ";
//		cin >> choice;
//		if (choice == 1)
//		{
//			for (int i = 0; i < count; i++)
//			{
//				for (int j = 0; j < count - i - 1; j++)
//				{
//					if (arr[j] > arr[j + 1])
//					{
//						int temp = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = temp;
//					}
//				}
//			}
//		}
//		if (choice == 2)
//		{
//			for (int i = 0; i <count; i++)
//			{
//				for (int j = 0; j < count  - i - 1; j++)
//				{
//					if (arr[j] < arr[j + 1])
//					{
//						int temp = arr[j];
//						arr[j] = arr[j + 1];
//						arr[j + 1] = temp;
//					}
//				}
//			}
//		}
//		else
//		{
//			cout << "Invalid input: ";
//		}
//		cout << "\nUpdated Array: ";
//		for (int i = 0; i < count; i++)
//		{
//			cout << arr[i];
//		}
//		
//}

// Task 06
//{
//	char arr[50];
//	char rev[50];
//	int len = 0;
//	cout << "Enter String; ";
//	cin >> arr;
//	for (int i = 0; arr[i] != '\0'; i++)
//	{
//		len++;
//	}
//	for (int i = 0; i < len; i++)
//	{
//		rev[i] = arr[len - i - 1];
//	}
//	rev[len] = '\0';
//	cout << "reverse Array; " << rev;
//}

// Task 06

{
	char arr[50];
	char rev[50];
	int len = 0;
	cout << "Enter String; ";
	cin >> arr;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		len++;
	}
	bool ispalandrom = true;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != arr[len - i - 1])
		{
			ispalandrom = false;
			break;
		}
	}
	if (ispalandrom)
	{
		cout << "Array is palandrom: ";
	}
	else
	{
		cout << "Array is not palandrom: ";
	}
}

	

	


























