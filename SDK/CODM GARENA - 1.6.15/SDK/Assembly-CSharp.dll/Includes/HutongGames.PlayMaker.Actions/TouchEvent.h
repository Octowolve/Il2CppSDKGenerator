#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class TouchEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "TouchEvent"));
	}

	template <typename T = uintptr_t> T& fingerId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& touchPhase() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeFingerId() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TouchEvent*))(Il2CppBase() + 0x4F17E24))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(TouchEvent*))(Il2CppBase() + 0x4F17EE0))(this);
	}

};

}
