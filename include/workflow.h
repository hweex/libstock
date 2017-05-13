/*
 * Copyright(c) 2015 Xiao Hui <xhui.xiao@gmail.com>. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 */

#ifndef __WORKFLOW_H__
#define __WORKFLOW_H__

class Stream {
    
};

class Node {
    Stream in;
    Stream out;
};

class Source: public Node {
public:
    Source(){
        this.in = 0;
    };
    
};

class Sink: public Node {
public:
    Sink(){
        this.out = 0;
    }
};

class Buffer: public Node {

};

class WorkFlow {
public:
    addNode(Node &n);
    removeNode(Node &n);
};

#endif /* __WORKFLOW_H__ */
