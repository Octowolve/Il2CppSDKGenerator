#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVESettlementDropsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVESettlementDropsView"));
	}

	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& GoTemplate() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& animator() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVESettlementDropsView*))(Il2CppBase() + 0x3B300DC))(this);
	}
	template <typename T = void> T UpdateView(Il2CppList<uintptr_t>* items) {
		return ((T (*)(PVESettlementDropsView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3B2F8A8))(this, items);
	}
	template <typename T = void> T UpdateViewm__0() {
		return ((T (*)(PVESettlementDropsView*))(Il2CppBase() + 0x3B30184))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVESettlementDropsView*))(Il2CppBase() + 0x3B30234))(this);
	}

};

}
