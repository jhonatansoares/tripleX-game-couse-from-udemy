#include <iostream>
#include <ctime>
using namespace std; 
int levelDificulty = 1;

void printIntroduction(int dificulty){
    cout << "You are a super secret agent breaking into a level " << dificulty;
    cout << "server room";
    cout << endl;
    cout << "Enter de correct code to continue...";
    cout << endl;
}

bool PlayGame(int dificulty){
    
    printIntroduction(dificulty);
    srand(time(NULL));
    int codeA = rand() % dificulty + dificulty;
    int codeB = rand() % dificulty + dificulty;
    int codeC = rand() % dificulty + dificulty;

    //cout << codeA << codeB << codeC;


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
        cout << "Wel done agent! you have extracted a file! keep going!" << endl;
        return true;
    }else{
        cout << "You entered the wrong code! Careful agent try again" << endl;
        return false;
    }
}


int main(){   
    
    while(levelDificulty <= 10){
        bool levelComplete = PlayGame(levelDificulty);
        cin.clear();
        cin.ignore(); 
        if(levelComplete){
            levelDificulty++;
        }
    }

    cout << "Great agent! you have got all of the files! now get out of there!" << endl;    
    cout << "Thanks for playing this game" << endl;    
    return 0;
}
