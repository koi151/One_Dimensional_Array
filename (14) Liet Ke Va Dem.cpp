/*
Cho một dãy các số nguyên dương không quá 9 chữ số, mỗi số cách nhau vài khoảng trống, có thể xuống dòng. Hãy tìm các số không giảm (các chữ số theo thứ tự từ trái qua phải tạo thành dãy không giảm) và đếm số lần xuất hiện của các số đó.

Input Format

Gồm 1 dãy các số nguyên dương không quá 9 chữ số

Constraints

Dãy không quá 100000 số. Các số đều nguyên dương và không quá 9 chữ số.

Output Format

Ghi ra các số không giảm kèm theo số lần xuất hiện. Các số được liệt kê theo thứ tự sắp xếp số lần xuất hiện giảm dần. Trong trường hợp có nhiều số có cùng số lần xuất hiện thì thì số nhỏ hơn sẽ xếp trước.

Sample Input 0

888 289 123
321 54 888
Sample Output 0

888 2
123 1
289 1
*/

#include "bits/stdc++.h"

#define FAST_IO ios::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool check (int n)
{
    int tmp1= n % 10, tmp2 = 0;
    n /= 10;
    while(n)
    {
        tmp2 = n % 10;
        if (tmp2 > tmp1) return false;
        n /= 10;
        tmp1 = tmp2;
    }
    return true;
}

bool cmp (pair<int,int> a, pair<int,int> b)
{
    if (a.second != b.second)
        return a.second > b.second; 
    return a.first < b.first;
}

//=========================================
int main ()
{
    FAST_IO;
    map <int,int> mp;
    vector <pair <int, int>> v;
    int x;
    while (cin >> x)
    {
        if (check(x)) mp[x] ++;
    }
    for (auto &it : mp) v.push_back({it.first, it.second});
    sort(v.begin(), v.end(), cmp);
    for (pair<int,int> it : v)
        cout << it.first << ' ' << it.second << '\n';
    return 0;
}