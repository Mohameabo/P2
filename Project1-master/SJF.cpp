#include"SJF.h"
SJF::SJF()
{

}
//void SJF::ScheduleAlgo()
//{
//
//}
void SJF::insertToRDY(Process* r)
{
	RDY.enqueue(r);
}
Process* SJF::RemoveFromRDY(Process*r)
{
	RDY.dequeue(r);
}