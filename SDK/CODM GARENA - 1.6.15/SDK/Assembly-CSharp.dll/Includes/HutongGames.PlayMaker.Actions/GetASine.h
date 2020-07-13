#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetASine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetASine"));
	}

	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& RadToDeg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetASine*))(Il2CppBase() + 0x5084FAC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetASine*))(Il2CppBase() + 0x5084FE0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetASine*))(Il2CppBase() + 0x508511C))(this);
	}
	template <typename T = void> T DoASine() {
		return ((T (*)(GetASine*))(Il2CppBase() + 0x508500C))(this);
	}

};

}
