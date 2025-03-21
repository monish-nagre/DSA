#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v;

    cout<<"Capacity --> "<< v.capacity() << endl;

    v.push_back(1);

    cout<<"Capacity 1 --> "<< v.capacity() << endl;
    cout<<"Size :"<< v.size() << endl;

    v.push_back(2);
    cout<<"Capacity 2 --> "<< v.capacity() << endl;
    cout<<"Size :"<< v.size() << endl;

    v.push_back(4);
    cout<<"Capacity 3 --> "<< v.capacity() << endl;
    cout<<"Size :"<< v.size() << endl;
    
    cout<<"element index :"<< v.at(1)<<endl;

    for(int i=0; i<v.size(); i++) {
        cout<< v[i] << endl;
    }

    for(int i: v) {
        cout<<"elments :"<< i << endl;    // another way of written a for loop 
    }

    // copy vector
    vector<int> copy(v);
    for(int i: copy) {
        cout<<"elments in new vec :"<< i << endl;    // another way of written a for loop 
    }

    // initialize the vector with value
    vector<int> b(5,1);
    for(int i: b) {
        cout<<"elments initialize :"<< i << endl; 
    }

    v.pop_back();
    for(int i: v) {
        cout<<"elments after pop :"<< i << endl;    // another way of written a for loop 
    }
    
    v.clear();
    cout<<"Capacity after clear  --> "<< v.capacity() << endl;
    cout<<"Size after clear :"<< v.size() << endl;






}


// capacity --> vector ka allote size batata hai.
// size --> vector me element kitna hai batata hai
// same as array , we use v.front() & v.back()

// deque & list are the same to access and all....