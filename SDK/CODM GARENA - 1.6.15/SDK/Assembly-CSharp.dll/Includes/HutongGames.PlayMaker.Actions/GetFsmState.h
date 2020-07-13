#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmState"));
	}

	template <typename T = uintptr_t> T& fsmComponent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmState*))(Il2CppBase() + 0x508BCC8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmState*))(Il2CppBase() + 0x508BDA0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmState*))(Il2CppBase() + 0x508C070))(this);
	}
	template <typename T = void> T DoGetFsmState() {
		return ((T (*)(GetFsmState*))(Il2CppBase() + 0x508BDCC))(this);
	}

};

}
