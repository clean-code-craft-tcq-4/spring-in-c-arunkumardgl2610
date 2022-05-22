struct stats
{
  float average=0;
  int min=0;
  int max=0;
}
struct Stats compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);
void emailAlerter();
void ledAlerter();
extern int emailAlertCallCount;
extern int ledAlertCallCount;
