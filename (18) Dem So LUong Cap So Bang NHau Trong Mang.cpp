/*
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

Input Format

Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

Constraints

1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6

Output Format

In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

Sample Input 0

6
2 2 1 3 2 3
Sample Output 0

4
Explanation 0

Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)
*/

#include <iostream>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

const int MOD = 1e9 + 7, Maxn = 1e6 +1;
int f[Maxn];
//==============================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n] ,Min = MOD, Max = -MOD;
   
    for ( auto &it : a)
    {
        cin >> it;
        ++ f[it];
        Min = min(Min, it);
        Max = max(Max, it);
    }
    int cnt = 0;
    for ( int i = Min; i <= Max; i++)
    {
        if (f[i] != 0)
            cnt += (f[i]-1) * f[i] /2;
    }
    cout << cnt;

    return 0;
}