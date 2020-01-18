/*
 *Iterators may seem a bit mysterious, yet they are central to the operation of the STL.
 first discuss the twin roles played by iterators: as smart pointers and as a connec-
tion between algorithms and containers.
Iterators as Smart Pointers
It’s often necessary to perform an operation on all the elements in the container.
Displaying the value of each element in the container or adding its value to
a total are examples.
In an ordinary C++ array, such operations are carried out using a pointer
(or the [] operator, which is the same underlying mechanism). For example, the following
code iterates through a float array, displaying the value of each element:
float* ptr = start_address;
for(int j=0; j<SIZE; j++)
cout << *ptr++;
We dereference the pointer ptr with the * operator to obtain the value of the item it points to,
and increment it with the ++ operator so it points to the next item.
Whose Responsibility?
Should the smart pointer class be embedded in a container, or should it be a separate class?
The approach chosen by the STL is to make smart pointers, called iterators, into a completely
separate class (actually a family of templetized classes). The class user creates iterators by
defining them to be objects of such classes.

Iterators as an Interface
Besides acting as smart pointers to items in containers, iterators serve another important pur-
pose in the STL. They determine which algorithms can be used with which containers. Why is
this necessary?
In some theoretical sense you should be able to apply every algorithm to every container. And,
in fact, many algorithms will work with all the STL containers. However, it turns out that some
algorithms are very inefficient (that is, slow) when used with some containers. The sort()
algorithm, for example, needs random access to the container it’s trying to sort; otherwise, it
would need to iterate through the container to find each element before moving it, a time-
consuming approach. Similarly, to be efficient, the reverse() algorithm needs to iterate back-
ward as well as forward through a container.
Iterators provide a surprisingly elegant way to match appropriate algorithms with containers.
As we noted, you can think of an iterator as a cable, like the cable used to connect a computer
and printer. One end of the cable plugs into a container, and the other plugs into an algorithm.
However, not all cables plug into all containers, and not all cables plug into all algorithms. If
you try to use an algorithm that’s too powerful for a given container type, you won’t be able to
find a cable (an iterator) to connect them. If you try it, you will receive a compiler error alert-
ing you to the problem.

How many kinds of iterators do you need to make this scheme work? As it turns out,
only five types are necessary.
these five categories, arranged from bottom to
top in order of increasing sophistication (input and output are equally unsophisticated).

If an algorithm needs only to step forward through a container, reading (but not writing to) one
item after another, it can use an input iterator to connect itself to the container. Actually, input
iterators are typically used, not with containers, but when reading from files or cin .
If an algorithm steps through the container in a forward direction but writes to the container
instead of reading from it, it can use an output iterator. Output iterators are typically used when
writing to files or cout .
If an algorithm steps along forward and may either read from or write to a container, it must
use a forward iterator.
If an algorithm must be able to step both forward and back through a container, it must use a
bidirectional iterator.

Finally, if an algorithm must access any item in the container instantly, without stepping along
to it, it must use a random access iterator. Random access iterators are like arrays, in that you
can access any element. They are the only iterators that can be manipulated with arithmetic
operations, as in
iter2 = iter1 + 7;
If you confine yourself to the basic STL containers, you will be using only two kinds of itera-
tors. the vector and deque accept any kind of iterator, while the list,
set, multiset, map, and multimap accept anything except the random iterator.

How does the STL enforce the use of the correct iterator for a given container? When you
define an iterator you must specify what kind of container it will be used for. For example, if
you’ve defined a list holding elements of type int
list<int> iList;
//list of ints
then to define an iterator to this list you say
list<int>::iterator iter;
//iterator to list-of-ints
When you do this, the STL automatically makes this iterator a bidirectional iterator, because
that’s what a list requires. An iterator to a vector or a deque is automatically created as a
random-access iterator.
This automatic selection process is implemented by causing an iterator class for a specific con-
tainer to be derived (inherited) from a more general iterator class that’s appropriate to a spe-
cific container. Thus the iterators to vectors and deques are derived from the random_access_
iterator class, while iterators to lists are derived from the bidirectional_iterator class.

Overlapping Member Functions and Algorithms
Sometimes you must choose between using a member function or an algorithm with the same
name. The find() algorithm, for example, requires only an input iterator, so it can be used
with any container. However, sets and maps have their own find() member function (unlike
sequential containers). Which version of find() should you use? Generally, if a member-
function version exists, it’s because, for that container, the algorithm version is not as efficient
as it could be; so in these cases you should probably use the member-function version.

Iterators at Work
Using iterators is considerably simpler than talking about them. We’ve already seen several
examples of one of the more common uses, where iterator values are returned by a container’s
begin() and end() member functions. We’ve disguised the fact that these functions return iter-
ator values by treating them as if they were pointers.
Data Access
In containers that provide random access iterators (vector and queue) it’s easy to iterate
through the container using the [] operator. Containers such as lists, which don’t support ran-
dom access, require a different approach. In previous examples we’ve used a “destructive read-
out” to display the contents of a list by popping off the items one by one, as in the LIST
 *
 *
 * */
