#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetAnimatorPlayBackTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetAnimatorPlayBackTime"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& playbackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetAnimatorPlayBackTime*))(Il2CppBase() + 0x4FB46F4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetAnimatorPlayBackTime*))(Il2CppBase() + 0x4FB4708))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetAnimatorPlayBackTime*))(Il2CppBase() + 0x4FB4974))(this);
	}
	template <typename T = void> T DoPlaybackTime() {
		return ((T (*)(SetAnimatorPlayBackTime*))(Il2CppBase() + 0x4FB4880))(this);
	}

};

}
