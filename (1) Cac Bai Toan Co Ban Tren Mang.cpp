/*
Cho mảng số nguyên gồm N phần tử. Thực hiện in ra các yêu cầu sau đây.

Input Format

Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints

2≤n≤10^6; -10^9≤ai≤10^9

Output Format

_ Dòng đầu tiên ghi số lớn nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), 
  nếu có nhiều số cùng có giá trị lớn nhất thì lấy vị trí xuất hiện đầu tiên. 
_ Dòng thứ 2 ghi số nhỏ nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), 
  nếu có nhiều số cùng có giá trị nhỏ nhất thì lấy vị trí xuất hiện cuối cùng. 
_ Dòng thứ 3 ghi ra số lượng số nguyên tố xuất hiện trong dãy. 
_ Dòng thứ 4 ghi ra tích lớn nhất của 2 số trong mảng (2 số khi nhân với nhau tạo ra tích lớn nhất). 
_ Dòng thứ 5 in ra YES nếu mảng đối xứng, ngược lại in ra NO. 
_ Dòng thứ 6 tính tích các số trong mảng, kết quả lấy dư với (10^9+7)

Sample Input 0

6
-10 -10 2 3 4 5
Sample Output 0

5 5
-10 1
3
100
NO
12000
*/

#include "bits/stdc++.h"
#include <vector>

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

const int MOD = 1e9 + 7;

bool checkPrime(int n)
{
    for ( int i = 2; i*i <= n; i ++)
        if (n % i == 0) return false;
    return n > 1;
}


//========================================
int main ()
{
    FAST_IO;
    int n;
    cin >> n; 
    int a[n];
    for (auto &x:a) cin >> x;
    int max = a[0], min = a[0], pmax = 0, pmin = 0, cnt = 0;
    long long pdmax=1,pd=1;
    bool sym = true;

    for (int i = 0; i < n; i ++){
        if (a[i] > max){
            max = a[i];
            pmax = i;
        } 
        if (a[i] <= min){
            min = a[i];
            pmin = i;
        }
        if(checkPrime(a[i])) ++cnt;
        if (i <= n/2){
            if (a[i] != a[n-i]) sym = false;
        }
    pd *= a[i];
    pd %= MOD;
        a[i] = abs(a[i]);
    }
    sort(a,a+n);
    pdmax = a[n-1]*a[n-2];
    cout << max << ' ' << pmax << '\n';
    cout << min << ' ' << pmin << '\n';
    cout << cnt << '\n';
    cout << pdmax << '\n';
    cout << (sym?"YES\n":"NO\n");
    cout << pd;
    return 0;
}