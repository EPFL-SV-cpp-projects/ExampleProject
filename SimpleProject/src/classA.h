#ifndef CLASSA_H
#define CLASSA_H
/*!
  The class A does nothing at all.
 */

class A {
public:
/*!
  \param a (int): an arbitrary int stored in *val*,
*/
    A(const int a);
/*!
  This returns the *val* int. 
*/
    int value() const;

private:
    int val;
};

#endif
