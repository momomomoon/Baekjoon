#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        //cout << i;
        if(str[i] < 97)
        {
            str[i] = str[i] + 32;
            
        }
        else
            str[i] = str[i] -32;
    }
    cout << str;
    return 0;
}