/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử, các phần tử trong mảng là đôi một khác nhau, các phần tử trong 2 mảng đã được sắp xếp theo thứ tự tăng dần. Hãy tìm mảng giao và mảng hợp của 2 mảng. Độ phức tạp mong muốn O(n+m)

Input Format

Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

Constraints

1≤n,m≤10^7; -10^7≤ai≤10^7

Output Format

Dòng đầu tiên in ra mảng hợp của 2 mảng Dòng thứ 2 in ra mảng giao của 2 mảng

Sample Input 0

4 5
1 2 3 4
2 3 5 6 7
Sample Output 0

1 2 3 4 5 6 7
2 3
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==========================================
// intersect, union
int main ()
{
    FAST_IO;
    int n,m;
    cin >> n >> m;
    int a[n], b[m];
    for (auto &it:a) cin >> it;
    for (auto &it:b) cin >> it;

    int i = 0, j = 0;
    vector <int> in, un;
    while ( i < n && j < m)
    {
        if (a[i] == b[j])
        {
            in.push_back(a[i]);
            un.push_back(a[i]);
            ++i;
            ++j;
        }
        else if (a[i] < b[j])
        {
            un.push_back(a[i]);
            ++i;
        }
        else
        {
            un.push_back(b[j]);
            ++j;
        }
    }
    while (i < n){
        un.push_back(a[i++]);
    }
    while (j < m){
        un.push_back(b[j++]);
    }
    for (auto &it : un) cout << it << ' ';
    cout << '\n';
    for (auto &it : in) cout << it << ' ';
    return 0;
}
