#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenPause
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenPause"));
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
		return ((T (*)(iTweenPause*))(Il2CppBase() + 0x4D652C4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenPause*))(Il2CppBase() + 0x4D652D4))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenPause*))(Il2CppBase() + 0x4D65300))(this);
	}

};

}
