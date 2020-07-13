#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnPostFillCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnPostFillCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t widget, int32_t bufferOffset, Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols) {
		return ((T (*)(OnPostFillCallback*, uintptr_t, int32_t, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4205A90))(this, widget, bufferOffset, verts, uvs, cols);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t widget, int32_t bufferOffset, Il2CppList<Il2CppVector3>* verts, Il2CppList<Il2CppVector2>* uvs, Il2CppList<uintptr_t>* cols, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnPostFillCallback*, uintptr_t, int32_t, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4205B88))(this, widget, bufferOffset, verts, uvs, cols, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnPostFillCallback*, uintptr_t))(Il2CppBase() + 0x4205C74))(this, result);
	}

};

}
