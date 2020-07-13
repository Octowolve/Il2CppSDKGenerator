#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnCustomWrite
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnCustomWrite"));
	}


	template <typename T = void> T Invoke(Il2CppList<Il2CppVector3>* v, Il2CppList<Il2CppVector2>* u, Il2CppList<uintptr_t>* c, Il2CppList<Il2CppVector3>* n, Il2CppList<uintptr_t>* t, Il2CppList<uintptr_t>* u2) {
		return ((T (*)(OnCustomWrite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x39F03E0))(this, v, u, c, n, t, u2);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppList<Il2CppVector3>* v, Il2CppList<Il2CppVector2>* u, Il2CppList<uintptr_t>* c, Il2CppList<Il2CppVector3>* n, Il2CppList<uintptr_t>* t, Il2CppList<uintptr_t>* u2, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnCustomWrite*, Il2CppList<Il2CppVector3>*, Il2CppList<Il2CppVector2>*, Il2CppList<uintptr_t>*, Il2CppList<Il2CppVector3>*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39F0504))(this, v, u, c, n, t, u2, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnCustomWrite*, uintptr_t))(Il2CppBase() + 0x39F0554))(this, result);
	}

};

}
