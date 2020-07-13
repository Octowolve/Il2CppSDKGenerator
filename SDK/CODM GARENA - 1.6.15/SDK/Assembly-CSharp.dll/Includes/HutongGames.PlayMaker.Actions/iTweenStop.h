#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class iTweenStop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "iTweenStop"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& iTweenType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& includeChildren() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& inScene() {
		return *(T*)((uintptr_t)this + 0x35);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(iTweenStop*))(Il2CppBase() + 0x4D740B8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(iTweenStop*))(Il2CppBase() + 0x4D74178))(this);
	}
	template <typename T = void> T DoiTween() {
		return ((T (*)(iTweenStop*))(Il2CppBase() + 0x4D741A4))(this);
	}

};

}
