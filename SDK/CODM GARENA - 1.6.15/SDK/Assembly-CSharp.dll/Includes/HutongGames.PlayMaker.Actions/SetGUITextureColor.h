#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUITextureColor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUITextureColor"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUITextureColor*))(Il2CppBase() + 0x4FBDD50))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGUITextureColor*))(Il2CppBase() + 0x4FBDDA0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGUITextureColor*))(Il2CppBase() + 0x4FBDEF4))(this);
	}
	template <typename T = void> T DoSetGUITextureColor() {
		return ((T (*)(SetGUITextureColor*))(Il2CppBase() + 0x4FBDDCC))(this);
	}

};

}
