#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine {

class HtDevice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine", "HtDevice"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T LoadFont(Il2CppString* face, int32_t size, bool bold, bool italic) {
		return ((T (*)(HtDevice*, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, face, size, bold, italic);
	}
	template <typename T = uintptr_t> T LoadImage(Il2CppString* src, int32_t fps) {
		return ((T (*)(HtDevice*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, src, fps);
	}
	template <typename T = void> T FillRect(uintptr_t rect, uintptr_t color, uintptr_t userData) {
		return ((T (*)(HtDevice*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, rect, color, userData);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(HtDevice*))(Il2CppBase() + 0x0))(this);
	}

};

}
