#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {
    // tar a directory
    string command_tar = "tar -czf /tmp/SA-Result.tar.gz -C /home/beyoung/Desktop/ BashPython";
    // command remove all files of a folder
    string folder_path = "../rm_test";
    string command_rmAll = "rm -rf " + folder_path + "/*";

    // execute the command
    cout << "Execute: " << command_rmAll << endl;
    int status = system(command_rmAll.c_str());
    // cout << "statis = " << status << endl;
    return 0;
}
