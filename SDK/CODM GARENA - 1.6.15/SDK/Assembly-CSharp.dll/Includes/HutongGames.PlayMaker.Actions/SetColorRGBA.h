#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetColorRGBA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetColorRGBA"));
	}

	template <typename T = uintptr_t> T& colorVariable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& red() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& green() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& blue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& alpha() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetColorRGBA*))(Il2CppBase() + 0x4FB6478))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetColorRGBA*))(Il2CppBase() + 0x4FB64E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetColorRGBA*))(Il2CppBase() + 0x4FB6654))(this);
	}
	template <typename T = void> T DoSetColorRGBA() {
		return ((T (*)(SetColorRGBA*))(Il2CppBase() + 0x4FB6510))(this);
	}

};

}
