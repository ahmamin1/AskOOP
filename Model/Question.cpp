//
// Created by Ahmed Amin on 03/11/2023.
//

#include "Question.h"
#include "iostream"
using namespace std;


void Question::setContent(string content) {
    this->content = content;
}

void Question::setSender(User &sender) {
    this->sender = &sender;
}

void Question::setReceiver(User &receiver) {
    this->receiver = &receiver;
}



void Question::disply(){
    cout << content << "from: " << sender->getName() << "To:  " << receiver->getName() ;  
}

User *Question::getSender()
{
    return sender;
}
User *Question::getReceiver()
{
    return receiver;
}
