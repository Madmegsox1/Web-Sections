#include "task_factory.h"

void task_factory::queueTasks(list<string>* lines, ifstream& o_file, const string& o_filePath) {
    f_file = &o_file;
    f_lines = *lines;
    f_path = o_filePath;


    auto* temp = new  list<string>;

    *temp = s_split(f_path, '\\');

    string back = temp->back();

    list<string>::iterator it; // removes the last element of the list
    it = --temp->end();
    temp->erase(it);




    headTask();
    headerTask();
    footerTask();

    delete temp;
}

void task_factory::headTask() {
    string h_dir;
    cout << "Please enter the dir to Head File";
    cin >> (h_dir);



    auto *h_file = new ifstream;
    h_file->open(h_dir);

    list<string> h_lines = f_to_s(*h_file);

    list<string>::iterator it;
    for (it = h_lines.begin(); it != h_lines.end(); ++it){


    }


    delete h_file;
}

void task_factory::headerTask() {
    string h_dir;
    cout << "Please enter the dir to Header File";
    cin >> (h_dir);

    auto *h_file = new ifstream;
    h_file->open(h_dir);

    list<string> h_lines = f_to_s(*h_file);

    delete h_file;
}

void task_factory::footerTask() {

    string f_dir;
    cout << "Please enter the dir to Footer File";
    cin >> (f_dir);

    auto *fs_file = new ifstream;
    fs_file->open(f_dir);

    list<string> h_lines = f_to_s(*fs_file);
    delete fs_file;

}
