#include<iostream>
#include <climits> 
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for(int r =0; r<row; r++){
        for(int c=0; c<col; c++){
            if(arr[r][c] == target){
                return 1;
            }
        }
    }
    return 0;
}

void sumOfRow(int arr[][4], int row, int col){
    for(int r=0; r<row; r++){
        int sum =0;
         for(int c=0; c<col; c++){
            sum += arr[r][c];                        // same for column
         }
         cout << sum << endl;
    }
}

int largestRowIndex(int arr[][4], int row, int col){

    int maxi = INT_MIN;
    int rowIndex  = -1;

    for(int i=0; i<row; i++){
        int sum=0;
         for(int j=0; j<col; j++){
            sum += arr[i][j];
         }

         if(sum > maxi){
           maxi = sum;
           rowIndex = i;
         }
    }
    cout<< "Largest Sum no:"<< maxi << endl;
    return rowIndex;
}

int main() {

    int arr[3][4];

    // row wise input

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>> arr[row][col];
        }
    }

    // col wise input

    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>> arr[row][col];
    //     }
    // }


    // output

    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cout << arr[row][col] << " ";
        }
        cout<< endl;
    }

    // search in 2D Array

    // cout<< "Enter the element: " << endl;
    // int target;
    // cin>> target;

    // if(isPresent(arr, target, 3, 4)){
    //    cout<< "Element found"<< endl;
    // } else {
    //     cout<<"Not Found" << endl;
    // }

     sumOfRow(arr, 3,4);

     int LargeRowIndex = largestRowIndex(arr, 3,4);
     cout << "Largest Row Index: "<< LargeRowIndex << endl;

    return 0;
}

// i/p : 1 2 3 4 5 6 7 8 9 10 11 12  

// 13,BLDNO.2,ANANT NIWAS,GOGRASSWADI,DOMBIVALI-E
// 1,ROHIDAS MHATRE BLD,NR.TEEN MANDIR,GOGRASSWADI