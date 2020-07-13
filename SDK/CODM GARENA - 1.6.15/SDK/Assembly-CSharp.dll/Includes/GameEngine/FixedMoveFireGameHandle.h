#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class FixedMoveFireGameHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "FixedMoveFireGameHandle"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InRotationArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T InRotationArea(Il2CppVector2 initialPosition) {
		return ((T (*)(FixedMoveFireGameHandle*, Il2CppVector2))(Il2CppBase() + 0x51BF8F8))(this, initialPosition);
	}
	template <typename T = bool> T xLuaBaseProxy_InRotationArea(Il2CppVector2 P0) {
		return ((T (*)(FixedMoveFireGameHandle*, Il2CppVector2))(Il2CppBase() + 0x51BF9B8))(this, P0);
	}

};

}
