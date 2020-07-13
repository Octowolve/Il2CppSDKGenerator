#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class FontUpdateTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "FontUpdateTracker"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& m_Tracked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T TrackText(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D135D4))(0, t);
	}
	template <typename T = void> static T RebuildForFont(uintptr_t f) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D13A40))(0, f);
	}
	template <typename T = void> static T UntrackText(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D13C5C))(0, t);
	}

};

}
