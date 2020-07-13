#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StartLocationServiceUpdates
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StartLocationServiceUpdates"));
	}

	template <typename T = uintptr_t> T& maxWait() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& desiredAccuracy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& updateDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& successEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& failedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(StartLocationServiceUpdates*))(Il2CppBase() + 0x5032D18))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StartLocationServiceUpdates*))(Il2CppBase() + 0x5032D7C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StartLocationServiceUpdates*))(Il2CppBase() + 0x5032D84))(this);
	}

};

}
