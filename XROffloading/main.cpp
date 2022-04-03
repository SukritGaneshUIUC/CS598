// #include "zmq.h"
// #include <zmqpp/zmqpp.hpp>

#include <string>
#include <iostream>
#include <chrono>
#include <thread>

#include "Client.h"
#include "Server.h"

// Try to get zeromq up and running
// If so, create this for all devices (server + client)
// And try to transfer a basic file between them, with dummy file processing

int main(int argc, char *argv[]) {
    std::cout << "hello world" << std::endl;

    // Fire up server
    Server *m = new Server();
    m->start();

    std::cout << "server should be active. listening for incoming messages" << std::endl;

    // Fire up client
    Client*c = new Client();
    c->start();
    
}
