#include<iostream>
using namespace std;

int squareRoot(int n){

    int s =0;
    int e = n;

    int mid = s + (e-s)/2;

    int ans = -1;

    while(s<=e) {

        int square = mid * mid;

        if(square == n) {
            return mid;
        }

        if(square < n) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
    
}

double mostPrecision(int n, int precision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i< precision; i++) {
        factor = factor/10;
        // 1/10 = 0.1 
        // 0.1/10 = 0.01....0.001

        for(double j=ans; j*j <n; j =j+factor){
            ans = j;
        }
    }
    return ans;

}

int main() {

    int n;
    cout<<"Enter the no: "<< endl;    // take n = 37 for more precision 
    cin>> n;

   int tempSol = squareRoot(n);
    cout << "Square root : " << tempSol << endl;

    cout << "more precision: "<< mostPrecision(n, 3, tempSol)<< endl;


}