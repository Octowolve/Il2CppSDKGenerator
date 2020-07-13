#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetProperty"));
	}

	template <typename T = uintptr_t> T& targetProperty() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetProperty*))(Il2CppBase() + 0x508FEC0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetProperty*))(Il2CppBase() + 0x508FF6C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetProperty*))(Il2CppBase() + 0x508FFB4))(this);
	}

};

}
