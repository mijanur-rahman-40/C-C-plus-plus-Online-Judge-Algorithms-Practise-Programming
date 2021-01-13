#include <stdio.h>
int main() {
    int tst, hour,minute;
    scanf("%d", &tst);
    while(tst--) {
        scanf("%d:%d",&hour,&minute);
        hour = 11-hour + (minute == 0);
        if(hour<= 0)
            hour += 12;
        if(minute!= 0)
            minute= 60-minute;
        printf("%02d:%02d\n",hour,minute);
    }
    return 0;
}
//#include <stdio.h>
//int main() {
//    int tst, hour,minute;
//    scanf("%d", &tst);
//    while(tst--) {
//        scanf("%d:%d",&hour,&minute);
//        hour=11-hour;
//        if(hour==-1)
//            hour+=13;
//        else if(hour==0)
//         hour= 12;
//
//        if(minute!= 0)
//            minute= 60-minute;
//        printf("%02d:%02d\n",hour,minute);
//    }
//    return 0;
//}
//        h = 11-h + (w == 0);
//        if(h <= 0)   h += 12;
//#include <stdio.h>
//
//int main()
//{
//    int tst, h, m, time;
//    scanf("%d",&tst);
//    while (tst--)
//    {
//        scanf("%d:%d",&h,&m);
//        time = h*60 + m;
//        if (time>720) time-=720;
//        time = 720-time;
//
//        h = (time/60);
//        m = time%60;
//
//        if (!h) h = 12;
//
//        if (h<10)
//            printf("0%d:",h);
//        else
//            printf("%d:",h);
//        if (m<10)
//            printf("0%d\n",m);
//        else
//            printf("%d\n",m);
//    }
//    return 0;
//}
//
