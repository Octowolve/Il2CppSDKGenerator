#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUITextureAlpha
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUITextureAlpha"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& alpha() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUITextureAlpha*))(Il2CppBase() + 0x4FBDAD8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGUITextureAlpha*))(Il2CppBase() + 0x4FBDB08))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGUITextureAlpha*))(Il2CppBase() + 0x4FBDCC8))(this);
	}
	template <typename T = void> T DoGUITextureAlpha() {
		return ((T (*)(SetGUITextureAlpha*))(Il2CppBase() + 0x4FBDB34))(this);
	}

};

}
