#include "cpp-httplib/httplib.h"

int main() {

    httplib::Server svr;

    svr.Get("/", [](const httplib::Request& req, httplib::Response& res){
        res.set_content("Hello C++ on Google Cloud Run!", "text/html");
    });

    svr.listen("0.0.0.0", 8080);
}