#include <iostream>
#include <string>
#include <cmath>
using namespace std;


bool oneAway(string input1, string input2){

    int instances1[26];
    int instances2[26];

    for(int a = 0; a < 26; a++){
        instances1[a] = 0;
        instances2[a] = 0;
    }

    for(int index = 0; index < input1.length(); index++){

        if(isupper(input1[index])==true){
            instances1[input1[index]-65]++;
        }
        else{
            instances1[input1[index]-97]++;
        }

    }

    for(int c = 0; c < input2.length(); c++){

        if(isupper(input2[c])==true){
            instances2[input2[c]-65]++;
        }
        else{
            instances2[input2[c]-97]++;
        }

    }

    int differences = 0;

    for(int b = 0; b < 26; b++){
            cout << "instances1[" << b << "]: " << instances1[b] << "        ";
            cout << "instances2[" << b << "]: " << instances2[b] << endl;
        if(abs((instances1[b]-instances2[b]))>0){
            differences++;
                if(differences>1){
                    return false;
                }
        }
    }
    return true;


}

int main()
{
    //TESTS
    //true
    string one = "pale";
    string two = "ple";
    //true
    string three = "pales";
    string four = "pale";
    //true
    string five = "pale";
    string six = "bale";
    //false
    string seven = "pale";
    string eight = "eight";


    if(oneAway(one, two) == true){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}
