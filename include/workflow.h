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