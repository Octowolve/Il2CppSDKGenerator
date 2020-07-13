#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ClientSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ClientSystem"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ClientSystem*))(Il2CppBase() + 0x419909C))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(ClientSystem*, float))(Il2CppBase() + 0x4199134))(this, deltaTime);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ClientSystem*))(Il2CppBase() + 0x41991D4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ClientSystem*))(Il2CppBase() + 0x419926C))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(ClientSystem*, bool))(Il2CppBase() + 0x4199304))(this, pause);
	}

};

}
