#include "helper.h"

// Converts a file into a list of strings
list<string> f_to_s(ifstream& m_file){
    list<string> lines;
    if(m_file.is_open()){
        string f_char;
        while (m_file){
            f_char = m_file.get();
            lines.push_back(f_char);
        }
    } else {
        cout << "Invalid file path" << endl;
        exit(-1);
    }

    return lines;
}


list<string> s_split(const string& val, char separator) {

    auto* streamData = new stringstream(val);

    list<string> f_list;
    string f_val;

    while (getline(*streamData, f_val, separator)) {
        f_list.push_back(f_val);
    }


    streamData->clear();
    delete streamData;

    return f_list;
}