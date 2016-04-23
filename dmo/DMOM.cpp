/****************************************************************************
* Created for: AGE v2
* Dev line: AGE v2
* Creation day: 08/02/2016
* Last change: 24/03/2016
****************************************************************************/


#include "DMOM.h"


//---------------------------------------------------------------------------

DMOM::DMOM(){

	this->event_index = nullptr;
	this->image_index = nullptr;
	this->window_index = nullptr;

}

DMOM::~DMOM(){
}


//---------------------------------------------------------------------------

AGE_EventIndex* DMOM::dmom_eventIndex_get()
{
	return this->event_index;
}


//---------------------------------------------------------------------------

bool DMOM::dmom_eventIndex_set(AGE_EventIndex* pointer)
{
	this->event_index = pointer;
	return true;
}


//---------------------------------------------------------------------------

AGE_ImageIndex * DMOM::dmom_imageIndex_get()
{
	return this->image_index;
}


//---------------------------------------------------------------------------

bool DMOM::dmom_imageIndex_set(AGE_ImageIndex * pointer)
{
	this->image_index = pointer;
	return true;
}


//---------------------------------------------------------------------------

AGE_WindowIndex * DMOM::dmom_windowIndex_get()
{
	return this->window_index;
}


//---------------------------------------------------------------------------

bool DMOM::dmom_windowIndex_set(AGE_WindowIndex* pointer)
{
	this->window_index = pointer;
	return true;
}


//---------------------------------------------------------------------------
