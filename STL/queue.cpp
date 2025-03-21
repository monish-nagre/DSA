#include<iostream>
#include<queue>
using namespace std;

int main() {

    queue<string> q;

    // FIFO - first in first out

    q.push("monish");
    q.push("aayush");
    q.push("rathod");

    cout <<"size before pop :" << q.size() << endl;

    cout << "Element in front :" << q.front() << endl;

    q.pop();

    cout << "Element in front :" << q.front() << endl;

    cout <<"size after pop :" << q.size() << endl;

     // use remaining q dot ....




}