#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RunFSMParallel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RunFSMParallel"));
	}

	template <typename T = uintptr_t> T& fsmTemplateControl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RunFSMParallel*))(Il2CppBase() + 0x4FAC5EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RunFSMParallel*))(Il2CppBase() + 0x4FAC5F0))(this);
	}

};

}
