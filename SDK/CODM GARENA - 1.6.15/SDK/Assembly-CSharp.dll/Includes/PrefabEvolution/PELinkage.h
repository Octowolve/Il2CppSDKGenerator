#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class PELinkage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "PELinkage"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& Links() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrefabObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_Item(int32_t liif) {
		return ((T (*)(PELinkage*, int32_t))(Il2CppBase() + 0x480ACE0))(this, liif);
	}
	template <typename T = uintptr_t> T get_Item_1(uintptr_t link) {
		return ((T (*)(PELinkage*, uintptr_t))(Il2CppBase() + 0x48098F0))(this, link);
	}
	template <typename T = uintptr_t> T get_Item_2(uintptr_t obj) {
		return ((T (*)(PELinkage*, uintptr_t))(Il2CppBase() + 0x48097D0))(this, obj);
	}
	template <typename T = uintptr_t> T GetPrefabObject(uintptr_t prefab, uintptr_t instanceObject) {
		return ((T (*)(PELinkage*, uintptr_t, uintptr_t))(Il2CppBase() + 0x480AE10))(this, prefab, instanceObject);
	}

};

}
