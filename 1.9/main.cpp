#include <iostream>
#include <string>
using namespace std;


bool isSubstring(string & word1, string & word2){

    char temp;

    for(int j = 0; j < word1.length()-1; j++){
        for(int i = 0; i < word1.length()-1; i++){

            temp = word1[i];
            word1[i] = word1[i+1];
            word1[i+1] = temp;

            //cout << word1 << endl << word2 << endl << endl;

            if(word1.compare(word2)==0){

                return true;

            }
        }
    }


return false;

}

int main()
{

    string word1 = "waterbottle";
    string word2 = "erbottlewat";

    cout << isSubstring(word1, word2) << endl;


    return 0;
}
