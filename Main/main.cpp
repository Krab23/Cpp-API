#include "main.h"

#include "cpp-httplib/httplib.h"

void handle_request(const httplib::Request &req, httplib::Response &res) {
  // Handle the request here
  std::cout << req << std::endl;
  res.set_content("Hello, World!", "text/plain");
}

int main() {
  httplib::Server server;

  // Set the request handler
  server.Get("/", handle_request);

  // Start the server on port 8080
  server.listen("localhost", 8080);

  return 0;
}