#include <iostream>
using namespace std;

int main()
{

    int arr[4][4] = {
       {0, 1, 2, 3},
       {4, 5, 6, 7},
       {8, 9, 10, 11},
       {12, 13, 14, 15}
    };

    int temp = 0;
    int length = 3;

    //Outside

    for(int m = 0; m < length; m++){
            temp = arr[0][m];
            arr[0][m] = arr[m][length];
            arr[m][length] = temp;

            temp = arr[0][m];
            arr[0][m] = arr[length][length-m];
            arr[length][length-m] = temp;

            temp = arr[0][m];
            arr[0][m] = arr[length-m][0];
            arr[length-m][0] = temp;
    }

    //Inside

    temp = arr[1][1];
    arr[1][1] = arr[1][2];
    arr[1][2] = temp;

    temp = arr[1][1];
    arr[1][1] = arr[2][2];
    arr[2][2] = temp;

    temp = arr[1][1];
    arr[1][1] = arr[2][1];
    arr[2][1] = temp;

    //Print

    for(int i = 0; i < 4; i ++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j];
            if(arr[i][j] > 9){
                cout << " ";
            }else
            cout << "  ";
        }
        cout << endl;
    }


}
