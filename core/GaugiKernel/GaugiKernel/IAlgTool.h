#ifndef IAlgTool_h
#define IAlgTool_h

#include "GaugiKernel/DataHandle.h"
#include "GaugiKernel/StoreGate.h"
#include "GaugiKernel/StatusCode.h"
#include "GaugiKernel/Property.h"
#include "GaugiKernel/MsgStream.h"




namespace Gaugi{


	class IAlgTool
	{
	
	  public:
	    
			/*! Destructor */
	    virtual ~IAlgTool() {};

			/*! Create all resouces here */    
	    virtual StatusCode initialize()=0;
			
			/*! Destroy all allocated memory and close all services */
			virtual StatusCode finalize()=0;

	};

	

}// namespace
#endif
