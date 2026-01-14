#include <iostream>
using namespace std;

#define MAX 5
int arr[MAX];

int main(){
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    
    int temp = arr[0];
    for (int i = 0; i < MAX-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[MAX-1] = temp;

    for (int i = 0; i < MAX; i++)
    {
        cout << arr[i];
    }
    return 0;
    
}