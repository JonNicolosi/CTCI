#include <iostream>
#include <string>
using namespace std;


bool oneAway(string input1, string input2){

    int instances1[26];
    int instances2[26];

    for(int a = 0; a < 26; a++){
        instances1[a] = 0;
        instances2[a] = 0;
    }

    for(int index = 0; index < 26; index++){

        if(isupper(input1[index])==true){
            instances1[input1[index]-65]++;
        }
        else{
            instances1[input1[index]-97]++;
        }
        if(isupper(input2[index])==true){
            instances2[input2[index]-65]++;
        }
        else{
            instances2[input2[index]-97]++;
        }

    }


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






    return 0;
}
