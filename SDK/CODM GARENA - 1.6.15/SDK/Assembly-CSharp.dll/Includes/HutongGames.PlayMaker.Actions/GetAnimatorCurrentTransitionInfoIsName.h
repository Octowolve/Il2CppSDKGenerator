#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorCurrentTransitionInfoIsName
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorCurrentTransitionInfoIsName"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& nameMatch() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& nameMatchEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& nameDoNotMatchEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorCurrentTransitionInfoIsName*))(Il2CppBase() + 0x5056AF8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorCurrentTransitionInfoIsName*))(Il2CppBase() + 0x5056B1C))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorCurrentTransitionInfoIsName*))(Il2CppBase() + 0x5056E50))(this);
	}
	template <typename T = void> T IsName() {
		return ((T (*)(GetAnimatorCurrentTransitionInfoIsName*))(Il2CppBase() + 0x5056C94))(this);
	}

};

}
