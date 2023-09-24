#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
int num[N];
int n;
void merge()
{
    int left_size = ;
}
void merge_sort(int l, int r)
{
    int mid = (r + l) / 2;

    merge_sort(l, mid);
    merge_sort(mid + 1, r);
    merge();
}
int main()
{
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    merge_sort(0, n - 1);

    return 0;
}