#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> S;
    int K;
    cin >> K;

    while(K--){
        int n;
        cin >> n;
        
        if(n == 0) S.pop();
        else S.push(n);
    }

    //스택에서는 맨 마지막 값 말고 접근이 안되므로 이방식을 써야함
    int sum= 0;
    while(!S.empty()){
        sum += S.top();
        S.pop();
    }

    cout << sum;
}