#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class ZombieModeDescController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "ZombieModeDescController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446ABD4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446ACE0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446AD84))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446AE2C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446AED4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446B3C4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446B3CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446B3D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446B3DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ZombieModeDescController*))(Il2CppBase() + 0x446B3E4))(this);
	}

};

}
