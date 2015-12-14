
/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */
#ifndef __STOCK_H__
#define __STOCK_H__
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

extern void ma(OHCL_ts c, TimeSeries *output);

extern void ema(OHCL_ts c, TimeSeries *output);

struct MACD_t {
    double dif;
    double dem;
    double osc;
};

typedef TimeSeries<MACD_t> MACD_ts;

extern void macd(OHCL_ts c, int slow, int fast, int average, MACD *output);

#endif