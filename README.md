# C/C++ Cryptographic Engine & Modular Utility

A lightweight, high-performance cryptographic module built in C to demonstrate modular system architecture, structured error handling, and automated integration testing.

## 🚀 Key Features
* **Modular Architecture**: Separate header definitions and component implementations.
* **Error Handling & Validation**: Bounds checking and deterministic state management.
* **Automated CI Build**: GitHub Actions workflow automatically builds and runs unit test suites on push.

## 🛠️ Tech Stack
* **Language**: C11 / C++
* **Build System**: GNU Make / GCC
* **CI/CD**: GitHub Actions

## 🚦 Getting Started

### Build & Run
```bash
# Compile binary
gcc -Iinclude src/crypto.c src/main.c -o bin/crypto_engine

# Run unit test suite
./bin/crypto_engine test