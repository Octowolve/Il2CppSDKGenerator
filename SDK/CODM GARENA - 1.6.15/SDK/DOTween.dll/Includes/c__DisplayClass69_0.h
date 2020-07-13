#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass690
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass69_0"));
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

	template <typename T = Il2CppVector3> T DOLocalJumpb__0() {
		return ((T (*)(cDisplayClass690*))(Il2CppBase() + 0x51D4214))(this);
	}
	template <typename T = void> T DOLocalJumpb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass690*, Il2CppVector3))(Il2CppBase() + 0x51D4240))(this, x);
	}
	template <typename T = void> T DOLocalJumpb__2() {
		return ((T (*)(cDisplayClass690*))(Il2CppBase() + 0x51D4278))(this);
	}
	template <typename T = Il2CppVector3> T DOLocalJumpb__3() {
		return ((T (*)(cDisplayClass690*))(Il2CppBase() + 0x51D4358))(this);
	}
	template <typename T = void> T DOLocalJumpb__4(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass690*, Il2CppVector3))(Il2CppBase() + 0x51D4384))(this, x);
	}
	template <typename T = Il2CppVector3> T DOLocalJumpb__5() {
		return ((T (*)(cDisplayClass690*))(Il2CppBase() + 0x51D43BC))(this);
	}
	template <typename T = void> T DOLocalJumpb__6(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass690*, Il2CppVector3))(Il2CppBase() + 0x51D43E8))(this, x);
	}

};

}
