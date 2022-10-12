/*
Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

Input Format

Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9

Output Format

In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

Sample Input 0

3
3 4 5
Sample Output 0

YES
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std; 

bool check(int a[], int n)
{
    int l,r;
    long long tmp;
    for ( int i = n-1; i >= 0; i --)
    {
        l = 0, r = i - 1;
        while (l < r)
        {
            tmp = a[l]*a[l] + a[r]*a[r];
            if (tmp == a[i]*a[i]) return true;
            else if (tmp > a[i]*a[i]) --r;
            else ++l;
        }
    }
    return false;
}

//========================================
int main()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n];
    for (auto &it : a) cin >> it;
    sort(a, a+n);
    cout << (check(a, n) ? "YES" : "NO");
    return 0;
}
