/*
 *University computer science programs typically include a course called “Data
Structures and Algorithms.” The term data structures refers to the ways data is stored in mem-
ory, and algorithms refers to how it is manipulated
 *
 * Standard C++ includes its own built-
in container class library. It’s called the Standard Template Library (STL), and was developed
by Alexander Stepanov and Meng Lee of Hewlett Packard.
 *
 *The STL contains several kinds of entities. The three most important are containers, algo-
rithms, and iterators
 * 
 *A container is a way that stored data is organized in memory. In earlier chapters we’ve
explored two kinds of containers: stacks and linked lists. Another container, the array, is so
common that it’s built into C++ (and most other computer languages). However, there are
many other kinds of containers, and the STL includes the most useful. The STL containers are
implemented by template classes, so they can be easily customized to hold different kinds of
data.
 * 
 *Algorithms in the STL are procedures that are applied to containers to process their data in var-
ious ways. For example, there are algorithms to sort, copy, search, and merge data. Algorithms
are represented by template functions. These functions are not member functions of the con-
tainer classes. Rather, they are standalone functions. Indeed, one of the striking characteristics
of the STL is that its algorithms are so general. You can use them not only on STL containers,
but on ordinary C++ arrays and on containers you create yourself. (Containers also include
member functions for more specific tasks.)
 * 
 *Iterators are a generalization of the concept of pointers: they point to elements in a container.
You can increment an iterator, as you can a pointer, so it points in turn to each element in a
container. Iterators are a key part of the STL because they connect algorithms with containers.
 * 
 *A container is a way to store data, whether the data consists of built-in types such as int and
float , or of class objects. The STL makes seven basic kinds of containers available, as well as
three more that are derived from the basic kinds. In addition, you can create your own contain-
ers based on the basic kinds. You may wonder why we need so many kinds of containers. Why
not use C++ arrays in all data storage situations? The answer is efficiency. An array is awk-
ward or slow in many situations.
 *
 * Containers in the STL fall into two main categories: sequence and associative. The sequence
containers are vector, list, and deque. The associative containers are set, multiset, map, and
multimap. In addition, several specialized containers are derived from the sequence containers.
These are stack, queue, and priority queue.
 *
 *
 *
 *
 *
 *
 *
 *
 * */
