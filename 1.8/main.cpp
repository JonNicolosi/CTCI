#include <iostream>

using namespace std;


int main()
{

    int array[4][5] = {{1,2,3,4,5},{0,7,8,9,10},{11,12,13,14,15},{16,17,0,19,20}};

    int rowlength = sizeof(array)/sizeof(array[0]);
    int columnlength = sizeof(array[0])/sizeof(array[0][0]);

    int counter = 0;


    for(int m = 0; m < rowlength; m++){
        for(int n = 0; n < columnlength; n++){

            if(array[m][n]==0){
                counter++;
            }
            if(counter == 1){
                for(int p = 0; p < columnlength; p++){
                    array[m][p] = 0;
                }
            }

        }
        counter = 0;
    }


    for(int m = 0; m < rowlength; m++){
        for(int n = 0; n < columnlength; n++){

            cout << array[m][n] << " ";
        }

        cout << endl;
    }



    return 0;
}
