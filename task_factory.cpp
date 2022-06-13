#include "task_factory.h"

void task_factory::queueTasks(list<string>* lines, ifstream& o_file, const string& o_filePath) {
    f_file = &o_file;
    f_lines = *lines;
    f_path = o_filePath;


    auto* temp = new  list<string>;

    *temp = s_split(f_path, '\\');


    r_last_list(*temp);

    temp->push_back("head.html");

    i_path = build_string(*temp);

    headTask();

    temp->push_back("header.html");
    i_path = build_string(*temp);

    headerTask();

    temp->push_back("footer.html");
    i_path = build_string(*temp);

    footerTask();

    delete temp;
}

void task_factory::headTask() {


    auto *h_file = new ifstream;
    h_file->open(i_path);

    string h_line = f_to_line(*h_file);

    list<string>::iterator it;
    for (it= f_lines.begin(); it != f_lines.end(); it++) {
        string line = *it;
        if(line == "@head"){
            // insert code
        }

    }



    delete h_file;
}

void task_factory::headerTask() {

    auto *h_file = new ifstream;
    h_file->open(i_path);

    string h_line = f_to_line(*h_file);

    delete h_file;
}

void task_factory::footerTask() {


    auto *fs_file = new ifstream;
    fs_file->open(i_path);

    string h_line = f_to_line(*fs_file);
    delete fs_file;

}




string task_factory::build_string(list<string>& val){
    list<string>::iterator it;
    string r_val;
    int i = 0;
    for (it = val.begin();  it != val.end() ; it++) {

        if(i != 0) {
            r_val = r_val + "\\" + *it;
        }else {
            r_val = *it;
        }
        i++;
    }

    r_last_list(val);

    return r_val;
}


