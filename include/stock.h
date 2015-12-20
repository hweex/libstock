
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
#include <list>

template<typename T> class TimeSeries {
    class TimedData {
        time_t time;
        T* data;
    };

    std::list<TimedData> timeseries;

public:
	void insert(time_t time, T& data);
    void remove();
};

struct OHCL {
    double open;
    double close;
    double high;
    double low;
    /* unsigned int volume; */
};

extern void ma(int period, TimeSeries<OHCL> &ohcl, TimeSeries<double> &ma);

extern void ema(int period, TimeSeries<OHCL> &ohcl TimeSeries<double> &ma);

struct MACD {
    double dif;
    double dem;
    double osc;
};

extern void macd(int slow, int fast, int average, 
    TimeSeries<OHCL> &ohcl, TimeSeries<MACD> &macd);

#endif