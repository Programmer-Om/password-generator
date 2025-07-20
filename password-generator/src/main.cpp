#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;
int main() {
    srand(time(0));

    const string pass_generating_keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_+-=<>@!#$*&^%?~{}[]:;.',\"";
    
    int pass_long;

    cout <<"How much long the password you want to generate ?"<<endl;
    cin >>pass_long;

    string pass = "";

    // Main generating function

    for (size_t i = 0; i < pass_long; i++)
    {
        int randomVar = rand() % pass_generating_keys.length();
        pass += pass_generating_keys[randomVar];
    }
    

    cout<<"Your generated password is : " + pass << endl;

    return 0;
}