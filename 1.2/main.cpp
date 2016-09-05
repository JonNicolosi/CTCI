#include <iostream>
#include <string>
using namespace std;

bool isPermutation(string word1, string word2){

    int arr[26];

    for (int k = 0; k < 26; k++)
        arr[k] = 0;

    for(int i = 0; i < word1.length(); i++){

        if(isupper(word1[i])==false){

            arr[word1[i]-97]++;
        }
        else{
            arr[word1[i]-65]++;
        }
    }

    for(int k = 0; k < word2.length(); k++){

        if(isupper(word2[k])==false){

            arr[word2[k]-97]++;
        }
        else{
            arr[word2[k]-65]++;
        }
    }




}


int main()
{
    string word1 = "hello";
    string word2 = "olleh";
}
