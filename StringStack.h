#ifndef _STRINGSTACK_
#define _STRINGSTACK_
#include <string>

class StringStack 
{
public:
  virtual std::string pop() = 0;
  virtual void push(std::string) = 0;
  virtual bool isEmpty() = 0;
private:
	std::string stack[256];
};

#endif
