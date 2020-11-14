#pragma once

namespace utils
{
    // returns a std::chrono timestamp
    unsigned int getTimestamp();

    // returns a random number in between 0 and the given number
    unsigned short int randomNum(const unsigned short int*);

    // a simple timer
    class timer
    {
    private:
        unsigned int startTime;
        unsigned int timeToWait;
    public:
        // constructor starts timer
        explicit timer(unsigned short int);
        virtual ~timer() = default;
        // true means snake moves
        [[nodiscard]] bool done() const;
        void reset();
    };
}