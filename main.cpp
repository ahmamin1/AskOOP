#include <iostream>
#include <string>
using namespace std;
#include "Model/Question.cpp"
#include "Model/User.cpp"
#include "Model/Answer.cpp"
#include "Model/Thread.h"
ostream &operator<<(ostream &out, const Question &q)
{
    out <<"ID: " << q.id << " Q: " << q.content << " S: "<< q.sender->getName() << " R: " <<q.receiver->getName() << endl  ;
    return out;
}

int main()
{
    User u1,u2; 
    u1.setName("ahmed"); 
    u2.setName("ziad");
    Question q = u1.askQuestion("How are you",u2); 
    Answer a = u2.answerQuestion("I'm fine",q);
    Thread t = u1.makeThread("Waht about your son?",a);
    Answer a1 = u2.answerQuestion("he's doing well",t);
    a1.disply();

    return 0;
}
