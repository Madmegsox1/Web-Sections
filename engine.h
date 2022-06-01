#ifndef WEBSECTIONS_ENGINE_H
#define WEBSECTIONS_ENGINE_H

#include "task_factory.h"
#include "helper.h"
#include <iostream>
#include <fstream>
#include <list>

using namespace std;

class Engine
{
public:
    void run();

    void readFile(const string& filePath);


private:
    ifstream f_file;

    task_factory f_factory;

};


#endif
