﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'StNVList.pas' rev: 28.00 (Windows)

#ifndef StnvlistHPP
#define StnvlistHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <StBase.hpp>	// Pascal unit
#include <StList.hpp>	// Pascal unit
#include <StNVCont.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Stnvlist
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TStNVList;
class PASCALIMPLEMENTATION TStNVList : public Stnvcont::TStNVContainerBase
{
	typedef Stnvcont::TStNVContainerBase inherited;
	
protected:
	Stlist::TStList* FContainer;
	virtual Stbase::TStCompareEvent __fastcall GetOnCompare(void);
	virtual Stnvcont::TStDisposeDataEvent __fastcall GetOnDisposeData(void);
	virtual Stnvcont::TStLoadDataEvent __fastcall GetOnLoadData(void);
	virtual Stnvcont::TStStoreDataEvent __fastcall GetOnStoreData(void);
	virtual void __fastcall SetOnCompare(Stbase::TStCompareEvent Value);
	virtual void __fastcall SetOnDisposeData(Stnvcont::TStDisposeDataEvent Value);
	virtual void __fastcall SetOnLoadData(Stnvcont::TStLoadDataEvent Value);
	virtual void __fastcall SetOnStoreData(Stnvcont::TStStoreDataEvent Value);
	
public:
	__fastcall virtual TStNVList(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TStNVList(void);
	__property Stlist::TStList* Container = {read=FContainer};
	
__published:
	__property OnCompare;
	__property OnDisposeData;
	__property OnLoadData;
	__property OnStoreData;
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Stnvlist */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_STNVLIST)
using namespace Stnvlist;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// StnvlistHPP