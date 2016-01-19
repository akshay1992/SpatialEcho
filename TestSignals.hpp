#ifndef TEST_SIGNALS
#define TEST_SIGNALS

#include "Gamma/Oscillator.h"
#include "Gamma/Effects.h"


#define declareTestSig()     gam::Accum<> tmr_sind; \
                            gam::SineD<> sind;   \
                            gam::Accum<> tmr_burst;  \
                            gam::Burst burst



#define setupTestSig(sec)  tmr_sind.period(sec); \
                    tmr_sind.phaseMax(); \
                    sind.set(1000, 0.8, 0.08, 0.25); \
                    tmr_burst.period(sec);    \
                    tmr_burst.phaseMax();    \
                    burst(2e4,2e3, 0.1)


#define test_sind() sind(); if(tmr_sind()) sind.reset()


#define test_burst() burst(); if(tmr_burst()) burst.reset()

#endif
