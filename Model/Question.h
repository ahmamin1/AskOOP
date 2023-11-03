//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_QUESTION_H
#define ASKOOP_QUESTION_H
#include <string>
#include "User.h"
using namespace std;

class Question {
    static int count;
    int id;
    string content;
    User* sender;
    User* receiver;
public:
    static void setCount(int count);

    void setId(int id);

    void setContent(const string &content);

    void setSender(User *sender);

    void setReceiver(User *receiver);

public:
    static int getCount();

    int getId() const;

    const string &getContent() const;

    User *getSender() const;

    User *getReceiver() const;

};

int Question::count = 0;


#endif //ASKOOP_QUESTION_H
