#include<iostream>
using namespace std;

//function
int power() {

    int a,b;
    
    cout<< "Enter the no. a:" << endl;
    cin>> a;

    cout<< "Enter the no. b:" << endl;
    cin>> b;

    int ans = 1;

    for(int i=1; i<= b; i++) {
        ans = ans * a;
    }
    return ans;
}


int main() {

    int answer = power();
    cout<< "The Power :" << answer << endl;

    int answer2 = power();
    cout<< "The Power :" << answer2 << endl;

    int answer3 = power();
    cout<< "The Power :" << answer3 << endl;

}

// We can take input in function OR in main function --> r choice 