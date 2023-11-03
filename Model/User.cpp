//
// Created by Ahmed Amin on 03/11/2023.
//

#include "User.h"


void User::setID() {
    User::count++;
    id = User::count;
}

void User::setName(const string &name) {
    this->name = name;
}

void User::setUserName(const string &userName) {
    this->userName = userName;
}

void User::setPassword(const string &password) {
    this->password = password;
}

void User::setEmail(const string &email) {
    this->email = email;
}

void User::setAllowAnonymousQuestions(bool allowAnonymousQuestions) {
    this->allowAnonymousQuestions = allowAnonymousQuestions;
}

int User::getId() const {
    return id;
}

const string &User::getName() const {
    return name;
}

const string &User::getUserName() const {
    return userName;
}

const string &User::getEmail() const {
    return email;
}

bool User::isAllowAnonymousQuestions() const {
    return allowAnonymousQuestions;
}

int User::getCount() {
    return count;
}
