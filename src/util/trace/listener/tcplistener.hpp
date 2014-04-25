#ifndef UTIL_TRACE_LISTENER_TCPLISTENER_HPP
#define UTIL_TRACE_LISTENER_TCPLISTENER_HPP

#include "util/net.hpp"
#include "../information.hpp"

namespace util
{

class TcpListener : public InformationListener
{
public:
    TcpListener();
    virtual ~TcpListener();
    virtual void process(Information* pinfo);

    bool init(const std::string& ip, unsigned short port, const std::string& info_append = "");
    void close();
private:
    util::StreamSocket ss_;
    std::string info_append_;
private:
    DISALLOW_COPY_AND_ASSIGN(TcpListener)
};

} // util

#endif // UTIL_TRACE_LISTENER_TCPLISTENER_HPP
