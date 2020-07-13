#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PandoraLiveController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PandoraLiveController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPandoraPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRootPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFCD0C))(this);
	}
	template <typename T = void> T OpenPandoraPanel() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFCE20))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(PandoraLiveController*, uintptr_t))(Il2CppBase() + 0x3EFCED4))(this, closeType);
	}
	template <typename T = void> T OnReturnButtonClick() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFCF88))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD130))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD1D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD27C))(this);
	}
	template <typename T = Il2CppString*> T GetRootPath() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(PandoraLiveController*, uintptr_t))(Il2CppBase() + 0x3EFD65C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReturnButtonClick() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD664))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD66C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD674))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PandoraLiveController*))(Il2CppBase() + 0x3EFD67C))(this);
	}

};

}
