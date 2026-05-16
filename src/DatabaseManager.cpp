#include "../include/DatabaseManager.hpp"
#include <iostream>

void DatabaseManager::initializeConnection() {
    std::cout << "[SQL Database] Connecting to mockforge_db...\n";
    std::cout << "[SQL Database] Connection established successfully!\n\n";
}

MockResponse DatabaseManager::getMockMatch(std::string route_path, std::string method) {
    std::cout << "[Engine] Scanning 3NF Database Schema for Route: " << route_path << " [" << method << "]\n";
    
    MockResponse response;
    if (route_path == "/users" && method == "GET") {
        response.status_code = 200;
        response.body = "{\"status\": \"success\", \"data\": [{\"id\": 1, \"name\": \"Aisha\"}]}";
        response.found = true;
    } else {
        response.status_code = 404;
        response.body = "{\"error\": \"Endpoint not found.\"}";
        response.found = false;
    }
    return response;
}