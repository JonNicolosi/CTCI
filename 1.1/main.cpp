#include <iostream>
#include <string>
using namespace std;


bool isUnique(string input){

    int arr[26];

    for (int k = 0; k < 26; k++)
        arr[k] = 0;

    for(int i = 0; i < input.length(); i++){

        if(arr[input[i]-65]!=0){
            return false;
        }
        arr[input[i]-65] = 1;
    }

    return true;
}


int main()
{

    string input;

    cout << "Enter a string: " << endl << endl;

    cin >> input;

    if(isUnique(input)==0){
        cout << "String contains duplicate characters. " << endl << endl;
    }
    else{
        cout << "All characters in the string appear exactly once. " << endl << endl;
    }

    return 0;
}
