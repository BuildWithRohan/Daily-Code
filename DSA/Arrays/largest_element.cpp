#include <iostream>
using namespace std;

#define MAX 5
int arr[MAX];

int main() {
    for(int i=0;i<MAX;i++)
    {
        cin>>arr[i];
    }

    int largest = arr[0];

    for (int i = 1; i < MAX; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    
    cout<<largest;
    return 0;
}