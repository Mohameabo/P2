#include"FCFS.h"
#include"Node.h"
FCFS::FCFS()
{
}
//void FCFS::ScheduleAlgo()
//{
//
//}
void FCFS::insertToRDY(Process* r)
{
	RDY.InsertEnd(r);
}
Process* FCFS::RemoveFromRDY(Process* r)
{
	RDY.DeleteFirst(r);
}