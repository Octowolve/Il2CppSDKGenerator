#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMouseY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMouseY"));
	}

	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& normalize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMouseY*))(Il2CppBase() + 0x508F320))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMouseY*))(Il2CppBase() + 0x508F334))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetMouseY*))(Il2CppBase() + 0x508F448))(this);
	}
	template <typename T = void> T DoGetMouseY() {
		return ((T (*)(GetMouseY*))(Il2CppBase() + 0x508F338))(this);
	}

};

}
