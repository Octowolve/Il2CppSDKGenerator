#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicSkinBoneRefManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicSkinBoneRefManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& DynamicSkinBoneRefs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoneRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveBoneRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DynamicSkinBoneRefManager*))(Il2CppBase() + 0x4B9D504))(this);
	}
	template <typename T = void> T AddBoneRef(Il2CppString* bonePath) {
		return ((T (*)(DynamicSkinBoneRefManager*, Il2CppString*))(Il2CppBase() + 0x4B9D5E0))(this, bonePath);
	}
	template <typename T = bool> T RemoveBoneRef(Il2CppString* bonePath) {
		return ((T (*)(DynamicSkinBoneRefManager*, Il2CppString*))(Il2CppBase() + 0x4B9D748))(this, bonePath);
	}

};

}
