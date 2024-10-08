//////////////////////////////////////////////////////////////////////////////
// CStopWatch.h
// =======
// High Resolution CStopWatch.
// This CStopWatch is able to measure the elapsed time with 1 micro-second accuracy
// in both Windows, Linux and Unix system
//
//  AUTHOR: Song Ho Ahn (song.ahn@gmail.com)
// CREATED: 2003-01-13
// UPDATED: 2006-01-13
//
// Copyright (c) 2003 Song Ho Ahn
//////////////////////////////////////////////////////////////////////////////

#ifndef CStopWatch_H_DEF
#define CStopWatch_H_DEF

#ifdef _WIN32   // Windows system specific
	#include <windows.h>
#else          // Unix based system specific
	#include <sys/time.h>
#endif


class CStopWatch
{
public:
    CStopWatch();                                    // default constructor
    ~CStopWatch();                                   // default destructor

    void   startTimer();                             // start CStopWatch
    void   stopTimer();                              // stop the CStopWatch
    double getElapsedTime();                    // get elapsed time in second
    double getElapsedTimeInSec();               // get elapsed time in second (same as getElapsedTime)
    double getElapsedTimeInMilliSec();          // get elapsed time in milli-second
    double getElapsedTimeInMicroSec();          // get elapsed time in micro-second


protected:


private:
    double startTimeInMicroSec;                 // starting time in micro-second
    double endTimeInMicroSec;                   // ending time in micro-second
    int    stopped;                             // stop flag
#ifdef _WIN32
    LARGE_INTEGER frequency;                    // ticks per second
    LARGE_INTEGER startCount;                   //
    LARGE_INTEGER endCount;                     //
#else
    timeval startCount;                         //
    timeval endCount;                           //
#endif
};

#endif // CStopWatch_H_DEF