#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRandomChild
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRandomChild"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRandomChild*))(Il2CppBase() + 0x5090458))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRandomChild*))(Il2CppBase() + 0x5090464))(this);
	}
	template <typename T = void> T DoGetRandomChild() {
		return ((T (*)(GetRandomChild*))(Il2CppBase() + 0x5090484))(this);
	}

};

}
