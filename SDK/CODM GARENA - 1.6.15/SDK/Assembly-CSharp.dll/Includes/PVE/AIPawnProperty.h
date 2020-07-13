#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnProperty"));
	}

	template <typename T = float> T& Health() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Damage() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& AttackRange() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& ProjAttackRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& AITemplate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& VisionDist() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& WeaponName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& WeaponConfig() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_ActorType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToAIPawnData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_ActorType() {
		return ((T (*)(AIPawnProperty*))(Il2CppBase() + 0x49AB524))(this);
	}
	template <typename T = void> T set_ActorType(uintptr_t value) {
		return ((T (*)(AIPawnProperty*, uintptr_t))(Il2CppBase() + 0x49AB52C))(this, value);
	}
	template <typename T = uintptr_t> T ToAIPawnData() {
		return ((T (*)(AIPawnProperty*))(Il2CppBase() + 0x49AB534))(this);
	}

};

}
