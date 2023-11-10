//
// Created by Ahmed Amin on 03/11/2023.
//

#ifndef ASKOOP_THREAD_H
#define ASKOOP_THREAD_H

#include "Question.h"
#include "Answer.h"

class Thread: public Question{
private:
    Answer* answer;
public:
    Thread(string content, Answer& answer) : Question(content, *(answer.getQuestion()->getSender()), *(answer.getQuestion()->getReceiver())) {
        setAnswer(answer);
    }

    void setAnswer(Answer& answer) {
        this->answer = &answer;
    }

    
};


#endif //ASKOOP_THREAD_H
#pragma once