#include <iostream>
#include <algorithm>
using namespace std;
// Linear Search Function
void linearSearch(int a[], int n, int key)
{
    int count = 0;
	for (int i = 0; i < n; i++)
    {
        count++;
		if (a[i] == key)
        {
            cout << "Student Attended Session" << endl;
            cout << "Position: " << i + 1 << endl;
            cout << "Comparison: " << count << endl;
            return;
        }
    }
	cout << "Student not Attended Session" << endl;
    cout << "Comparison: " << count << endl;
}
// Binary Search Function
void binarySearch(int a[], int n, int key)
{
    sort(a, a + n);
	int low = 0;
    int high = n - 1;
    int count = 0;
	while (low <= high)
    {
        count++;
        int mid = (low + high) / 2;
		if (a[mid] == key)
        {
            cout << "Student Attended Session" << endl;
            cout << "Position in sorted array: " << mid + 1 << endl;
            cout << "Comparison: " << count << endl;
            return;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
	cout << "Student not Attended Session" << endl;
    cout << "Comparison: " << count << endl;
}
int main()
{
    cout << "Roll no. = 258";
    cout << "\nName: Aditi Ambadas Ukharde";
    cout << "\n==========================";
	int rollnumber[50];
    int n, key, choice;
	cout << "\nEnter number of students: ";
    cin >> n;
	if (n < 1 || n > 50)
    {
        cout << "Invalid number of students!";
        return 0;
    }
	cout << "Enter roll numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> rollnumber[i];
    }
	do
    {
        cout << "\n\n1. Linear Search";
        cout << "\n2. Binary Search";
        cout << "\n3. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
		if (choice == 1 || choice == 2)
        {
            cout << "Enter roll number to search: ";
            cin >> key;
        }
		switch (choice)
        {
            case 1:
                linearSearch(rollnumber, n, key);
                break;
			case 2:
                binarySearch(rollnumber, n, key);
                break;
			case 3:
                cout << "Exiting program...";
                break;
			default:
                cout << "Invalid choice!";
        }
	} while (choice != 3);
	return 0;
}
