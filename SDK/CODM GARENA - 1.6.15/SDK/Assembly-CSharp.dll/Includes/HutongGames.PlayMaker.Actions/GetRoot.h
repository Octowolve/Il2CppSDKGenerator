#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRoot"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeRoot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRoot*))(Il2CppBase() + 0x5091E58))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRoot*))(Il2CppBase() + 0x5091E64))(this);
	}
	template <typename T = void> T DoGetRoot() {
		return ((T (*)(GetRoot*))(Il2CppBase() + 0x5091E84))(this);
	}

};

}
