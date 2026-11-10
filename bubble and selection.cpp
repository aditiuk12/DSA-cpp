#include <iostream>
using namespace std;
//----------------Selection Sort---------------
void selectionSort(float a[], int n)
{
    int comparison = 0;
    for(int i = 0; i < n - 1; i++)
    {
         int min = i;
         for(int j = i + 1; j < n; j++)
         {
             comparison++;
             if(a[j] < a[min])
                  min = j;
         }
		  float temp = a[i];
          a[i] = a[min];
          a[min] = temp;
    }
    cout << "\nSorted Percentage:\n";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
        cout << "\nTop Five Scores: ";
    for(int i = n - 1; i >= n - 5 && i >= 0; i--)
        cout << a[i] << " ";
        
    cout << "\nTotal Comparisons = " << comparison << endl;
}
//---------------Bubble Sort Function ---------------
void bubbleSort(float a[], int n)
{
    int comparison = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            comparison++;
            if(a[j] > a[j + 1])
            {
                float temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted Percentage:\n";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\nTop Five Scores: ";
    for(nt i = n - 1; i >= n - 5 && i >= 0; i--)
        cout << a[i] << " ";
    cout << "\nTotal Comparisons = " << comparison << endl;
}
//-------------------- Main Function ------------------
int main()
{
    int n, choice;
    cout << "Name : ukharde aditi";
    cout << "\nEnter Number of Students: ";
    cin >> n;
    float per[n], temp[n];
    cout << "Enter percentage:\n";
    for(int i = 0; i < n; i++)
        cin >> per[i];
        do
    {
        for(int i = 0; i < n; i++)
            temp[i] = per[i];
        cout << "\n============= MENU ===========";
        cout << "\n1. Selection Sort";
        cout << "\n2. Bubble Sort";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                cout << "\n--- Selection Sorting ---\n";
                selectionSort(temp, n);
                break;
            case 2:
                cout << "\n--- Bubble Sorting ---\n";
                bubbleSort(temp, n);
                break;
            case 3:
                cout << "\nProgram Terminated...\n";
                break;
            default:
                cout << "\nInvalid Choice";
                cout << "\nPlease enter correct choice!\n";
        }
    } while(choice != 3);
     return 0;
}
