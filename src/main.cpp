#include "rpc/Server.cpp"

int main()
{
    auto srv = rpc::Server();
    srv.start(3000);
    return 0;
}
