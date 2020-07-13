#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetGUITexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetGUITexture"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& texture() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetGUITexture*))(Il2CppBase() + 0x4FBD92C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetGUITexture*))(Il2CppBase() + 0x4FBD938))(this);
	}

};

}
