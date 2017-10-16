#ifndef RPC_SERVER_CPP
#define RPC_SERVER_CPP

#include <string>
#include "rpc/server.h"
#include "rpc/this_handler.h"

using namespace std;

namespace rpc
{
class Server
{
  public:
    Server()
    {
    }

    void start(int port)
    {
        rpc::server server(port);
        server.bind("test", [&](const string &s) {
            return this->test(s);
        });
        server.run();
    }

    string test(string input)
    {
        return "test response: " + input;
    }
};
}

#endif