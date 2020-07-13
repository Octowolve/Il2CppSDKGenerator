#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CobMath {

class IHitable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CobMath", "IHitable"));
	}


	template <typename T = bool> T IsHitBy(uintptr_t line, uintptr_t hitInfo) {
		return ((T (*)(IHitable*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, line, hitInfo);
	}

};

}
