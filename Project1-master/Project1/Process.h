#pragma once
#include <string>
#include"LinkedQueue.h"
#include"Node.h"
#include"QueueADT.h"
using namespace std;
class Process
{
private:
	int PID;
	int AT;
	int CT;
	int RT;
	int TT;
	int TRT;
	int WT;
	string State;
	LinkedQueue<int*> IO_Pairs;
public:
	Process();
	void setPID(int x);
	int getPID();
	void setAT(int x);
	int getAT();
	void setCT(int x);
	int getCT();
	void setRT(int x);
	int getRT();
	void setTT(int x);
	int getTT();
	void setTRT(int x);
	int getTRT();
	void setWT(int x);
	int getWT();
	void setState(string x);
	void addIO_Pairs(int IO_R, int IO_D);
	string getState();
};