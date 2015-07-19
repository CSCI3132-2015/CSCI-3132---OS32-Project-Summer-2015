//
// Created by Aymen Ben Rkhis on 7/18/15.
//

#include "Motd.h"
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;
using namespace Utilities;


void Motd::execute() {
    generateMOTD();
}

void generateMOTD(){
    //Get the file containing the messages
    FileSystem& fs = FileSystem::getInstance();
    File* motd = fs.fLocate("Motd.txt");
    //Retrieve its contents line by line
    string messages = motd->getContents();
    istringstream stream(messages);
    //generate a random number to use as index for the meesage
    srand (time(NULL));
    int mIndex = rand() % 20, i=0;
    //Generate Random message
    string line;
    while (i!=mindex && getline(stream, line)){
        i++;
    }
    cout << line << endl;
}