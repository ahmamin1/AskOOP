#include "Answer.h"
#include <iostream>
using namespace std;
void Answer::setContent(string content)
{
    this->content = content;
}

void Answer::setQuestion(Question &question)
{
    this->question = &question;
}

void Answer::disply()
{
    cout << "ans id: " << id << endl
         << "content: " << content << endl
         << "question: "; question->disply();

    cout << endl;
}

Question *Answer::getQuestion()
{
    return question;
}
