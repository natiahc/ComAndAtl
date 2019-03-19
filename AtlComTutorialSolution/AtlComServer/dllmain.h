// dllmain.h : Declaration of module class.

class CAtlComServerModule : public ATL::CAtlDllModuleT< CAtlComServerModule >
{
public :
	DECLARE_LIBID(LIBID_AtlComServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_ATLCOMSERVER, "{6318D01D-4FDA-44C0-BF8D-53C6A9594A75}")
};

extern class CAtlComServerModule _AtlModule;
