#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class GraphicRegistry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "GraphicRegistry"));
	}

	template <typename T = uintptr_t> static T& s_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> T& m_Graphics() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& s_EmptyList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D1AB90))(0);
	}
	template <typename T = void> static T RegisterGraphicForCanvas(uintptr_t c, uintptr_t graphic) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D14FFC))(0, c, graphic);
	}
	template <typename T = void> static T UnregisterGraphicForCanvas(uintptr_t c, uintptr_t graphic) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3D14A94))(0, c, graphic);
	}
	template <typename T = void*> static T GetGraphicsForCanvas(uintptr_t canvas) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D1A0B0))(0, canvas);
	}

};

}
