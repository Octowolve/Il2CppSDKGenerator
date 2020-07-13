#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericImage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericImage"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Width() {
		return ((T (*)(GenericImage*))(Il2CppBase() + 0x4766960))(this);
	}
	template <typename T = int32_t> T get_Height() {
		return ((T (*)(GenericImage*))(Il2CppBase() + 0x4766968))(this);
	}
	template <typename T = void> T Draw(Il2CppString* id, uintptr_t rect, uintptr_t color, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(GenericImage*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4766970))(this, id, rect, color, linkText, userData);
	}

};

}
