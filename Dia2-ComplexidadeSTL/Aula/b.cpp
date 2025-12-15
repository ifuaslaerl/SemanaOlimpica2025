#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr.insert(val);
    }
    cout << arr.size() << '\n';
    
 
    return 0;
}