#include<iostream>
#include<stack>
using namespace std;

int main() {

    stack<string> s;

    // LOFI - last in first out

    s.push("monish");
    s.push("aayush");
    s.push("yash");    // phele monish gaya , then aayush, then yash

    cout<<"Element in top :"<< s.top() << endl;

    s.pop();

    cout<<"Element in top after pop() :"<< s.top() << endl;

    // use remaining s dot ....


    
}