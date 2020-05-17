#include <iostream>
#include <ctime>
using namespace std; 

int main(){
    cout << "You are a super secret agent breaking into a server room";
    cout << endl;
    cout << "Enter de correct code to continue...";
    cout << endl;

    int codeA = 1;
    int codeB = 2;
    int codeC = 3;

    int sum = codeA + codeB + codeC;
    int product = codeA * codeB * codeC;

    cout << endl;
    cout << "There are tre numbers in the code." << endl;
    cout << "The code add-up to :" << sum << endl;
    cout << "The codes multiply to give: " << product << endl;

    int guessA , guessB , guessC;
    cin >> guessA;
    cin >> guessB;
    cin >> guessC;

    cout << "You entered : " << guessA << guessB << guessC << endl;

    int guessSum = guessA + guessB + guessC;
    int guessProduct = guessA * guessB * guessC;

    if(guessSum == sum && guessProduct == product){
        cout << "You win!" << endl;
    }else{
        cout << "You loose!" << endl;
    }

    return 0;
}
