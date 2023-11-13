/**
 * name: cli-chat
 * author: samuel steadman
 * date: 2023
 * desc: A lightweight commandline chat interface with support for encryption using AES.
 */

#include <iostream>

int main(int argc, char *argv[])
{
    if (!argc) {
        std::cout << "Please specify a target IP address.";
    }
    else {
        char* ip = argv[0];
        for (int i = 0; i < argc; i++) {
            if (strcmp(argv[i], "server") == 0) {

            }
            else if (strcmp(argv[i], "key") == 0) {

            }
        }
    }
}
