#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTan"));
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
		return ((T (*)(GetTan*))(Il2CppBase() + 0x4EFFC14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTan*))(Il2CppBase() + 0x4EFFC48))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTan*))(Il2CppBase() + 0x4EFFD84))(this);
	}
	template <typename T = void> T DoTan() {
		return ((T (*)(GetTan*))(Il2CppBase() + 0x4EFFC74))(this);
	}

};

}
