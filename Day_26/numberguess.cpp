#include <iostream>
using namespace std;
int main(){
    int secret=50;   // Fixed secret number
    int guess;
    int attempts=0;
    cout<<"        Number Guessing Game        " << endl;
    cout<<"Guess the number between 1 and 100." << endl;
    while(true){
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;
        if(guess>secret){
            cout<<"Too High!"<<endl;
        }
        else if(guess<secret){
            cout<<"Low!"<<endl;
        }
        else{
            cout<<"Congratulations! You guessed the number."<<endl;
            cout<<"Attempts = "<<attempts<<endl;
            break;
        }
    }
    return 0;
}