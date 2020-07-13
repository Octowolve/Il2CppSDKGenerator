#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetColorRGBA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetColorRGBA"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeRed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& storeGreen() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeBlue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeAlpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetColorRGBA*))(Il2CppBase() + 0x5087870))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetColorRGBA*))(Il2CppBase() + 0x508788C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetColorRGBA*))(Il2CppBase() + 0x50879C8))(this);
	}
	template <typename T = void> T DoGetColorRGBA() {
		return ((T (*)(GetColorRGBA*))(Il2CppBase() + 0x50878B8))(this);
	}

};

}
