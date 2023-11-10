#include <string>
using namespace std;

#ifndef ASKOOP_MODEL_H
#define ASKOOP_MODEL_H

class Model
{
    
private:

protected:
    string nullstr = "";

public:
    virtual ~Model() = 0;
};

Model::~Model(){}


#endif 
#pragma once
