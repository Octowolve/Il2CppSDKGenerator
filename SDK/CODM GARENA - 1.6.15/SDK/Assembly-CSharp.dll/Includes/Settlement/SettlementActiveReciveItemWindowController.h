#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementActiveReciveItemWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementActiveReciveItemWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementActiveReciveItemWindowController*))(Il2CppBase() + 0x3B56CDC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementActiveReciveItemWindowController*))(Il2CppBase() + 0x3B56D80))(this);
	}
	template <typename T = void> T SetViewInfo(uintptr_t detail) {
		return ((T (*)(SettlementActiveReciveItemWindowController*, uintptr_t))(Il2CppBase() + 0x3B56E84))(this, detail);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementActiveReciveItemWindowController*))(Il2CppBase() + 0x3B574C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementActiveReciveItemWindowController*))(Il2CppBase() + 0x3B574CC))(this);
	}

};

}
