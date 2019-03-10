// dllmain.h : Declaration of module class.

class CAtlServerLibModule : public ATL::CAtlDllModuleT< CAtlServerLibModule >
{
public :
	DECLARE_LIBID(LIBID_AtlServerLibLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLSERVERLIB, "{D8D26203-1333-45F9-AB19-45847B988B2A}")
};

extern class CAtlServerLibModule _AtlModule;
