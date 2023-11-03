//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_ANSWER_H
#define ASKOOP_ANSWER_H

#include "Question.h"
class Answer {
private:
    int id;
    Question* question;
    string content;
    static int count;
    void setID();

public:
    //setter
    int getId() const;
    void setQuestion(Question *question);
    void setContent(const string &content);
    //getter
    Question *getQuestion() const;
    const string &getContent() const;
    static int getCount();


};

int Answer::count = 0;


#endif //ASKOOP_ANSWER_H
