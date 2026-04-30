#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
 
int getBeautifulPairsCount(multiset<int> &a, multiset<int> &b) {
    int count=0;
    for(auto &it : a) {
        multiset<int>::iterator bitr = b.find(it);
        if(bitr != b.end()) {
            count++;
            b.erase(bitr);
        }
    }
    if(b.size() == 0) count--;
    else count++;
    return count;
}
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, temp;
    cin >> n;
    multiset<int> a, b;
    for(int i=0; i < n; i++) {
        cin >> temp;
        a.insert(temp);
    }
    for(int i=0; i < n; i++) {
        cin >> temp;
        b.insert(temp);
    }
    cout << getBeautifulPairsCount(a, b);
    return 0;
}
