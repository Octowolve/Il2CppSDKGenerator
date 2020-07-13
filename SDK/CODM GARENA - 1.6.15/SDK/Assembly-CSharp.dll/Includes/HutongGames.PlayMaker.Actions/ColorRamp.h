#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ColorRamp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ColorRamp"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sampleAt() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ColorRamp*))(Il2CppBase() + 0x4F3B92C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ColorRamp*))(Il2CppBase() + 0x4F3B9E0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ColorRamp*))(Il2CppBase() + 0x4F3BD30))(this);
	}
	template <typename T = void> T DoColorRamp() {
		return ((T (*)(ColorRamp*))(Il2CppBase() + 0x4F3BA0C))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ColorRamp*))(Il2CppBase() + 0x4F3BD34))(this);
	}

};

}
