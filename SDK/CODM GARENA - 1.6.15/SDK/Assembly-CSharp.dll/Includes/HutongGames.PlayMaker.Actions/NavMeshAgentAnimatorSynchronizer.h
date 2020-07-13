#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class NavMeshAgentAnimatorSynchronizer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "NavMeshAgentAnimatorSynchronizer"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _agent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _trans() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(NavMeshAgentAnimatorSynchronizer*))(Il2CppBase() + 0x4D7B7CC))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(NavMeshAgentAnimatorSynchronizer*))(Il2CppBase() + 0x4D7B7D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(NavMeshAgentAnimatorSynchronizer*))(Il2CppBase() + 0x4D7B80C))(this);
	}
	template <typename T = void> T DoAnimatorMove() {
		return ((T (*)(NavMeshAgentAnimatorSynchronizer*))(Il2CppBase() + 0x4D7B9A0))(this);
	}

};

}
