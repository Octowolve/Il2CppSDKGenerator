#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetBackgroundColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetBackgroundColor"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& backgroundColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetBackgroundColor*))(Il2CppBase() + 0x4FB5D74))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetBackgroundColor*))(Il2CppBase() + 0x4FB5DC4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetBackgroundColor*))(Il2CppBase() + 0x4FB5F18))(this);
	}
	template <typename T = void> T DoSetBackgroundColor() {
		return ((T (*)(SetBackgroundColor*))(Il2CppBase() + 0x4FB5DF0))(this);
	}

};

}
