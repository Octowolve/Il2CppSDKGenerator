#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetChildCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetChildCount"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetChildCount*))(Il2CppBase() + 0x50871A4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetChildCount*))(Il2CppBase() + 0x50871B0))(this);
	}
	template <typename T = void> T DoGetChildCount() {
		return ((T (*)(GetChildCount*))(Il2CppBase() + 0x50871D0))(this);
	}

};

}
