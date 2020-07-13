#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TFirstUseUltcAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<T_FirstUseUlt>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& uiscene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(int32_t assetId, uintptr_t arg) {
		return ((T (*)(TFirstUseUltcAnonStorey2*, int32_t, uintptr_t))(Il2CppBase() + 0x27DBC44))(this, assetId, arg);
	}
	template <typename T = void> T m__1() {
		return ((T (*)(TFirstUseUltcAnonStorey2*))(Il2CppBase() + 0x27DC154))(this);
	}
	template <typename T = void> T m__2() {
		return ((T (*)(TFirstUseUltcAnonStorey2*))(Il2CppBase() + 0x27DC328))(this);
	}

};

}
