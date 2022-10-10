/*
Cho mảng các số nguyên không âm gồm n phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints

2≤n≤10^6; 0≤ai≤10^7

Output Format

In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sau đó bỏ trống 1 dòng và in ra tần suất 
xuất hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần).

Sample Input 0

8
2 1 2 3 4 8 2 3
Sample Output 0

1 1
2 3
3 2
4 1
8 1

2 3
1 1
3 2
4 1
8 1
*/

#include <bits/stdc++.h>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

//==================================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n;
    int a[n], Max = 0;
    int *cnt = new int[10000001]{};
    for (auto &it:a){
        cin >> it;
        Max = max(it, Max);
        ++ cnt[it];
    }
    for (int i = 0; i <= Max; i++){
        if (cnt[i] != 0) cout << i << ' ' << cnt[i] << '\n';
    }
    cout << '\n';
    for (int i = 0; i < n; i++){
        if (cnt[a[i]] != 0){
            cout << a[i] << ' ' << cnt[a[i]] << '\n';
            cnt[a[i]] = 0;
        }
    }
}