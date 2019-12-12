//
//  arrays.cpp
//  Final Project
//
//  Created by Matt Wheatley on 10/14/19.
//  Copyright © 2019 Matt Wheatley. All rights reserved.
//

#include <iostream>
using namespace std;


void print_menu();

// 1.)
void read_values(int [], int size);

// 2.)
void searchNum(int a[], int size);

// 3.)
void countNum (int a[], int size);

// 4.)
void find_small(int a[], int size);

// 5.)
void find_large(int a[], int size);

// 6.)
void print_sum (int a[], int size);

// 7.)
void print_average (int a[], int size);

// 8.)
void print_array_forwards (int a[], int size);

// 9.)
void print_array_backwards (int a[], int size);

// 10.)
void sort_contents(int a[], int size);



int main(int argc, const char * argv[]) {
    
    const int ARRAY_SIZE = 8;
    int arr[ARRAY_SIZE];
    int choice = 0;
    
    print_menu();
    while (choice >=0)
    {
    cout << "Enter your selection: ";
    cin >> choice;
    switch (choice)
    {
        case 1:     read_values(arr, ARRAY_SIZE);
                    break;
        case 2:     searchNum(arr, ARRAY_SIZE);
                    break;
        case 3:     countNum (arr, ARRAY_SIZE);
                    break;
        case 4:     find_small (arr, ARRAY_SIZE);
                    break;
        case 5:     find_large (arr, ARRAY_SIZE);
                    break;
        case 6:     print_sum (arr, ARRAY_SIZE);
                    break;
        case 7:     print_average (arr, ARRAY_SIZE);
                    break;
        case 8:     print_array_forwards(arr, ARRAY_SIZE);
                    break;
        case 9:     print_array_backwards(arr, ARRAY_SIZE);
                    break;
        case 10:    sort_contents (arr, ARRAY_SIZE);
                    break;
        case 11:    cout << "Goodbye!" << endl;
            choice = -10;
                    break;
        default:
            cout << "Invalid option" << endl;
    }
    }
    
    return 0;
}



// Function Definitions
void print_menu()
{
    cout << endl;
    cout << "Menu Options\n";
    cout << "------------\n";
    cout << "1) Read values into the array\n";
    cout << "2) Find a specific value in the array\n";
    cout << "3) Count the number of occurences of a specific value\n";
    cout << "4) Find the smallest value in the array\n";
    cout << "5) Find the largest value in the array\n";
    cout << "6) Print the sum of the values in the array\n";
    cout << "7) Print the average of the values in the array\n";
    cout << "8) Print the array contents in forward order\n";
    cout << "9) Print the array contents backwards\n";
    cout << "10) Sort the contents of the array\n";
    cout << "11) Quit\n";
}

// 1.)
void read_values(int a[], int size)
{
    int i;
    
    for (i=1; i<=size; ++i)
    {
        cout << "Enter the value for item #" << i << ": ";
        cin >> a[i-1];
    }
}

// 2.)
void searchNum(int a[], int size)
{
    int i, n;
    cout << "Enter a number to search: ";
    cin >> n;
    bool hasValue = false;
    for  (i=0; i < size; i++)
    {
        if (a [i] == n) {
            cout << n << " is located at " << i << endl;
            hasValue=true;
        }
    }
    if (hasValue == false){
        cout << "That value doesn't exist." << endl;
    }
}

// 3.)
void countNum(int a[], int size)
{
    int n;
    int i;
    bool hasValue = false;
    cout << "Enter a value to search: ";
    cin >> n;
    int count =0;

    for (i =0; i < size; i++)
    {
        if (a [i] == n) {
            count ++;
            hasValue = true;
        }
    }

        if (hasValue == true)
            cout << n << " occurs " << count << " time(s)." << endl;
        else
            cout << "That value does not exist." << endl;

}



// 4.)
void find_small (int a[], int size)
{
    int i, small = INT_MAX;
    for (i=0; i<size; i++)
    {
        if(small > a[i])
            small = a[i];
    }
    cout << "The smallest value is: " << small << endl;
}



// 5.)
void find_large (int a[], int size)
{
    int max = a[0];
    for (int i=1; i<size; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    cout << "The largest value is " << max << endl;
}

// 6.)
void print_sum (int a[], int size)
{
    int i, sum;
    sum = 0;
    for (i=0; i<size; i++)
    {
        sum+=a[i];
    }
    cout << "The sum of the array is " << sum << endl;
}


// 7.)
void print_average(int a[], int size)
{
    double value = 0.0;
    for (int i=0; i<size; i++)
    {
        value += a[i];
    }
    cout <<"The average of the array is: " << value/size << endl;
}

// 8.)
void print_array_forwards(int a[], int size)
{
    int i;
    
    cout << "The array contents in forward order are: ";
    for (i=0; i<size; ++i)
        cout << a[i] << " ";
    cout << endl;
}

// 9.)
void print_array_backwards(int a[], int size)
{
    int i;
    
    cout << "The array contents in backward order are: ";
    for (i=8-1; i>=0; i--)
        cout << a[i] << " ";
    cout << endl;
}

// 10.)
void sort_contents (int a[], int size)
{
    int i, j;
    int temp;
    for (i=1; i<=size; i++)
    {
        for (j=0; j<(size-1); j++)
        {
            if (a[j+1] < a[j])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for (int i=0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

