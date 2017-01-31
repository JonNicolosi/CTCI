#include <iostream>
#include <string>
#include <vector>
using namespace std;

void compress(string & input){

    vector<char> vec;
    int counter = 1;
    for(int i = 0; i < input.length(); i++){

        if(input[i]==input[i+1]){
            counter++;
        }
        else{
            vec.push_back(input[i]);
            vec.push_back(counter+48);
            counter = 1;
        }

    }

    for(int i = 0; i < vec.size(); i++){

        cout << vec[i];
    }

}


int main()
{

    string input = "aabcccccaaa";

    compress(input);



    return 0;

}
