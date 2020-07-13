#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorPlayBackSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorPlayBackSpeed"));
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
		return ((T (*)(SetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x4FB4468))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x4FB447C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x4FB46E8))(this);
	}
	template <typename T = void> T DoPlayBackSpeed() {
		return ((T (*)(SetAnimatorPlayBackSpeed*))(Il2CppBase() + 0x4FB45F4))(this);
	}

};

}
