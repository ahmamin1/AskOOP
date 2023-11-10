//
// Created by Ahmed Amin on 03/11/2023.
//

#include "Question.h"
#include "Answer.h"
#include "thread.h"
#include "User.h"

void User::setName(string name)
{
    this->name =name ;    
}
void User::setUserName(string userName)
{
    this->userName =userName ;
}
void User::setPassword(string password)
{
    this->password =password ;
}
void User::setEmail(string email)
{
    this-> email= email;
}
void User::setAllowAnonymousQuestions(bool allowAnonymousQuestions)
{
    this->allowAnonymousQuestions= allowAnonymousQuestions;
}

string User::getName()
{
    return name;
}
Question User::askQuestion(string content, User &receiver)
{
    Question q(content, *this, receiver);
    return q;
}


Answer User::answerQuestion(string content, Question &question)
{
    Answer a(content,question);
    return a;
}

Thread User::makeThread(string content,Answer &answer){
    Thread t(content,answer);
    return t;
}