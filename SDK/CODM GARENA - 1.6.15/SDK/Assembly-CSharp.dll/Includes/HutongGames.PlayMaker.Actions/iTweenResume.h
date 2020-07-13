#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenResume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenResume"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& iTweenType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& includeChildren() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& inScene() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenResume*))(Il2CppBase() + 0x4D6818C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenResume*))(Il2CppBase() + 0x4D6819C))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenResume*))(Il2CppBase() + 0x4D681C8))(this);
	}

};

}
