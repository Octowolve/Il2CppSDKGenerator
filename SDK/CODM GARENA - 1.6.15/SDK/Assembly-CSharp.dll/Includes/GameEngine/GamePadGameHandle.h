#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GamePadGameHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GamePadGameHandle"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateJoysticks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessDeltaRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateJoysticks(Il2CppList<uintptr_t>* playerInputList) {
		return ((T (*)(GamePadGameHandle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36DEDF0))(this, playerInputList);
	}
	template <typename T = void> T ProcessDeltaRotation(Il2CppVector2 deltaPos) {
		return ((T (*)(GamePadGameHandle*, Il2CppVector2))(Il2CppBase() + 0x36DF11C))(this, deltaPos);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateJoysticks(Il2CppList<uintptr_t>* P0) {
		return ((T (*)(GamePadGameHandle*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x36DF5E0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessDeltaRotation(Il2CppVector2 P0) {
		return ((T (*)(GamePadGameHandle*, Il2CppVector2))(Il2CppBase() + 0x36DF5E4))(this, P0);
	}

};

}
