#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RestoreSystemAdjustScreencAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<RestoreSystemAdjustScreen>c__AnonStorey0"));
	}

	template <typename T = bool> T& bAdjustLanguage() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tabList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T m__0(uintptr_t result, int32_t userContext) {
		return ((T (*)(RestoreSystemAdjustScreencAnonStorey0*, uintptr_t, int32_t))(Il2CppBase() + 0x28B5CB8))(this, result, userContext);
	}
	template <typename T = void> T m__1(uintptr_t result1, int32_t userContext1) {
		return ((T (*)(RestoreSystemAdjustScreencAnonStorey0*, uintptr_t, int32_t))(Il2CppBase() + 0x28B5F68))(this, result1, userContext1);
	}
	template <typename T = void> T m__2(uintptr_t result1, int32_t userContext1) {
		return ((T (*)(RestoreSystemAdjustScreencAnonStorey0*, uintptr_t, int32_t))(Il2CppBase() + 0x28B60C8))(this, result1, userContext1);
	}
	template <typename T = void> static T m__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x28B6270))(0);
	}
	template <typename T = void> static T m__4() {
		return ((T (*)(void *))(Il2CppBase() + 0x28B6310))(0);
	}
	template <typename T = void> static T m__5() {
		return ((T (*)(void *))(Il2CppBase() + 0x28B63B0))(0);
	}

};

}
