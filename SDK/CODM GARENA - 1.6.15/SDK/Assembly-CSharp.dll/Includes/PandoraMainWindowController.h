#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraMainWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraMainWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFDE58))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFDF64))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE008))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE0B0))(this);
	}
	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFDAA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE3D0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE3D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE3E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PandoraMainWindowController*))(Il2CppBase() + 0x3EFE3E8))(this);
	}

};

}
