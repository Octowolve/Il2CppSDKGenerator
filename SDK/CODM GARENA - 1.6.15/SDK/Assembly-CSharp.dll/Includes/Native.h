#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Native
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Native"));
	}


	template <typename T = uintptr_t> static T GetRenderEventFunc() {
		return ((T (*)(void *))(Il2CppBase() + 0x382C4FC))(0);
	}
	template <typename T = int32_t> static T _GetWidth(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x383365C))(0, iPlayerIndex);
	}
	template <typename T = int32_t> static T _GetHeight(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x383373C))(0, iPlayerIndex);
	}
	template <typename T = int32_t> static T _GetTextureHandle(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3833818))(0, iPlayerIndex);
	}
	template <typename T = int64_t> static T _GetDuration(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x383403C))(0, iPlayerIndex);
	}
	template <typename T = int32_t> static T _GetLastErrorCode(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3833F5C))(0, iPlayerIndex);
	}
	template <typename T = int32_t> static T _GetFrameCount(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3831290))(0, iPlayerIndex);
	}
	template <typename T = float> static T _GetVideoDisplayRate(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x38306B0))(0, iPlayerIndex);
	}
	template <typename T = bool> static T _CanPlay(int32_t iPlayerIndex) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x382DB30))(0, iPlayerIndex);
	}

};

}
