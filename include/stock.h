
/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */
#include <time.h>

typedef struct OHCL_t {
    double open;
    double close;
    double high;
    double close;
} OHCL;

typedef unsigned int Volume_t;

template<typename T> class TimeSeries {
    time_t time;
    T *data;
};

typedef TimeSeries<OHCL> OHCL_ts;

void ma(OHCL_ts c, TimeSeries *output);

void ema(OHCL_ts c, TimeSeries *output);

struct MACD_t {
    double dif;
    double dem;
    double osc;
};

typedef TimeSeries<MACD_t> MACD_ts;

void macd(OHCL_ts c, int slow, int fast, int average, MACD *output)