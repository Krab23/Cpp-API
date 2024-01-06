#include "main.h"
#include "cpp-httplib/httplib.h"

void handle_request(const httplib::Request &req, httplib::Response &res) {
  // Handle the request here and print request to terminal
  res.set_content("Hello, World!", "text/plain");
  std::cout << req.method << " " << req.path << std::endl;
}

int main() {
  httplib::Server server;

  // Set the request handler
  server.Get("/", handle_request);

  // Start the server on port 8080
  server.listen("localhost", 8080);

  return 0;
}
