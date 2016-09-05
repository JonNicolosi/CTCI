#include <iostream>
#include <string>

using namespace std;

void URLify(string & input, int length){

    for(int index = 0; index < length; index++){
        if(input[index]==' '){
            input[index] = '%';
            input.insert(index+1, "2");
            input.insert(index+2, "0");
        }
    }

}

int main()
{
    string input = "Mr John Smith      ";
    int length = 13;

    URLify(input, length);

    cout << input;

    return 0;
}
