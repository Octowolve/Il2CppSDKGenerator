#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAxis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAxis"));
	}

	template <typename T = uintptr_t> T& axisName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& multiplier() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& store() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAxis*))(Il2CppBase() + 0x5085844))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAxis*))(Il2CppBase() + 0x508592C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAxis*))(Il2CppBase() + 0x5085AA0))(this);
	}
	template <typename T = void> T DoGetAxis() {
		return ((T (*)(GetAxis*))(Il2CppBase() + 0x5085958))(this);
	}

};

}
