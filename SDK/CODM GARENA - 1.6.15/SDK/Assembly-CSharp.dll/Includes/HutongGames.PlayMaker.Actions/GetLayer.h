#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetLayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetLayer"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetLayer*))(Il2CppBase() + 0x508DE50))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetLayer*))(Il2CppBase() + 0x508DE64))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetLayer*))(Il2CppBase() + 0x508DFA8))(this);
	}
	template <typename T = void> T DoGetLayer() {
		return ((T (*)(GetLayer*))(Il2CppBase() + 0x508DE90))(this);
	}

};

}
