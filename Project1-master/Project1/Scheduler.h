#pragma once
#include"LinkedQueue.h"
#include"Process.h"
#include"QueueADT.h"
#include<string>
class Scheduler
{
private:
	//processor* ArrOfprocessor=new processor[NumOfFCFS+NumOfSJF+NumOfRR];
	int NumOfFCFS, NumOfSJF, NumOfRR, TimeSliceForRR, Tf, MaxW, STL, forkP, NumofProcess;
	LinkedQueue <Process*> NEW,BLK,TRM;
public:
	void LoadFile(string fileName );
};

