#include<iostream>

using namespace std;

int main()
{   
    int size_of_array;
    cout<<"Enter the size of array: ";
    cin>> size_of_array;

    int arr[size_of_array], temp;
    
    cout<<"Enter the numbers of array: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }
    
    

    return 0;
}