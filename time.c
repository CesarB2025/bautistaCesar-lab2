#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
double elapsed_seconds = (end_time->tv_sec - start_time->tv_sec);
double elapsed_microseconds = (end_time->tv_usec - start_time->tv_usec);

if (elapsed_microseconds < 0) {
    elapsed_seconds -= 1;
    elapsed_microseconds += 1000000;
}

double elapsed_time = elapsed_seconds + (elapsed_microseconds / 1e6);
return elapsed_time;
}