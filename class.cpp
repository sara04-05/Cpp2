#include <iostream>
using namespace std;

class human{
    string name;
    int age;
    string job;
    int birthday;

    human(string n, int a, string j, int b){
        string n = name;
        int a = age;
        string j = job;
        int b = birthday;
    };

    human(){
        string name = "Oli";
        int age= 19;
        string job = "Programmer";
        int birthday = 23/10/2006;
    };
};

int main(){

    human h1;

    cout<< h1;

    return 0;
}