#include "Process.h"
Process::Process()
{
}
void Process::setPID(int x)
{
	PID = x;
}
int Process::getPID()
{
	return PID;
}
void Process::setAT(int x)
{
	AT = x;
}
int Process::getAT()
{
	return AT;
}
void Process::setCT(int x)
{
	CT = x;
}
int Process::getCT()
{
	return CT;
}
void Process::setRT(int x)
{
	RT = x;
}
int Process::getRT()
{
	return RT;
}
void Process::setTT(int x)
{
	TT = x;
}
int Process::getTT()
{
	return TT;
}
void Process::setTRT(int x)
{
	TRT = x;
}
int Process::getTRT()
{
	return TRT;
}
void Process::setWT(int x)
{
	WT = x;
}
int Process::getWT()
{
	return WT;
}
void Process::setState(string x)
{
	State = x;
}
void Process::addIO_Pairs(int IO_R, int IO_D)
{
	int Pairs[2];
	Pairs[0] = IO_R;
	Pairs[1] = IO_D;
	IO_Pairs.enqueue(Pairs);
}
string Process::getState() {
	return State;
}