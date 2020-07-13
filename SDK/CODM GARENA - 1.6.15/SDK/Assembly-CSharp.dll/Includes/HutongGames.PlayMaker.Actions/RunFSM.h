#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RunFSM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RunFSM"));
	}

	template <typename T = uintptr_t> T& fsmTemplateControl() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RunFSM*))(Il2CppBase() + 0x4FABD68))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RunFSM*))(Il2CppBase() + 0x4FABE04))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RunFSM*))(Il2CppBase() + 0x4FABF0C))(this);
	}
	template <typename T = void> T CheckIfFinished() {
		return ((T (*)(RunFSM*))(Il2CppBase() + 0x4FABFF8))(this);
	}

};

}
