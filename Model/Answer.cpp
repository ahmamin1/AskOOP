//
// Created by Ahmed Amin on 03/11/2023.
//

#include "Answer.h"

void Answer::setContent(const string &content) {
    this->content = content;
}

void Answer::setQuestion(Question *question) {
    this->question = question;
}

Question *Answer::getQuestion() const {
    return question;
}

const string &Answer::getContent() const {
    return content;
}

int Answer::getId() const {
    return id;
}

int Answer::getCount() {
    return count;
}

void Answer::setID() {
    Answer::count++;
    id = Answer::count;
}
