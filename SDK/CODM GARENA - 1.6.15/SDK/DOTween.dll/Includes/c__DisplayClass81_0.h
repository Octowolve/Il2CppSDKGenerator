#pragma once
#include <Il2Cpp/Il2Cpp.h>

class cDisplayClass810
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<>c__DisplayClass81_0"));
	}

	template <typename T = Il2CppQuaternion> T& to() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppQuaternion> T DOBlendableLocalRotateByb__0() {
		return ((T (*)(cDisplayClass810*))(Il2CppBase() + 0x51D4E08))(this);
	}
	template <typename T = void> T DOBlendableLocalRotateByb__1(Il2CppQuaternion x) {
		return ((T (*)(cDisplayClass810*, Il2CppQuaternion))(Il2CppBase() + 0x51D4E18))(this, x);
	}

};

}
