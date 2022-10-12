/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ 2. Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N

Output Format

In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

Sample Input 0

5
1 2 3 4 5 1
1 3
Sample Output 0

6
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//====================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n+1], q, l, r;
    long long prefix[n+1];
    prefix[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    } 
    cin >> q;
    while (q--)
    {
        cin >> l >> r;
        cout << prefix[r] - prefix[l-1] << ' ';

    }
    return 0;
}
