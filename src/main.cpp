#include "../include/DatabaseManager.hpp"
#include <iostream>

int main() {
    std::cout << "=== MockForge Advanced Mock API Engine Initializing ===\n\n";
    
    DatabaseManager db;
    
    // 1. Start the simulated connection
    db.initializeConnection();
    
    // 2. Scan the database configuration
    MockResponse res1 = db.getMockMatch("/users", "GET");
    std::cout << "[Engine] Response Status: " << res1.status_code << "\n";
    std::cout << "[Engine] Response Body: " << res1.body << "\n\n";
    
    std::cout << "=======================================================\n";
    return 0;
}