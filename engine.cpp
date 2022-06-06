#include "engine.h"


void Engine::run() {
    cout << "/-----WEB SECTIONS-----\\" << endl;
    auto *filePath = new string;
    cout << "Please enter the file to insert sections" << endl;
    cin >> *filePath;
    readFile(*filePath);

    delete filePath;
}

void Engine::readFile(const string& filePath){
    f_file.open(filePath);
    list<string> f_lines = f_to_s(f_file);
    f_factory.queueTasks(&f_lines, f_file, filePath);
}



