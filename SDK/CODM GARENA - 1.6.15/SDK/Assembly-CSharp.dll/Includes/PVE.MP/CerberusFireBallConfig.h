#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class CerberusFireBallConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "CerberusFireBallConfig"));
	}

	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& attackNodeName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& startFireAngle() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& endFireAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_attackNode() {
		return ((T (*)(CerberusFireBallConfig*))(Il2CppBase() + 0x45FD3B0))(this);
	}

};

}
