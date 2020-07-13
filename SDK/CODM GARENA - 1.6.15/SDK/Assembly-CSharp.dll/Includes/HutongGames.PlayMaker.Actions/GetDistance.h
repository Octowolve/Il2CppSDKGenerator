#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetDistance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetDistance"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetDistance*))(Il2CppBase() + 0x5088988))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetDistance*))(Il2CppBase() + 0x50889A4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetDistance*))(Il2CppBase() + 0x5088BD0))(this);
	}
	template <typename T = void> T DoGetDistance() {
		return ((T (*)(GetDistance*))(Il2CppBase() + 0x50889D0))(this);
	}

};

}
