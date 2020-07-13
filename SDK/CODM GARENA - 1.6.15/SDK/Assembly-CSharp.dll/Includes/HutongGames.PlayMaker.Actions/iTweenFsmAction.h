#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenFsmAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenFsmAction"));
	}

	template <typename T = uintptr_t> T& startEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& realTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& stopOnExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& loopDontFinish() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& itweenEvents() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& itweenType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& itweenID() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenFsmAction*))(Il2CppBase() + 0x4F0B1F0))(this);
	}
	template <typename T = void> T OnEnteriTween(uintptr_t anOwner) {
		return ((T (*)(iTweenFsmAction*, uintptr_t))(Il2CppBase() + 0x4F0B384))(this, anOwner);
	}
	template <typename T = void> T IsLoop(bool aValue) {
		return ((T (*)(iTweenFsmAction*, bool))(Il2CppBase() + 0x4F0B594))(this, aValue);
	}
	template <typename T = void> T OnExitiTween(uintptr_t anOwner) {
		return ((T (*)(iTweenFsmAction*, uintptr_t))(Il2CppBase() + 0x4F0B66C))(this, anOwner);
	}

};

}
