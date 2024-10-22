/* #include <stdio.h>

int main(){

    int dt1_h, dt1_m, da1_h, da1_m;
    int dt2_h, dt2_m, da2_h, da2_m;
    int dt3_h, dt3_m, da3_h, da3_m;
    int dt4_h, dt4_m, da4_h, da4_m;
    int dt5_h, dt5_m, da5_h, da5_m;
    int dt6_h, dt6_m, da6_h, da6_m;
    int dt7_h, dt7_m, da7_h, da7_m;
    int dt8_h, dt8_m, da8_h, da8_m;
    int dt1_t, dt2_t, dt3_t, dt4_t, dt5_t, dt6_t, dt7_t, dt8_t;

    dt1_h = 8, dt1_m=0;
    dt1_t = dt1_h*60 + dt1_m;
    da1_h = 10, da1_m=16;

    dt2_h =9, dt2_m=43;
    dt2_t = dt2_h*60 + dt2_m;
    da2_h=11, da2_m=52;

    dt3_h =11, dt3_m=19;
    dt3_t = dt3_h*60 + dt3_m;
    da3_h=13, da3_m=31;

    dt4_h =12, dt4_m=47;
    dt4_t = dt4_h*60 + dt4_m;
    da4_h=15, da4_m=0;

    dt5_h =14, dt5_m=0;
    dt5_t = dt5_h*60 + dt5_m;
    da5_h=16, da5_m=8;

    dt6_h =15, dt6_m=45;
    dt6_t = dt6_h*60 + dt6_m;
    da6_h=17, da6_m=55;

    dt7_h =19, dt7_m=0;
    dt7_t = dt7_h*60 + dt7_m;
    da7_h=21, da7_m=20;

    dt8_h=21, dt8_m=45;
    dt8_t = dt8_h*60 + dt8_m;
    da8_h=23, da8_m=58;


    int usertime_h, usertime_m, usertime_t;

    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &usertime_h, &usertime_m);

    usertime_t = usertime_h*60 + usertime_m;
    int closest_dt_h, closest_dt_m;

    if(usertime_t < dt1_t){
        closest_dt_h = dt1_h;
        closest_dt_m = dt1_m;
    }else if (usertime_t < dt2_t){
        closest_dt_h = dt2_h;
        closest_dt_m = dt2_m;
    }else if (usertime_t < dt3_t){
        closest_dt_h = dt3_h;
        closest_dt_m = dt3_m;
    }else if (usertime_t < dt4_t){
        closest_dt_h = dt4_h;
        closest_dt_m = dt4_m;
    }
    else if (usertime_t < dt5_t){
        closest_dt_h = dt5_h;
        closest_dt_m = dt5_m;
    }
    else if (usertime_t < dt6_t){
        closest_dt_h = dt6_h;
        closest_dt_m = dt6_m;
    }
    else if (usertime_t < dt7_t){
        closest_dt_h = dt7_h;
        closest_dt_m = dt7_m;
    }
    else{
        closest_dt_h = dt8_h;
        closest_dt_m = dt8_m;
    }

    if (closest_dt_h >=13){
        printf("Closest Departure time is %.2d:%.2d PM\n", closest_dt_h-12, closest_dt_m);

    }else{
        printf("Closest Departure time is %.2d:%.2d AM\n", closest_dt_h, closest_dt_m);

    }
   









    return 0;
} */