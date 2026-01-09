#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <vector>
#include "Task.h"

void fcfs(std::vector<Task> &tasks);
void round_robin(std::vector<Task>& tasks, int quantum);
void priority_scheduling(std::vector<Task>& tasks);
void sjf(std::vector<Task>& tasks);

#endif