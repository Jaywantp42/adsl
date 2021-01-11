/*
    write a program to perform an insertion sort on a given array.
*/

#include<iostream>

using namespace std;

void insertionSort(int arr[], int size)
{
    int i;
    int j;
    int key;

    for(i = 1; i<size; i++)
    {
        key =arr[i];
        j = i-1;

        while (j>=0 && arr[j]>key)
        {
            int temp = arr[j];
            arr[j] = key;
            arr[j+1] = temp;
            j = j-1;
        }
    }
    //print sorted array
    cout<<"Sorted array is"<<endl;
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"\t";
    }
}

int main()
{
    int size;
    cout<<"Enter array size"<<endl;
    cin>> size;
    int arr[size];

    cout<<"Enter array Elements"<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr, size);
}