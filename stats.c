#include "stats.h"
#include<stdio.h>
#include<math.h>
void emailAlerter(){}
void ledAlerter(){}

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct stats s;
    float G.Total=0;
    if(numberset == 0)
    {      
    s.average = NAN;
    s.min = NAN;
    s.max = NAN;
    }
    else
    {
        for(int a=0;i<=setlength;a++)
        {
            if(numberset[a] > s.max)
            {
                s.max = numberset[a]   
            }
            if(numberset[a] < s.min)
            {
                s.min = numberset[a]   
            }
            G.Total = G.Total + numberset[a];
            s.average = G.Total/setlength;
        }
    }
    return s;
};
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
int emailAlertCallCount = 1;
int ledAlertCallCount = 1;
}
