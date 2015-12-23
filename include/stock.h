
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
#include <ctime>
#include <list>

template<typename T> class TimeSeries {
    struct TimedData {
        time_t time;
        T& data;
    };

    std::list<TimedData> timeseries;

public:
	void insert(time_t time, T& data)
	{
		TimedData td = {time, data};
        // TODO: should insert in order (by time)
		timeseries.push_back(td);
	}
    void remove();
};

struct OHCL {
    double open;
    double close;
    double high;
    double low;
    /* unsigned int volume; */
};

extern void ma(int period, const TimeSeries<OHCL> &ohcl, TimeSeries<double> &ma);

extern void ema(int period, const TimeSeries<OHCL> &ohcl, TimeSeries<double> &ma);

struct MACD {
    double dif;
    double dem;
    double osc;
};

extern void macd(int slow, int fast, int average, 
    TimeSeries<OHCL> &ohcl, TimeSeries<MACD> &macd);

#endif