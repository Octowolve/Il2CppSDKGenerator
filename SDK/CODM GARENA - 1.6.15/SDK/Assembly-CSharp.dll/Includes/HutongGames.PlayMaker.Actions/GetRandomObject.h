#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetRandomObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetRandomObject"));
	}

	template <typename T = uintptr_t> T& withTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetRandomObject*))(Il2CppBase() + 0x509060C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetRandomObject*))(Il2CppBase() + 0x50906A4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetRandomObject*))(Il2CppBase() + 0x5090A28))(this);
	}
	template <typename T = void> T DoGetRandomObject() {
		return ((T (*)(GetRandomObject*))(Il2CppBase() + 0x50906D0))(this);
	}

};

}
