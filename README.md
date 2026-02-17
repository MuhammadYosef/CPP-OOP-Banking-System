# C++ Console Banking System

A console-based banking application built in **C++** using **Object-Oriented Programming (OOP)** principles.  
This project simulates a banking system with users, clients, permissions, transactions, logging, and basic encryption.

## 📌 Project Purpose

This application was developed to demonstrate:
- Object-Oriented Design in C++
- File-based data persistence
- Role-based permissions
- Console UI structuring
- Basic encryption and logging mechanisms

## 🧱 Core Features

### 🔐 Authentication & Security
- Login system for users
- Passwords stored using simple encryption
- Passwords decrypted during login validation
- Login activity logging

### 👥 User & Client Management
- Users with different permission levels
- Clients stored persistently in files
- Permissions control access to system features

### 💰 Banking Operations
- Deposit and withdrawal transactions
- Transfer operations between clients
- All transactions logged to files

### 📊 Currency Management
- Currency table storing exchange rates
- Built-in calculator to convert between different currencies
- Support for viewing and managing currencies

### 🖥️ Console UI Architecture
- Clear separation of application screens
- Each screen implemented as a separate class

## 🧠 Technical Concepts Used
- Object-Oriented Programming (OOP)
- File handling (persistent storage)
- Role-Based Access Control
- Simple encryption & decryption
- Logging (transactions & logins)
- Modular system design

## 🗂️ Data Persistence

All system data is stored using files:
- Users data
- Clients data
- Transaction logs
- Login logs
- Currency data

No external database is used.

## 🔑 Demo Login Credentials

The following test users are available to access the system and demonstrate different permission levels:

| Username | Password |
|----------|----------|
| User1    | 1234     |
| User2    | 1234     |
| User3    | 1234     |
| User4    | 1112     |
| User5    | 2101     |
| User6    | 0012     |

> ⚠️ These credentials are for demonstration purposes only and are stored using a simple encryption mechanism as part of the learning objectives of this project.

## 🚀 How to Run

1. Clone the repository
2. Compile the project using a C++ compiler (e.g. `g++`)
3. Run the executable from the terminal

Example:
```bash
g++ *.cpp -o BankSystem
./BankSystem
