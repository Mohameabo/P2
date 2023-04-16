#include "Scheduler.h"
#include<fstream>
#include<iostream>
#include"LinkedQueue.h"
#include"QueueADT.h"
void Scheduler::LoadFile(string fileName)
{
	ifstream fin("ex.txt");
	/*int NumOfFCFS, NumOfSJF, NumOfRR, TimeSliceForRR, Tf, MaxW, STL, forkP, NumofProcess;*/
	fin >> NumOfFCFS >> NumOfSJF >> NumOfRR >> TimeSliceForRR >> Tf >> MaxW >> STL >> forkP >> NumofProcess;
		for (int i = 0; i < NumofProcess; i++)
	{
		int AT, PID, CT, N, x;
		fin >> AT >> PID >> CT >> N;
		Process* NewProcessPtr = new Process;
		NewProcessPtr->setAT(AT);
		NewProcessPtr->setPID(PID);
		NewProcessPtr->setCT(CT);
		for (int i = 1; i <= N; i++)
		{
			char ignore;
			int IoR, IoD;
			fin >> ignore;
			fin >> IoR;
			fin >> ignore;
			fin >> IoD;
			NewProcessPtr->addIO_Pairs(IoR, IoR);
			fin >> ignore;
			if (i < N)
				fin >> ignore;
		}
		NEW.enqueue(NewProcessPtr);
	}
}
