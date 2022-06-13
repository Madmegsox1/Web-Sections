#ifndef WEBSECTIONS_HELPER_H
#define WEBSECTIONS_HELPER_H

#include <list>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

list<string> f_to_s(ifstream& m_file);

list<string> s_split(const string& val, char separator);

void r_last_list (list<string>& val);

string f_to_line(ifstream& m_file);

#endif
