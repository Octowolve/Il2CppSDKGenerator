#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUIText
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUIText"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& text() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUIText*))(Il2CppBase() + 0x4FBD69C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGUIText*))(Il2CppBase() + 0x4FBD768))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetGUIText*))(Il2CppBase() + 0x4FBD8A4))(this);
	}
	template <typename T = void> T DoSetGUIText() {
		return ((T (*)(SetGUIText*))(Il2CppBase() + 0x4FBD794))(this);
	}

};

}
