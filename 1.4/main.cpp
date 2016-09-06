#include <iostream>
#include <string>
using namespace std;


bool isPermOfPal(string input){

    int appearances[26];
    int odd = 0;

    for(int i = 0; i < 26; i++)
        appearances[i] = 0;

    for(int index = 0; index < input.length(); index++){

        if(isupper(input[index])==false){
            appearances[input[index]-97]++;
        }
        else{
            appearances[input[index]-65]++;
        }

    }

    for(int a = 0; a < 26; a++){
        if(appearances[a] % 2 == 1 ){
            odd++;
            if(odd == 2){
                return false;
            }
        }
    }
    return true;
}


int main()
{

    string input = "tact coa";
    string input2 = "aabbccddccbbaa";
    //all characters must be represented an equal number of times where # >= 2. There can be a single character which is represented any number of times.

    if(isPermOfPal(input2) == true){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}
