#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MaterialChange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Material_Change"));
	}

	template <typename T = uintptr_t> T& go() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CN() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_WE() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
