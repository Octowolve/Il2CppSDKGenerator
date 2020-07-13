#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LineRendererGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LineRendererGroup"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Points() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Renderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LineRendererGroup*))(Il2CppBase() + 0x493947C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LineRendererGroup*))(Il2CppBase() + 0x4939520))(this);
	}

};

}
