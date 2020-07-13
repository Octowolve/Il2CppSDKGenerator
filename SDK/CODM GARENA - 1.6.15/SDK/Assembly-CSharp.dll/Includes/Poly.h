#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Poly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Poly"));
	}

	template <typename T = Il2CppList<Il2CppVector3>*> T& m_vlist() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& m_normList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& m_uvList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_length() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
