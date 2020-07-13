#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class DashConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "DashConfig"));
	}

	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& prepAnimLen() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& dashCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& startAnim() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& dashAnim() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& damage() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& damageRadius() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& tiredAnim() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& fireResidualWidth() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& fireResidualDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& residualFireDamage() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& fireResidualAssetID() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_startAnimLen() {
		return ((T (*)(DashConfig*))(Il2CppBase() + 0x45FE02C))(this);
	}
	template <typename T = float> T get_dashAnimLen() {
		return ((T (*)(DashConfig*))(Il2CppBase() + 0x45FE03C))(this);
	}
	template <typename T = float> T get_tiredAnimLen() {
		return ((T (*)(DashConfig*))(Il2CppBase() + 0x45FE04C))(this);
	}

};

}
