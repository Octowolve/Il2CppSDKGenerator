#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DelAccTimeoutPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelAccTimeoutPopController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DelAccTimeoutPopController*))(Il2CppBase() + 0x41739F8))(this);
	}
	template <typename T = void> T SetUI() {
		return ((T (*)(DelAccTimeoutPopController*))(Il2CppBase() + 0x4173B0C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DelAccTimeoutPopController*))(Il2CppBase() + 0x4173DB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DelAccTimeoutPopController*))(Il2CppBase() + 0x4173E54))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DelAccTimeoutPopController*))(Il2CppBase() + 0x4173E5C))(this);
	}

};

}
