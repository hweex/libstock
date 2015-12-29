Design Note
===========

### Concept

Stream like system


### Classes

Stream (or Pipe), used to connect nodes in workflow.

Node is basic component in a workflow. It has both input & output stream.

i.e. ma, macd, data filter, and etc.

Source is a node only have output stream, used to fetch/create data.

Sink is a node only have input stream, used to store or display data.

A WorkFlow is a process in which data is computed:

WorkFlow = Source >> Node1 >> Node2 >> ... >> Sink

WorkFlow has control interfaces.


### Demux of workflow

Source >> Node1 >> Node2 >> ... >> Sink1

Node1 >> NodeA >> NodeB >> ... >> Sink2


### Buffer

* Automate Buffer in Source.

* Buffer Node