#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Monster {

class STArgBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Monster", "STArgBase"));
	}


	template <typename T = uintptr_t> T GetType() {
		return ((T (*)(STArgBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T Title() {
		return ((T (*)(STArgBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T Info() {
		return ((T (*)(STArgBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T Name() {
		return ((T (*)(STArgBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetValue(uintptr_t inSrc) {
		return ((T (*)(STArgBase*, uintptr_t))(Il2CppBase() + 0x0))(this, inSrc);
	}
	template <typename T = void> T SetValue(uintptr_t inDist, uintptr_t inV) {
		return ((T (*)(STArgBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, inDist, inV);
	}

};

}
