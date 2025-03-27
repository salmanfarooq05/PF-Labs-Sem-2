#include<iostream>
#include<fstream>
using namespace std;
int main()
//{
//	ifstream fin("numbers.txt");
//	ofstream fout("output.txt");
//	int arr[10] = { 0 };
//	int count = 0;
//	int num;
//	while (fin >> num)
//	{
//		arr[count] = num;
//		count++;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		fout << arr[i] << endl;
//	}
//	fin.close();
//	fout.close();
//
//}

// Task 02

//{
//	ifstream fin("data.txt");
//	ofstream fout("output2.txt");
//	char ch;
//	while (fin.get(ch))
//	{
//		fout << ch;
//	}
//	fin.close();
//	fout.close();
//
//}

// Task 03

//{
//        ifstream fin("mixed.txt");
//        ofstream fout("ouput3.txt");
//
//        int num;
//
//        while (fin >> num)
//        {
//            fout << num << " ";
//            fin.ignore(2);
//        }
//
//        fin.close();
//        fout.close();
//        return 0;
//}

// Task 04

{
    ifstream fin("user.txt");
    ofstream fout("ouput4.txt");

    int id;
    char name[10] = { '\0' };

    while (fin >> id) {
        fin.ignore();
        fin.getline(name, 10);
        fout << "User ID: " << id << endl;
        fout << "User Name: ";
        for (int i = 0; name[i] != '\0'; i++) {
            fout << name[i];
        }
    }


    fin.close();
    fout.close();


    return 0;
}