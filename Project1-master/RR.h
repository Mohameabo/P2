#pragma once
#include"Processor.h"
#include"LinkedQueue.h"
class RR :public Processor
{
private:
	LinkedQueue<Process*> RDY;
public:
	RR();
	virtual void ScheduleAlgo();
	virtual void insertToRDY();
};