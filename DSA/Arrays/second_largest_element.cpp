#include <iostream>
#include <climits>
using namespace std;

#define MAX 5
int arr[MAX];

int main(){
    for (int i = 0; i < MAX; i++)
    {
        cin>>arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < MAX; i++)
    {
        if (largest<arr[i])
        {
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
        
    }
    
    if(second_largest == INT_MIN){
        cout << "No second largest element";
    } else {
        cout << second_largest;
    }

    return 0;
}