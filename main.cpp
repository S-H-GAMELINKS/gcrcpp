#include "cpp-httplib/httplib.h"
#include <fstream>
#include <sstream>
#include <string>

const std::string load_assets(const std::string& path) {
    std::ifstream static_file(path.c_str(), std::ios::in);

    std::stringstream stream;

    stream << static_file.rdbuf();
    static_file.close();

    return stream.str();
}

int main() {

    httplib::Server svr;

    const std::string html = load_assets("./static/index.html");

    const std::string js = load_assets("./static/index.js");

    svr.Get("/", [&](const httplib::Request& req, httplib::Response& res){
        res.set_content(html, "text/html");
    });

    svr.Get("/index.js", [&](const httplib::Request& req, httplib::Response& res){
        res.set_content(js, "text/javascript");
    });

    svr.listen("0.0.0.0", 8080);
}