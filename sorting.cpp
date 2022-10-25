// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
    int c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            c0++;
        else if (a[i] == 1)
            c1++;
        else
            c2++;
    }
    int index = 0;
    while (c0--)
    {
        a[index] = 0;
        index++;
    }
    while (c1--)
    {
        a[index] = 1;
        index++;
    }
    while (c2--)
    {
        a[index] = 2;
        index++;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort012(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}