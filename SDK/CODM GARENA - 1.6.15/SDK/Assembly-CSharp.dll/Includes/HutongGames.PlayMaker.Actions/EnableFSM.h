#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class EnableFSM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "EnableFSM"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& enable() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& resetOnExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& fsmComponent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(EnableFSM*))(Il2CppBase() + 0x4FCC1AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(EnableFSM*))(Il2CppBase() + 0x4FCC2A0))(this);
	}
	template <typename T = void> T DoEnableFSM() {
		return ((T (*)(EnableFSM*))(Il2CppBase() + 0x4FCC2C0))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(EnableFSM*))(Il2CppBase() + 0x4FCC62C))(this);
	}

};

}
