#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSine"));
	}

	template <typename T = uintptr_t> T& angle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DegToRad() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSine*))(Il2CppBase() + 0x4EFED3C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSine*))(Il2CppBase() + 0x4EFED70))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSine*))(Il2CppBase() + 0x4EFEEAC))(this);
	}
	template <typename T = void> T DoSine() {
		return ((T (*)(GetSine*))(Il2CppBase() + 0x4EFED9C))(this);
	}

};

}
