#pragma once
#include"Processor.h"
#include"LinkedList.h"
class FCFS :public Processor
{
private:
	LinkedList<Process*> RDY;
public:
	FCFS();
	/*virtual void ScheduleAlgo();*/
	virtual void insertToRDY(Process* r);
	virtual Process* RemoveFromRDY(Process* r);
};