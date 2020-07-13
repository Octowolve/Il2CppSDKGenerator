#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class CerberusFireBallConfigBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "CerberusFireBallConfigBase"));
	}

	template <typename T = uintptr_t> T& prepAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& endAttackAnim() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& fireTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& fireInterval() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& fireCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& projConfig() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fireBallConfig() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_prepareAnimLen() {
		return ((T (*)(CerberusFireBallConfigBase*))(Il2CppBase() + 0x45FD658))(this);
	}
	template <typename T = float> T get_endAttackAnimLen() {
		return ((T (*)(CerberusFireBallConfigBase*))(Il2CppBase() + 0x45FD668))(this);
	}

};

}
