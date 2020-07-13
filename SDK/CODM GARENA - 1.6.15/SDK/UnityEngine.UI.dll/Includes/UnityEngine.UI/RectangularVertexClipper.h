#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class RectangularVertexClipper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "RectangularVertexClipper"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_WorldCorners() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CanvasCorners() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppRect> T GetCanvasRect(uintptr_t t, uintptr_t c) {
		return ((T (*)(RectangularVertexClipper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E2AEF0))(this, t, c);
	}

};

}
