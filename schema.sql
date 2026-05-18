-- Create the main database for MockForge
CREATE DATABASE IF NOT EXISTS mockforge_db;
USE mockforge_db;

-- Table to hold the basic service info
CREATE TABLE IF NOT EXISTS services (
    service_id INT AUTO_INCREMENT PRIMARY KEY,
    service_name VARCHAR(100) NOT NULL UNIQUE,
    base_path VARCHAR(50) NOT NULL UNIQUE
);

-- Table to hold the endpoints linked to those services
CREATE TABLE IF NOT EXISTS endpoints (
    endpoint_id INT AUTO_INCREMENT PRIMARY KEY,
    service_id INT NOT NULL,
    route_path VARCHAR(255) NOT NULL,
    FOREIGN KEY (service_id) REFERENCES services(service_id) ON DELETE CASCADE
);