#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int n;
    cin >> n;

    while(n>0){
        cin >> input;
        if(input.length()>10){
            cout<<input[0]<<input.length()-2<<input[input.length()-1];
        }
        else{
            cout<<input;
        }
        cout<<endl;
        n--;
    }
    return 0;
}