#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIPawnAnimationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIPawnAnimationComponent"));
	}

	template <typename T = uintptr_t> T& MyPawn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Init(uintptr_t mesh) {
		return ((T (*)(AIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x49AA740))(this, mesh);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(AIPawnAnimationComponent*, uintptr_t))(Il2CppBase() + 0x49AA81C))(this, P0);
	}

};

}
