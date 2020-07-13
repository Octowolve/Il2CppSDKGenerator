#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementMedalWindowViewEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementMedalWindowViewEN"));
	}

	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MedalTemplate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& AchiveTemplate() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ButtonTemplateConfirm() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnDisable() {
		return ((T (*)(SettlementMedalWindowViewEN*))(Il2CppBase() + 0x296BD8C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t ds) {
		return ((T (*)(SettlementMedalWindowViewEN*, uintptr_t))(Il2CppBase() + 0x296ACE0))(this, ds);
	}
	template <typename T = void> T ClearItem() {
		return ((T (*)(SettlementMedalWindowViewEN*))(Il2CppBase() + 0x296BE3C))(this);
	}
	template <typename T = int32_t> static T UpdateViewm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x296C050))(0, a, b);
	}
	template <typename T = int32_t> static T UpdateViewm__1(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x296C0C4))(0, a, b);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SettlementMedalWindowViewEN*))(Il2CppBase() + 0x296C138))(this);
	}

};

}
