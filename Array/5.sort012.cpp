#include <bits/stdc++.h>
using namespace std;


void sort012(int *arr, int n)
{
   //   Write your code here
   int i = 0;
   int j = n-1;
   int k = 0;

   while(k <= j) {
       if(arr[k] == 0) swap(arr[i++], arr[k++]);
       else if(arr[k] == 1) k++;
       else swap(arr[k++], arr[j--]);
   }
}


int main() {
    int n = 6;
    int arr[] = {0,1,1,2,0,2};
    sort012(arr,n);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}