#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetComponent"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeComponent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetComponent*))(Il2CppBase() + 0x50879D4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetComponent*))(Il2CppBase() + 0x50879E8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetComponent*))(Il2CppBase() + 0x5087B6C))(this);
	}
	template <typename T = void> T DoGetComponent() {
		return ((T (*)(GetComponent*))(Il2CppBase() + 0x5087A14))(this);
	}

};

}
