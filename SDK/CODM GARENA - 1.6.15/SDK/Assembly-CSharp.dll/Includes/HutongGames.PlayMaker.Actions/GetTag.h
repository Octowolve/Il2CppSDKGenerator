#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTag"));
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
		return ((T (*)(GetTag*))(Il2CppBase() + 0x4EFF9A0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTag*))(Il2CppBase() + 0x4EFF9B4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTag*))(Il2CppBase() + 0x4EFFAF8))(this);
	}
	template <typename T = void> T DoGetTag() {
		return ((T (*)(GetTag*))(Il2CppBase() + 0x4EFF9E0))(this);
	}

};

}
