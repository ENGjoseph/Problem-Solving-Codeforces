#include  <iostream> 
using namespace std;
int main() {
    char c;
    cin  >>  c;
    int asciiValue = (int)c;
    if (asciiValue >= 48 && asciiValue < 58)
    {
        cout << "IS DIGIT";
    }
    else if (asciiValue >= 65 && asciiValue < 91)
    {
        cout << "ALPHA" << endl << "IS CAPITAL";
    }
    else if (asciiValue >= 97 && asciiValue < 123)
    {
        cout << "ALPHA" << endl << "IS SMALL";
    }
    
    return 0;
}