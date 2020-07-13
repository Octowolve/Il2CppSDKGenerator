#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class BrandVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "BrandVolume"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Brands() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& Triggered() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerShowBrand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerHideBrand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSignboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TriggerShowBrand() {
		return ((T (*)(BrandVolume*))(Il2CppBase() + 0x3956684))(this);
	}
	template <typename T = void> T TriggerHideBrand() {
		return ((T (*)(BrandVolume*))(Il2CppBase() + 0x39567F8))(this);
	}
	template <typename T = void> T ShowSignboard(bool show) {
		return ((T (*)(BrandVolume*, bool))(Il2CppBase() + 0x39569B0))(this, show);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BrandVolume*, uintptr_t))(Il2CppBase() + 0x3956B28))(this, other);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(BrandVolume*, uintptr_t))(Il2CppBase() + 0x3956DAC))(this, P0);
	}

};

}
