#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericDevice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericDevice"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T LoadFont(Il2CppString* face, int32_t size, bool bold, bool italic) {
		return ((T (*)(GenericDevice*, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x4765A14))(this, face, size, bold, italic);
	}
	template <typename T = uintptr_t> T LoadImage(Il2CppString* src, int32_t fps) {
		return ((T (*)(GenericDevice*, Il2CppString*, int32_t))(Il2CppBase() + 0x4765BF0))(this, src, fps);
	}
	template <typename T = void> T FillRect(uintptr_t rect, uintptr_t color, uintptr_t userData) {
		return ((T (*)(GenericDevice*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4765D78))(this, rect, color, userData);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(GenericDevice*))(Il2CppBase() + 0x4765F10))(this);
	}

};

}
