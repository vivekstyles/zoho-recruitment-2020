#include <iostream>
using namespace std;

int main() {
    // insert code here...
    char input [] = "vivek";
    //cin >> input; // Get user input from the keyboard
    // cout << "Your number is: " << input; // Display the input value
    int a = sizeof(input)-1;
    int b = (a/2);
    for(int i = b; i < a;i++){
        cout << input[i];
    }
    return 0;
}

