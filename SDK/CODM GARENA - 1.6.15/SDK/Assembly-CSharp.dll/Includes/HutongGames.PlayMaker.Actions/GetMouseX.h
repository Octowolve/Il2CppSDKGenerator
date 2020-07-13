#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMouseX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMouseX"));
	}

	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& normalize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMouseX*))(Il2CppBase() + 0x508F1EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMouseX*))(Il2CppBase() + 0x508F200))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetMouseX*))(Il2CppBase() + 0x508F314))(this);
	}
	template <typename T = void> T DoGetMouseX() {
		return ((T (*)(GetMouseX*))(Il2CppBase() + 0x508F204))(this);
	}

};

}
