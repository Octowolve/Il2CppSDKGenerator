#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetRandomRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetRandomRotation"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& x() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& y() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& z() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetRandomRotation*))(Il2CppBase() + 0x502AF6C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetRandomRotation*))(Il2CppBase() + 0x502AFC0))(this);
	}
	template <typename T = void> T DoRandomRotation() {
		return ((T (*)(SetRandomRotation*))(Il2CppBase() + 0x502AFE0))(this);
	}

};

}
