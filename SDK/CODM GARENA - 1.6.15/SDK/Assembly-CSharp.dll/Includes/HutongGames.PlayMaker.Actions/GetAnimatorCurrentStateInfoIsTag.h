#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorCurrentStateInfoIsTag
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorCurrentStateInfoIsTag"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& layerIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& tag() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& tagMatch() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& tagMatchEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& tagDoNotMatchEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorCurrentStateInfoIsTag*))(Il2CppBase() + 0x5056370))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorCurrentStateInfoIsTag*))(Il2CppBase() + 0x5056394))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorCurrentStateInfoIsTag*))(Il2CppBase() + 0x50566E4))(this);
	}
	template <typename T = void> T IsTag() {
		return ((T (*)(GetAnimatorCurrentStateInfoIsTag*))(Il2CppBase() + 0x505650C))(this);
	}

};

}
