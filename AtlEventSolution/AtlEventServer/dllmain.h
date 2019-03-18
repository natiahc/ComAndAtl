// dllmain.h : Declaration of module class.

class CAtlEventServerModule : public ATL::CAtlDllModuleT< CAtlEventServerModule >
{
public :
	DECLARE_LIBID(LIBID_AtlEventServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLEVENTSERVER, "{15C0E9A5-AEEF-41D8-B7B0-CF40411224A8}")
};

extern class CAtlEventServerModule _AtlModule;
