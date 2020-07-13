#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Clipping
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Clipping"));
	}


	template <typename T = Il2CppRect> static T FindCullAndClipWorldRect(Il2CppList<uintptr_t>* rectMaskParents, uintptr_t* validRect) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*, uintptr_t*))(Il2CppBase() + 0x3D0D9A4))(0, rectMaskParents, validRect);
	}
	template <typename T = Il2CppRect> static T RectIntersect(Il2CppRect a, Il2CppRect b) {
		return ((T (*)(void *, Il2CppRect, Il2CppRect))(Il2CppBase() + 0x3D0DDCC))(0, a, b);
	}

};

}
