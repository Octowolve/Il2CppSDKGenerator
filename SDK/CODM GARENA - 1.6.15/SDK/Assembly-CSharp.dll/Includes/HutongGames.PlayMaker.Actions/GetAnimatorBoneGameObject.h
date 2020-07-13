#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorBoneGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorBoneGameObject"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& bone() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& boneGameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorBoneGameObject*))(Il2CppBase() + 0x5055128))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorBoneGameObject*))(Il2CppBase() + 0x50551D8))(this);
	}
	template <typename T = void> T GetBoneTransform() {
		return ((T (*)(GetAnimatorBoneGameObject*))(Il2CppBase() + 0x5055340))(this);
	}

};

}
