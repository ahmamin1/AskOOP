//
// Created by Ahmed Amin on 03/11/2023.
//

#include "Question.h"


int Question::getCount() {
    return count;
}

int Question::getId() const {
    return id;
}

const string &Question::getContent() const {
    return content;
}

User *Question::getSender() const {
    return sender;
}

User *Question::getReceiver() const {
    return receiver;
}

void Question::setCount(int count) {
    Question::count = count;
}

void Question::setId(int id) {
    Question::count++;
    id = Question::count;
}

void Question::setContent(const string &content) {
    this->content = content;
}

void Question::setSender(User *sender) {
    this->sender = sender;
}

void Question::setReceiver(User *receiver) {
    this->receiver = receiver;
}
