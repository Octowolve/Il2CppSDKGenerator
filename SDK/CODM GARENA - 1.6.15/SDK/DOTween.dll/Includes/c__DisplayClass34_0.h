#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass340
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass34_0"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& offsetYSet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& offsetY() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& s() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& endValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& startPosY() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppVector3> T DOJumpb__0() {
		return ((T (*)(cDisplayClass340*))(Il2CppBase() + 0x51D2BB4))(this);
	}
	template <typename T = void> T DOJumpb__1() {
		return ((T (*)(cDisplayClass340*))(Il2CppBase() + 0x51D2BE0))(this);
	}
	template <typename T = Il2CppVector3> T DOJumpb__2() {
		return ((T (*)(cDisplayClass340*))(Il2CppBase() + 0x51D2DE4))(this);
	}
	template <typename T = Il2CppVector3> T DOJumpb__3() {
		return ((T (*)(cDisplayClass340*))(Il2CppBase() + 0x51D2E10))(this);
	}

};

}
