#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorPlayBackTime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorPlayBackTime"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& playBackTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorPlayBackTime*))(Il2CppBase() + 0x5083F70))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorPlayBackTime*))(Il2CppBase() + 0x5083F84))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetAnimatorPlayBackTime*))(Il2CppBase() + 0x50841E8))(this);
	}
	template <typename T = void> T GetPlayBackTime() {
		return ((T (*)(GetAnimatorPlayBackTime*))(Il2CppBase() + 0x50840F4))(this);
	}

};

}
