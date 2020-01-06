/*
 *
 *Consider the situation shown in Figure 11.3, with a base class, Parent ; two derived classes,
Child1 and Child2 ; and a fourth class, Grandchild , derived from both Child1 and Child2 .
In this arrangement a problem can arise if a member function in the Grandchild class wants to
access data or functions in the Parent class

// normbase.cpp
// ambiguous reference to base class
class Parent
{
protected:
int basedata;
};
class Child1 : public Parent
{ };
class Child2 : public Parent
{ };
class Grandchild : public Child1, public Child2
{
public:
int getdata()
{ return basedata; }
// ERROR: ambiguous
};


A compiler error occurs when the getdata() member function in Grandchild attempts to
access basedata in Parent . Why? When the Child1 and Child2 classes are derived from
Parent , each inherits a copy of Parent ; this copy is called a subobject. Each of the two subob-
jects contains its own copy of Parent ’s data, including basedata . Now, when Grandchild
refers to basedata , which of the two copies will it access? The situation is ambiguous, and
that’s what the compiler reports.



o eliminate the ambiguity, we make Child1 and Child2 into virtual base classes, as shown by
the example VIRTBASE .
// virtbase.cpp
// virtual base classes
class Parent
{
protected:
int basedata;
};
class Child1 : virtual public Parent
// shares copy of Parent
{ };
class Child2 : virtual public Parent
// shares copy of Parent
{ };
class Grandchild : public Child1, public Child2
{
public:
int getdata()
{ return basedata; }
// OK: only one copy of Parent
};

The use of the keyword virtual in these two classes causes them to share a single common
subobject of their base class Parent . Since there is only one copy of basedata , there is no
ambiguity when it is referred to in Grandchild .
The need for virtual base classes may indicate a conceptual problem with your use of multiple
inheritance, so they should be used with caution.
 * */
