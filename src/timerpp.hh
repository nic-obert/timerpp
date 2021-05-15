#pragma once

#include <chrono>


#define START_TIMER true


namespace timerpp
{

    typedef std::chrono::_V2::high_resolution_clock::time_point TimePoint;


    class Timer
    {
    private:

        TimePoint startTime;
        TimePoint stopTime;

    public:
        
        Timer(bool doStart = false);

        void start();

        void stop();

        double millis() const;

        double micros() const;

        double nanos() const;

    };

};

