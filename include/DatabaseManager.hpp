#pragma once
#include <string>

struct MockResponse {
    int status_code;
    std::string body;
    bool found;
};

class DatabaseManager {
public:
    void initializeConnection();
    MockResponse getMockMatch(std::string route_path, std::string method);
};