#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMouseButtonDown
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMouseButtonDown"));
	}

	template <typename T = uintptr_t> T& button() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& inUpdateOnly() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetMouseButtonDown*))(Il2CppBase() + 0x508EF84))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMouseButtonDown*))(Il2CppBase() + 0x508EFA0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetMouseButtonDown*))(Il2CppBase() + 0x508F0AC))(this);
	}
	template <typename T = void> T DoGetMouseButtonDown() {
		return ((T (*)(GetMouseButtonDown*))(Il2CppBase() + 0x508EFB0))(this);
	}

};

}
