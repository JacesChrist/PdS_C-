#ifndef LAB4_JOB_H
#define LAB4_JOB_H

#include <chrono>

class Job {
private:

public:
    int id;
    long int duration;
    long int execution_time;
    long int wait_time;
    long int completation_time; //TODO: scope for this variable??
    long int start_time;

    Job(int,long int,long int);
    ~Job();

};

bool operator<(const Job&, const Job&);

#endif
