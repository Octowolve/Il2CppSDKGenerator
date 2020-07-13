#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetMouseButtonUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetMouseButtonUp"));
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
		return ((T (*)(GetMouseButtonUp*))(Il2CppBase() + 0x508F0B8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetMouseButtonUp*))(Il2CppBase() + 0x508F0D4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetMouseButtonUp*))(Il2CppBase() + 0x508F1E0))(this);
	}
	template <typename T = void> T DoGetMouseButtonUp() {
		return ((T (*)(GetMouseButtonUp*))(Il2CppBase() + 0x508F0E4))(this);
	}

};

}
