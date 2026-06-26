#include <iostream>
#include <string>
using namespace std;

struct QuizQuestion{
    string question;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char correctOption;
};
int askQuestion(QuizQuestion q) {
    char answer;
    cout<<"\n"<<q.question<<endl;
    cout<<"A. "<<q.optionA<<endl;
    cout<<"B. "<<q.optionB<<endl;
    cout<<"C. "<<q.optionC<<endl;
    cout<<"D. "<<q.optionD<<endl;
    cout<<"Enter your choice (A/B/C/D): ";
    cin>>answer;
    if(answer>='a'&&answer<='z')
        answer=answer-32;
    if (answer==q.correctOption) {
        cout<<"Correct Answer!"<<endl;
        return 1;
    } else{
        cout<<"Wrong Answer! Correct option is "<<q.correctOption<<endl;
        return 0;
    }
}
int main() {
    const int MAX_QUESTIONS = 5;
    QuizQuestion quiz[MAX_QUESTIONS] = {
        {
            "Which planet is known as the Red Planet?",
            "Earth",
            "Mars",
            "Venus",
            "Jupiter",
            'B'
        },
        {
            "Which language is used to develop Android apps?",
            "Java",
            "HTML",
            "Python",
            "SQL",
            'A'
        },
        {
            "How many days are there in a leap year?",
            "365",
            "364",
            "366",
            "367",
            'C'
        },
        {
            "Which symbol is used for single-line comments in C++?",
            "/* */",
            "//",
            "#",
            "<!-- -->",
            'B'
        },
        {
            "Who is known as the Father of Computers?",
            "Bill Gates",
            "Charles Babbage",
            "Steve Jobs",
            "Alan Turing",
            'B'
        }
    };
    int score = 0;
    cout<<"  Welcome to the Quiz  "<<endl;
    cout<<"Total Questions: "<<MAX_QUESTIONS<<endl;
    for (int i=0;i<MAX_QUESTIONS;i++) {
        cout<<"\nQuestion " << i + 1 << ":" << endl;
        score+=askQuestion(quiz[i]);
    }
    double percentage=(score*100.0)/MAX_QUESTIONS;
    cout<<"  Result "<<endl;
    cout<<"Score: " <<score<<" / "<<MAX_QUESTIONS<<endl;
    cout<<"Percentage: "<<percentage<<"%"<<endl;

    if(percentage==100)
        cout<<"Excellent! Perfect Score."<<endl;
    else if(percentage>=60)
        cout<<"Good Job!You Passed."<<endl;
    else
        cout<<"Keep Practicing!"<<endl;
    return 0;
}