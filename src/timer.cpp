#include "timerpp.hh"


using namespace timerpp;


Timer::Timer(bool doStart)
{
    if (doStart)
    {
        startTime = std::chrono::high_resolution_clock::now();
    }
}


void Timer::start()
{
    startTime = std::chrono::high_resolution_clock::now();
}


void Timer::stop()
{
    stopTime = std::chrono::high_resolution_clock::now();
}


double Timer::millis() const
{
    return std::chrono::duration<double, std::milli>(stopTime - startTime).count();
}


double Timer::micros() const
{
    return std::chrono::duration<double, std::micro>(stopTime - startTime).count();
}


double Timer::nanos() const
{
    return std::chrono::duration<double, std::nano>(stopTime - startTime).count();
}

