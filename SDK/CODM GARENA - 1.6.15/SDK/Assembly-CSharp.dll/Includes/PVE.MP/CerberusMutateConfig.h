#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class CerberusMutateConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "CerberusMutateConfig"));
	}

	template <typename T = Il2CppString*> T& moveDestName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& moveSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mutateAnim() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppVector3> T get_movePosition() {
		return ((T (*)(CerberusMutateConfig*))(Il2CppBase() + 0x45FD7D8))(this);
	}
	template <typename T = Il2CppQuaternion> T get_moveRotation() {
		return ((T (*)(CerberusMutateConfig*))(Il2CppBase() + 0x45FD998))(this);
	}
	template <typename T = float> T get_mutateAnimLen() {
		return ((T (*)(CerberusMutateConfig*))(Il2CppBase() + 0x45FDB58))(this);
	}

};

}
