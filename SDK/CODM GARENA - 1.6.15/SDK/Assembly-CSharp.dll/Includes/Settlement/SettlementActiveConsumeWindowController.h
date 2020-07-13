#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementActiveConsumeWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementActiveConsumeWindowController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetStartLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEndLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_settlementDS() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B550C4))(this);
	}
	template <typename T = uintptr_t> T get_actvDS() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B55160))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B551FC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B552A0))(this);
	}
	template <typename T = int32_t> T GetStartLevel() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B5573C))(this);
	}
	template <typename T = int32_t> T GetEndLevel() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B559AC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B55D28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementActiveConsumeWindowController*))(Il2CppBase() + 0x3B55D30))(this);
	}

};

}
