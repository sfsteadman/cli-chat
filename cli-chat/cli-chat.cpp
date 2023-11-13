/**
 * name: cli-chat
 * author: samuel steadman
 * date: 2023
 * desc: A lightweight commandline chat client/server with support for encryption using AES.
 */

#include <iostream>

int main(int argc, char *argv[])
{
    bool valid_args = true;
    bool is_server = false;
    bool is_encrypted = false;
    char* aes_key;
    char* server_port;
    
    
    for (int i = 0; i < argc && valid_args; i++) {
        if (strcmp(argv[i], "-server") == 0) {
            is_server = true;
            if (i == argc - 1) {
                std::cout << "Please provide a server port.\n";
                valid_args = false;
            }
            else server_port = argv[++i];
        }
        else if (strcmp(argv[i], "-key") == 0) {
            is_encrypted = true;
            if (i == argc - 1) {
                std::cout << "Please provide an encryption key.\n";
                valid_args = false;
            }
            else aes_key = argv[++i];
        }
        else if (strcmp(argv[i], "-help") || strcmp(argv[i], "-?")) {
            std::cout << "Available args:\n"
                << "    -server <port>   - hosts a chat server on the given port.\n"
                << "    -key <val>        - encrypts all chat traffic with the given AES-256 key.\n"
                << "    -help             - outputs help message.\n";
        }
        else {
            std::cout << "Unrecognised argument \"" << argv[i] << " given.\n";
            valid_args = false;
        }
    }
    
    if (is_server) {

    }
    else {

    }
}
