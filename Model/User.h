//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef USER_H
#define USER_H

#include <bits/stdc++.h>
#include "Model.h"
#include <string>
class Question;
class Answer;
class Thread;
using namespace std;
class User : public Model
{
private:
    int id;
    string name;
    string userName;
    string password;
    string email;
    bool allowAnonymousQuestions;

    static int counter;

public:
       User(){
            counter++;
            id = counter;
            setName("");
            setUserName("");
            setPassword("");
            setEmail("");
            setAllowAnonymousQuestions(false);
        }
    User(string rec)
    {
        counter++;
        id = counter;

        stringstream record(rec);
        string __name;
        string __userName;
        string __password;
        string __email;
        bool __allowAnonymousQuestions;
        record >> __name >> __userName >> __password >> __email >> __allowAnonymousQuestions;
        setName(__name);
        setUserName(__userName);
        setPassword(__password);
        setEmail(__email);
        setAllowAnonymousQuestions(__allowAnonymousQuestions);
    }
    User(string name, string userName, string password, string email, bool allowAnonymousQuestions)
    {
        counter++;
        id = counter;
        setName(name);
        setUserName(userName);
        setPassword(password);
        setEmail(email);
        setAllowAnonymousQuestions(allowAnonymousQuestions);
    }
    void setName(string name);
    void setUserName(string userName);
    void setPassword(string password);
    void setEmail(string email);
    void setAllowAnonymousQuestions(bool allowAnonymousQuestions);

    int getID();
    string getUserName();
    string getPassword();
    string getName();

    Question askQuestion(string content, User &receiver);

    Answer answerQuestion(string content, Question &question);
    Thread makeThread(string content, Answer &answer);
};
int User::counter = 0;

#endif
#pragma once