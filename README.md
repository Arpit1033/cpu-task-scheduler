# CPU Task Scheduler

A high-performance CPU task scheduling system built in C++ that simulates and manages task execution using various scheduling algorithms. Designed to demonstrate scheduling concepts, resource management, and efficient CPU time allocation.

![Build Status](https://github.com/Arpit1033/cpu-task-scheduler/actions/workflows/build.yml/badge.svg)

## 📋 Features

- Multiple scheduling algorithms implemented
- Cross-platform support (Windows, Linux, macOS)
- Clean, modular codebase
- CMake build system

## 🧮 Implemented Algorithms

| Algorithm | Type | Description |
|-----------|------|-------------|
| **FCFS** | Non-preemptive | First Come First Serve - executes tasks in arrival order |
| **SJF** | Non-preemptive | Shortest Job First - executes shortest tasks first |
| **SRTF** | Preemptive | Shortest Remaining Time First - preemptive version of SJF |
| **Round Robin** | Preemptive | Time-sliced execution with configurable quantum |
| **Priority Scheduling** | Non-preemptive | Executes tasks based on priority level |
| **Multilevel Queue** | Hybrid | Multiple queues with different scheduling policies |

## 🚀 Getting Started

### Prerequisites

- C++ compiler (g++, clang++, or MSVC)
- CMake 3.10 or higher

### Building with CMake

```bash
# Clone the repository
git clone https://github.com/YOUR_USERNAME/cpu-task-scheduler.git
cd cpu-task-scheduler

# Create build directory
mkdir build && cd build

# Generate build files
cmake ..

# Build all executables
cmake --build . --config Release
```

### Building Manually

```bash
g++ -std=c++17 -I include -o scheduler src/main.cpp src/algorithms/*.cpp
```

## 📖 Usage

Run the unified scheduler CLI:

```bash
./scheduler
```

The interactive CLI will present a menu to select from available scheduling algorithms:

```
==============================
   CPU TASK SCHEDULER CLI     
==============================
1. FCFS (First Come First Serve)
2. Round Robin
3. Priority Scheduling (Non-Preemptive)
4. SJF (Shortest Job First)
5. SRTF (Shortest Remaining Time First)
6. Multilevel Queue
0. Exit
Enter your choice:
```

### Example Session

```
Enter your choice: 1
Enter number of tasks: 3
Task 1 Name: Task1
Burst Time: 5
Priority (optional, default 0): 0
Task 2 Name: Task2
Burst Time: 3
Priority (optional, default 0): 0
Task 3 Name: Task3
Burst Time: 8
Priority (optional, default 0): 0

Running FCFS...
Task1: start at 0, finish at 5
Task2: start at 5, finish at 8
Task3: start at 8, finish at 16
```

## 📁 Project Structure

```
cpu-task-scheduler/
├── include/
│   ├── Task.h              # Task class definition
│   └── scheduler.h         # Scheduler function declarations
├── src/
│   ├── main.cpp            # Unified CLI entry point
│   └── algorithms/
│       ├── fcfs.cpp            # First Come First Serve
│       ├── sjf.cpp             # Shortest Job First
│       ├── srtf.cpp            # Shortest Remaining Time First
│       ├── round_robin.cpp     # Round Robin
│       ├── priority_scheduling.cpp # Priority Scheduling
│       └── multilevel_queue.cpp    # Multilevel Queue
├── CMakeLists.txt          # CMake build configuration
├── README.md               # Project documentation
├── CONTRIBUTING.md         # Contribution guidelines
├── LICENSE                 # MIT License
└── .github/workflows/      # CI/CD pipeline
```

## 🔧 Algorithm Comparison

| Algorithm | Avg Waiting Time | Starvation Risk | Complexity |
|-----------|------------------|-----------------|------------|
| FCFS | High for long jobs | No | O(n) |
| SJF | Optimal | Yes (long jobs) | O(n log n) |
| SRTF | Optimal | Yes (long jobs) | O(n²) |
| Round Robin | Medium | No | O(n) |
| Priority | Depends | Yes (low priority) | O(n log n) |

## 🤝 Contributing

Contributions are welcome! Feel free to:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/new-algorithm`)
3. Commit your changes (`git commit -m 'Add new algorithm'`)
4. Push to the branch (`git push origin feature/new-algorithm`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Operating Systems concepts from various textbooks
- CPU scheduling visualization tools for inspiration
