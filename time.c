#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double seconds = (end_time->tv_sec - start_time->tv_sec);
    double microseconds = (end_time->tv_usec - start_time->tv_usec);
    double elapsed = seconds + microseconds / 1e6;

    return elapsed;
}