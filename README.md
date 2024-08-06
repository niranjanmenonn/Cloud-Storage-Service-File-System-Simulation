# CloudStorageService-FileSystemSimulation

## Overview

This repository contains projects demonstrating file system simulation and cloud storage service prototypes. The projects are:

1. **File System Simulation**: A C++ implementation of a basic file system to understand file and directory management.
2. **Cloud Storage Service**: A Java implementation of a cloud storage service with data redundancy to simulate cloud storage functionality.

## Projects

### File System Simulation (C++)

This project simulates a simple file system with basic operations such as creating files, writing data, and reading data.

- **Files**:
  - `File.h` & `File.cpp`: Defines and implements the File class.
  - `Directory.h` & `Directory.cpp`: Defines and implements the Directory class.
  - `FileSystem.h` & `FileSystem.cpp`: Defines and implements the FileSystem class.
  - `main.cpp`: Main entry point demonstrating file system operations.

### Cloud Storage Service (Java)

This project simulates a basic cloud storage service with data redundancy. It supports file upload and download with multiple replicas for data reliability.

- **File**:
  - `CloudStorageService.java`: Implements the cloud storage service with methods for uploading and downloading files with redundancy.

## How to Run

### File System Simulation

1. Navigate to the `FileSystemSimulation` directory.
2. Use CMake to build the project:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
