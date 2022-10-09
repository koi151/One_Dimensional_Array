/*
Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và giảm dần,
các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng n Dòng thứ 2 là các phần tử ai trong mảng

Constraints

1≤n≤10^6; 1≤ai≤10^9

Output Format

In ra dãy đã được sắp xếp

Sample Input 0

10
1 2 3 9 7 4 8 6 10 5
Sample Output 0

9 7 5 3 1 2 4 6 8 10
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==================================
int main ()
{
    FAST_IO;
    int n,x;
    cin >> n;
    vector <int> v1, v2;
    while (n--)
    {
        cin >> x;
        if (x % 2 != 0) v1.push_back(x);
        else v2.push_back(x);
    }
    sort(v1.begin(), v1.end(), greater<int>());
    sort(v2.begin(), v2.end());
    for (auto it:v1) cout << it << ' ';
    for (auto it:v2) cout << it << ' ';
    return 0;
}