#include <stdio.h>

double getDistance()
{
    int d;
    printf("Enter the distance travelled: ");
    scanf("%d", &d);
    return d;
}

double getTimeElapsed()
{
    int s;
    printf("Enter the time taken: ");
    scanf("%d", &s);
    return s;
}

double getSpeedLimit()
{
    int l;
    printf("Enter the speed limit: ");
    scanf("%d", &l);
    return l;
}

double getSpeed(double distance, double time)
{
    double ans = distance / time;
    return ans;
}

int main()
{
    double speed = getSpeed(getDistance(), getTimeElapsed());
    printf("%s", ((speed > getSpeedLimit()) ? "Overspeeding" : "Below limit"));
    return 0;
}