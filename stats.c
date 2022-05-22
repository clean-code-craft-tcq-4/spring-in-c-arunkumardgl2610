#include "stats.h"
#include<stdio.h>
#include<math.h>

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void emailAlerter()
{
    emailAlertCallCount =1;
}
void ledAlerter()
{
    ledAlertCallCount = 1;
}

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    int G_Total=0;
    if(numberset == 0)
    {      
    s.average = 0;
    s.min = 0;
    s.max = 0;
    }
    else
    {
        for(int a=0;a<=setlength;a++)
        {
            if(numberset[a] > s.max)
            {
                s.max = numberset[a];   
            }
            if(numberset[a] < s.min)
            {
                s.min = numberset[a];   
            }
            G_Total = G_Total + numberset[a];
            s.average = G_Total/setlength;
        }
    }
    return s;
};
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{
 if(computedStats.max > maxThreshold)
 {
     emailAlertCallCount = 1;
     ledAlertCallCount = 1;
 }
    else
    {
        emailAlertCallCount = 0;
        ledAlertCallCount = 0;
    }
    
}
