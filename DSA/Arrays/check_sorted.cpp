#include <iostream>
using namespace std;

#define MAX 5
int arr[MAX];

int main(){
    for (int i = 0; i < MAX; i++)
    {
        cin >> arr[i];
    }
    bool isSorted = true;

    for (int i = 0; i < MAX-1; i++)
    {
        if (!(arr[i]<=arr[i+1]))
        {
            isSorted = false;
            break;
        }
        
    }
    if (isSorted)
    {
        cout << "Sorted\n";
    }else{
        cout << "Not Sorted\n";
    }
    
    return 0;
    
}