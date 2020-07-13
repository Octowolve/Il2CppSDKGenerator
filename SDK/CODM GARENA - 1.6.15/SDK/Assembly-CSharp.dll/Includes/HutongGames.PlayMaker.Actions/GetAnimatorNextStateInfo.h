#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetAnimatorNextStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetAnimatorNextStateInfo"));
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
	template <typename T = uintptr_t> T& nameHash() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fullPathHash() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& shortPathHash() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& tagHash() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& isStateLooping() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& length() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& normalizedTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& loopCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& currentLoopProgress() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetAnimatorNextStateInfo*))(Il2CppBase() + 0x5059F34))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetAnimatorNextStateInfo*))(Il2CppBase() + 0x5059F60))(this);
	}
	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(GetAnimatorNextStateInfo*))(Il2CppBase() + 0x505A53C))(this);
	}
	template <typename T = void> T GetLayerInfo() {
		return ((T (*)(GetAnimatorNextStateInfo*))(Il2CppBase() + 0x505A0D8))(this);
	}

};

}
