#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class RagdollJoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "RagdollJoint"));
	}

	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCollisionEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T OnDestroy() {
		return ((T (*)(RagdollJoint*))(Il2CppBase() + 0x2DD8064))(this);
	}
	template <typename T = void> T OnCollisionEnter(uintptr_t collision) {
		return ((T (*)(RagdollJoint*, uintptr_t))(Il2CppBase() + 0x2DD8190))(this, collision);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(RagdollJoint*))(Il2CppBase() + 0x2DD8500))(this);
	}

};

}
