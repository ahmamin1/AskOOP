//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_USER_H
#define ASKOOP_USER_H
#include <string>
#include <vector>
#include "Question.h"
using namespace std;
class User {
private:
    int id;
    string name;
    string userName;
    string password;
    string email;
    bool allowAnonymousQuestions;
    static int count;
    void setID();
public:
    //setters
    void setName(const string &name);
    void setUserName(const string &userName);
    void setPassword(const string &password);
    void setEmail(const string &email);
    void setAllowAnonymousQuestions(bool allowAnonymousQuestions);
    //getters
    int getId() const;
    const string &getName() const;
    const string &getUserName() const;
    const string &getEmail() const;
    bool isAllowAnonymousQuestions() const;
    static int getCount();
};

int User::count = 0;




#endif //ASKOOP_USER_H
