/*
Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố trong dãy và in ra theo thứ tự xuất hiện trong dãy

Input Format

Gồm nhiều dòng chưa các số nguyên trong dãy

Constraints

Dãy không quá 10000 số nguyên không âm. Các số trong dãy là số nguyên không âm không quá 10^9

Output Format

In ra các số nguyên tố trong dãy kèm theo tần suất của nó.

Sample Input 0

2 3 5 3 2 5 1
Sample Output 0

2 2
3 2
5 2
*/

#include "bits/stdc++.h"
#include <map>
#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool checkPrime(int n){
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return n > 1;
}

//=============================================
int main ()
{
    FAST_IO;
    int x;
    map<int, int> mp;
    vector <int> v;
    while (cin >> x)
    {
        if(checkPrime(x))
        {
            mp[x] ++;
            v.push_back(x);
        }
    }
    for (auto it: v)
    {
        if (mp[it] != 0)
        {
            cout << it << ' ' << mp[it] << '\n';
            mp[it] = 0;
        }

    }
    return 0;
}