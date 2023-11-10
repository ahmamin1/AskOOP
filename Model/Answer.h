//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_ANSWER_H
#define ASKOOP_ANSWER_H

#include "Question.h"
class Answer
{
private:
    int id;
    string content;
    Question *question;
    static int count;

public:
    Answer() : content(""),question(nullptr)
    {
        id = ++count;
    }
    Answer(string content, Question &question)
    {
        id = ++count;
        setContent(content);
        setQuestion(question);
    }

    void setContent(string content);
    void setQuestion(Question &question);
    void disply();

    Question* getQuestion();

};

int Answer::count = 0;

#endif // ASKOOP_ANSWER_H
#pragma once