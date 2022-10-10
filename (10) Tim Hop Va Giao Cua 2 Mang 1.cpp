/*
Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các phần tử khác nhau của a và b. Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng dần.

Input Format

Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2.

Constraints

1≤n,m≤10^6; 0≤ai≤10^7

Output Format

Dòng đầu tiên in ra giao của 2 mảng n và m. Dòng thứ 2 in ra hợp của 2 mảng n và m.

Sample Input 0


Sample Output 0

1 2
1 2 3 4 5 6 7
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;
int cnt1[10000001], cnt2[1000001];
const int MOD = 1e9 + 7;

//=============================================
int main()
{
    FAST_IO;
    int n,m, MAX = -MOD, MIN = MOD;
    cin >> n >> m;
    int a[n], b[m];
    vector <int> v;
    for (auto &it:a){
        cin >> it;
        cnt1[it]++;
        MAX = max(MAX,it);
        MIN = min(MIN,it);
    }
    for (auto &it:b){
        cin >> it;
        cnt2[it]++;
        MAX = max(MAX,it);
        MIN = min(MIN,it);
    }
    for (int i = MIN; i <= MAX; i ++){
        if (cnt1[i] > 0 && cnt2[i] > 0)
            cout << i << ' ';
    }
    cout << '\n';
    for (int i = MIN; i <= MAX; i ++){
        if (cnt1[i] > 0 || cnt2[i] > 0)
            cout << i << ' ';
    }
    return 0;
}