#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,number,results=0;
    cin >> n; //number of socks in pile
    int arr[101] = { 0 }; //1<=arr[i]<=100, assigning values to 0

    for (int i = 0; i < n; i++)
    {
        cin >> number;
        arr[number]++; 
    }
    for (int i = 0; i <= 100; i++)
    {
        results += arr[i] / 2;
    }
    cout << results;
    return 0;
}
