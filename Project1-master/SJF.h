#pragma once
#include"Processor.h"
#include"PriorityQueue.h"
class SJF :public Processor
{
private:
	PriorityQueue<Process*> RDY;
public:
	SJF();
	/*virtual void ScheduleAlgo();*/
	virtual void insertToRDY(Process* r);
	virtual Process* RemoveFromRDY(Process*r);
};