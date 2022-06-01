#ifndef WEBSECTIONS_TASK_FACTORY_H
#define WEBSECTIONS_TASK_FACTORY_H

#include <iostream>
#include <fstream>
#include <list>
#include "helper.h"
using namespace std;

class task_factory{
public:
    void queueTasks(list<string>* lines, ifstream& o_file, const string& o_filePath);

private:
    void headTask();

    void headerTask();

    void footerTask();

    ifstream* f_file;
    string& f_path;
    list<string>& f_lines;
    string& f_path_split;

};

#endif
