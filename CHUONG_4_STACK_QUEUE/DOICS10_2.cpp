#include<iostream>
using namespace std;

class Stack {
    int a[100], t = -1;
public:
    bool empty(){ return t == -1; }
    void push(int x){ a[++t] = x; }
    int top(){ return a[t]; }
    void pop(){ t--; }
};

int main(){
    Stack st;
    int x; cin >> x;
    if(x == 0){ cout << 0; return 0; }
    while(x){ st.push(x % 2); x /= 2; }
    while(!st.empty()){ cout << st.top(); st.pop(); }
    return 0;
}