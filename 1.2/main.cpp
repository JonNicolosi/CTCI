#include <iostream>
#include <string>
using namespace std;

bool isPermutation(string word1, string word2){

    int arr1[26];
    int arr2[26];

    for (int a = 0; a < 26; a++)
        arr1[a] = 0;

    for (int b = 0; b < 26; b++)
        arr2[b] = 0;

    for(int i = 0; i < word1.length(); i++){

        if(isupper(word1[i])==false){

            arr1[word1[i]-97]++;
        }
        else{
            arr1[word1[i]-65]++;
        }
    }

    for(int k = 0; k < word2.length(); k++){

        if(isupper(word2[k])==false){

            arr2[word2[k]-97]++;
        }
        else{
            arr2[word2[k]-65]++;
        }
    }

    for(int c = 0; c < 26; c++){
        if(arr1[c]!=arr2[c]){
            return false;
        }
    }

    return true;

}

int main()
{
    string word1;
    string word2;

    cout << "Enter 2 words and the program will determine if the 2 words are permutations of each other: " << endl;
    cout << "Word 1: " << endl;
    cin >> word1;
    cout << endl;
    cout << "Word 2: " << endl;
    cin >> word2;
    cout << endl;

    if(isPermutation(word1, word2) == true){
        cout << "The two words are permutations of each other. " << endl;
    }
    else{
        cout << "The two words are NOT permutations of each other. " << endl;
    }

}
