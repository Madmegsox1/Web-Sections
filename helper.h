#ifndef WEBSECTIONS_HELPER_H
#define WEBSECTIONS_HELPER_H

#include <list>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

list<string> f_to_s(ifstream& m_file);

list<string> s_split(string val);

#endif
