# MockForge 🚀

An advanced, interface-driven API mocking engine built in C++ and SQL.

## 🛠️ Tech Stack
* **Language:** C++ (OOP Interface Architecture)
* **Database:** MySQL / MariaDB (Normalized 3NF Relational Schema)

## 📂 Project Structure
* `schema.sql` - Relational database configuration script.
* `include/` - Modular C++ header files and abstract interfaces.
* `src/` - Implementation logic and core server execution engine.

## 🏃‍♂️ How to Run Locally
1. Compile the project:
   ```bash
   g++ src/main.cpp src/DatabaseManager.cpp -o mockforge