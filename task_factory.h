#ifndef WEBSECTIONS_TASK_FACTORY_H
#define WEBSECTIONS_TASK_FACTORY_H

#include <iostream>
#include <fstream>
#include <list>
#include "helper.h"
using namespace std;

class task_factory{
public:
    void queueTasks(list<string>* lines, ifstream& o_file);

private:
    void headTask(list<string>& lines);

    void headerTask(list<string>& lines);

    void footerTask(list<string>& lines);

    ifstream* f_file;

};

#endif
