#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.NGUI {

class NGUIDevice
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.NGUI", "NGUIDevice"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& fonts() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& images() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& whiteTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T LoadFont(Il2CppString* face, int32_t size, bool bold, bool italic) {
		return ((T (*)(NGUIDevice*, Il2CppString*, int32_t, bool, bool))(Il2CppBase() + 0x4767D6C))(this, face, size, bold, italic);
	}
	template <typename T = uintptr_t> T LoadImage(Il2CppString* src, int32_t fps) {
		return ((T (*)(NGUIDevice*, Il2CppString*, int32_t))(Il2CppBase() + 0x4768654))(this, src, fps);
	}
	template <typename T = void> T FillRect(uintptr_t rect, uintptr_t color, uintptr_t userData) {
		return ((T (*)(NGUIDevice*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4768884))(this, rect, color, userData);
	}
	template <typename T = void> T OnRelease() {
		return ((T (*)(NGUIDevice*))(Il2CppBase() + 0x4768D70))(this);
	}

};

}
