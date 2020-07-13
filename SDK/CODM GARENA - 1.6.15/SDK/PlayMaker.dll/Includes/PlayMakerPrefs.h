#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerPrefs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerPrefs"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& defaultColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& defaultColorNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colors() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& colorNames() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& minimapColors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x5146F4C))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_Colors() {
		return ((T (*)(void *))(Il2CppBase() + 0x514486C))(0);
	}
	template <typename T = void> static T set_Colors(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5147204))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_ColorNames() {
		return ((T (*)(void *))(Il2CppBase() + 0x51472B4))(0);
	}
	template <typename T = void> static T set_ColorNames(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5147360))(0, value);
	}
	template <typename T = void> T ResetDefaultColors() {
		return ((T (*)(PlayMakerPrefs*))(Il2CppBase() + 0x5147410))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_MinimapColors() {
		return ((T (*)(void *))(Il2CppBase() + 0x5147634))(0);
	}
	template <typename T = void> static T SaveChanges() {
		return ((T (*)(void *))(Il2CppBase() + 0x514798C))(0);
	}
	template <typename T = void> static T UpdateMinimapColors() {
		return ((T (*)(void *))(Il2CppBase() + 0x5147758))(0);
	}

};

}
