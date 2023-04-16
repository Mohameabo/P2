#pragma once
#include"Process.h"
class Processor
	{
	private:
		Process* RUN;
		int IndState;
	public:
		Processor() {
			RUN = NULL;
			IndState = 0;
		}
		virtual void ScheduleAlgo() = 0;
		virtual void insertToRDY() = 0;
		virtual Process* RemoveFromRDY(Process* r) = 0;
		virtual bool PrcsrState() {
			if (RUN)
			{
				IndState = 1;
				return true; //Processor is BUSY
			}
			else
			{
				IndState = 0;
				return false; //Processor is IDLE
			}
		}
	};

