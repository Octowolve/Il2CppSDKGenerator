#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Materiallocalization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Material_localization"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Mat_ob() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetSkinnedMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetMeshRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AutoSetSkinnedMeshRenderers(uintptr_t mc) {
		return ((T (*)(Materiallocalization*, uintptr_t))(Il2CppBase() + 0x41C92C0))(this, mc);
	}
	template <typename T = void> T AutoSetMeshRenderers(uintptr_t mc) {
		return ((T (*)(Materiallocalization*, uintptr_t))(Il2CppBase() + 0x41C9460))(this, mc);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(Materiallocalization*))(Il2CppBase() + 0x41C9600))(this);
	}

};

}
