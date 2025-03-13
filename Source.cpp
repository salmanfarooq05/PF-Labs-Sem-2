#include <iostream>
#include<cstring>
using namespace std;
int main()
//{
//	int arr[] = { 10, 20, 30, 40, 50 };
//	int size = 5;
//	cout << "Array elements are:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//	arr[2] = 100;
//	cout << " New Array is:" << endl;
//	for (int i = 0; i < size; i++)
//	{
//		cout << "arr[" << i << "] = " << arr[i] << endl;
//	}
//	return 0;
//}

//{
//	int maxk = 0;
//	cout << "Enter maxk:  ";
//	cin >> maxk;
//	if (maxk >= 90 && maxk <= 100)
//	{
//		cout << "Grade = A ";
//	}
//	else if (maxk >= 80 && maxk <= 89)
//	{
//		cout << "Grade = B ";
//	}
//	else if (maxk >= 70 && maxk <= 79)
//	{
//		cout << "Grade = C ";
//	}
//	else if (maxk >= 60 && maxk <= 69)
//	{
//		cout << "Grade = D ";
//	}
//	else if (maxk < 60)
//	{
//		cout << "Grade = F ";
//	}
//}

//{
//	int n = 0;
//	cout << "Enter the number: ";
//	cin >> n;
//	cout << "Even numbers are ";
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			cout << i<<" ";
//		}
//	}
//}

//{
//	int rows;
//	cout << "Enter the number of Rows: ";
//	cin >> rows;
//	for(int i=1;i<=rows;i++)
//	{
//		for (int j = 1; j<=i; j++)
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//}

//{
//	int n = 0;
//	cout << "Enter the number: ";
//	cin >> n;
//	if (n > 0)
//	{
//		cout << "Number is positive";
//	}
//	else
//	{
//		cout << "NUmber is negative";
//	}
//}

//{
//    int rows;
//
//    cout << "Enter the number of rows for the pyramid: ";
//    cin >> rows;
//
//    for (int i = 1; i <= rows; i++)
//    {
//        for (int j = 1; j <= rows - i; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 1; k <= (2 * i - 1); k++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    for (int i = rows; i >= 1; i--)
//    {
//        for (int j = 1; j <= rows - i; j++)
//        {
//            cout << " ";
//        }
//        for (int k = 1; k <= (2 * i - 1); k++)
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//    system("pause");
//    return 0;
//}

//{
//    int n, m;
//
//    cout << "Enter the number of rows: ";
//    cin >> n;
//    cout << "Enter the number of columns: ";
//    cin >> m;
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            if (i == 1 || i == n || j == 1 || j == m)
//            {
//                cout << "*";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//

{

char str[100];
cout << "Enter a string: ";
cin.getline(str, 100);

int length = 0;

while (str[length] != '\0') {
	length++;
}

bool isPalindrome = true;

for (int i = 0; i < length / 2; i++) 
{
	if (str[i] != str[length - i - 1])
	{
		isPalindrome = false;
		break;
	}
}

if (isPalindrome) 
{
	cout << "String is palindrome " << endl;
}
else {
	cout << "String is not palindrome " << endl;
}

system("pause");
return 0;
}
