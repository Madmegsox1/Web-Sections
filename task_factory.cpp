#include "task_factory.h"

void task_factory::queueTasks(list<string>* lines, ifstream& o_file) {
    f_file = &o_file;
    headTask(*lines);
    headerTask(*lines);
    footerTask(*lines);
}

void task_factory::headTask(list<string>& lines) {
    string h_dir;
    cout << "Please enter the dir to Head File";
    cin >> (h_dir);

    auto *h_file = new ifstream;
    h_file->open(h_dir);

    list<string> h_lines = f_to_s(*h_file);

    delete h_file;
}

void task_factory::headerTask(list<string>& lines) {
    string h_dir;
    cout << "Please enter the dir to Header File";
    cin >> (h_dir);

    auto *h_file = new ifstream;
    h_file->open(h_dir);

    list<string> h_lines = f_to_s(*h_file);

    delete h_file;
}

void task_factory::footerTask(list<string>& lines) {

    string f_dir;
    cout << "Please enter the dir to Footer File";
    cin >> (f_dir);

    auto *fs_file = new ifstream;
    fs_file->open(f_dir);

    list<string> h_lines = f_to_s(*fs_file);
    delete fs_file;

}
