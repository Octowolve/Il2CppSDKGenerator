#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass780
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass78_0"));
	}

	template <typename T = Il2CppVector3> T& to() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppVector3> T DOBlendableMoveByb__0() {
		return ((T (*)(cDisplayClass780*))(Il2CppBase() + 0x51D49C0))(this);
	}
	template <typename T = void> T DOBlendableMoveByb__1(Il2CppVector3 x) {
		return ((T (*)(cDisplayClass780*, Il2CppVector3))(Il2CppBase() + 0x51D49D4))(this, x);
	}

};

}
