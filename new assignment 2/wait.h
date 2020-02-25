#ifndef WAIT_H
#define WAIT_H
#include <string>
#include <vector>
#include "wait.h"
#include "Actions.h"

class wait :public Actions
{
public:
	wait(std::vector<std::string>, std::vector<std::string>, std::vector<int> ,std::vector<std::string>,int&);
	void perform();
	~wait();
private:
	std::vector<std::string> copyinitial;
	std::vector<std::string> copydestination;
	std::vector<int> copyinput;
	std::vector<std::string> statesnames;
	int&current;
	int inp,next;
	std::string curr;




};
#endif
