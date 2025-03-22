#include<iostream>
using namespace std;

void update(int **p2){

// kuch change hoga ??  --> NO
    // p2 = p2 + 1;

// kuch change hoga ??  --> YES   [chg --> ptr]
    //  *p2 = *p2 + 1;

// kuch change hoga ??  --> YES  [chg --> i]
     **p2 = **p2 + 1;
}

int main() {

    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    cout <<"Before --->"<< i << endl;
    cout <<"Before --->"<< ptr << endl;
    cout <<"Before --->"<< ptr2 << endl;
    update(ptr2);
    cout <<"after --->"<< i << endl;
    cout <<"after --->"<< ptr << endl;
    cout <<"after --->"<< ptr2 << endl;

    return 0;


}