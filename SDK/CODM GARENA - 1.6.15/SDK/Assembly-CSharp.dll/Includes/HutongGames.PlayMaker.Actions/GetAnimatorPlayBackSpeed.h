#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorPlayBackSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorPlayBackSpeed"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& playBackSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x505A854))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x505A868))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x505AAD4))(this);
	}
	template <typename T = void> T GetPlayBackSpeed() {
		return ((T (*)(GetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x505A9E0))(this);
	}

};

}
