//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_QUESTION_H
#define ASKOOP_QUESTION_H
#include "User.h"
#include <string>

using namespace std;

class Question : Model
{
    static int count;
    int id;
    string content;
    User *sender;
    User *receiver;
    bool isAnonymousQuestions;

public:
    Question() : content(""), sender(nullptr), receiver(nullptr) ,  isAnonymousQuestions(false)
    {
        count++;
        id = count;
    }
    Question(string content, User &sender, User &receiver)
    {
        count++;
        id = count;
        setContent(content);
        setSender(sender);
        setReceiver(receiver);
    }

    void setContent(string content);
    void setSender(User &sender);
    void setReceiver(User &receiver);
    void disply();
    User *getSender();
    User *getReceiver();

    friend ostream &operator<<(ostream &out, const Question &c);
};

int Question::count = 0;

#endif // ASKOOP_QUESTION_H
#pragma once