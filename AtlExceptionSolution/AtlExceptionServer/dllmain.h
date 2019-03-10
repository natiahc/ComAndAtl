// dllmain.h : Declaration of module class.

class CAtlExceptionServerModule : public ATL::CAtlDllModuleT< CAtlExceptionServerModule >
{
public :
	DECLARE_LIBID(LIBID_AtlExceptionServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLEXCEPTIONSERVER, "{089866C7-B8E1-4914-B03E-D484D17E701F}")
};

extern class CAtlExceptionServerModule _AtlModule;
