#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass680
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass68_0"));
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
		return ((T (*)(cDisplayClass680*))(Il2CppBase() + 0x51D4000))(this);
	}
	template <typename T = void> T DOJumpb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass680*, Il2CppVector3))(Il2CppBase() + 0x51D402C))(this, x);
	}
	template <typename T = void> T DOJumpb__2() {
		return ((T (*)(cDisplayClass680*))(Il2CppBase() + 0x51D4064))(this);
	}
	template <typename T = Il2CppVector3> T DOJumpb__3() {
		return ((T (*)(cDisplayClass680*))(Il2CppBase() + 0x51D4144))(this);
	}
	template <typename T = void> T DOJumpb__4(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass680*, Il2CppVector3))(Il2CppBase() + 0x51D4170))(this, x);
	}
	template <typename T = Il2CppVector3> T DOJumpb__5() {
		return ((T (*)(cDisplayClass680*))(Il2CppBase() + 0x51D41A8))(this);
	}
	template <typename T = void> T DOJumpb__6(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass680*, Il2CppVector3))(Il2CppBase() + 0x51D41D4))(this, x);
	}

};

}
