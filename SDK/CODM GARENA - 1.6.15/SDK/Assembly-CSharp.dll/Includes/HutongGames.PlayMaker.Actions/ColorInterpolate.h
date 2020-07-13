#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ColorInterpolate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ColorInterpolate"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(ColorInterpolate*))(Il2CppBase() + 0x4F3B2CC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ColorInterpolate*))(Il2CppBase() + 0x4F3B384))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ColorInterpolate*))(Il2CppBase() + 0x4F3B46C))(this);
	}
	template <typename T = Il2CppString*> T ErrorCheck() {
		return ((T (*)(ColorInterpolate*))(Il2CppBase() + 0x4F3B884))(this);
	}

};

}
