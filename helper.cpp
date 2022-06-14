#include "helper.h"

// Converts a file into a list of strings
list<string> f_to_s(ifstream& m_file){
    list<string> lines;
    if(m_file.is_open()){
        string f_char;
        while (m_file){
            char c = m_file.get();

            if(c == '\n'){
                lines.push_back(f_char);
                f_char = "";
            } else {
                f_char += c;
            }
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

void r_last_list(list<string>& val){
    list<string>::iterator it;
    it = --val.end();
    val.erase(it);

}

string f_to_line(ifstream& m_file){
    string line;
    if(m_file.is_open()){
        string f_char;
        while (m_file){
            f_char =
            line += f_char;
        }
    }

    return line;
}