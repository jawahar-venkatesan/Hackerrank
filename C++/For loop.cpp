#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string count[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<count[i]<<endl;
        }else{
            cout<<((i%2==0)?"even":"odd")<<endl;
        }

    }
    return 0;
}