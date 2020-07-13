#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AvatarAssetsConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AvatarAssetsConfig"));
	}

	template <typename T = uintptr_t> static T& mConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& assets() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMeshID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialsID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaterialsIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Compare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x35EBBCC))(0);
	}
	template <typename T = int32_t> T GetMeshID(int32_t ID) {
		return ((T (*)(AvatarAssetsConfig*, int32_t))(Il2CppBase() + 0x35EBDC0))(this, ID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMaterialsID(int32_t ID) {
		return ((T (*)(AvatarAssetsConfig*, int32_t))(Il2CppBase() + 0x35EBEF4))(this, ID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetMaterialsIDs(int32_t ID) {
		return ((T (*)(AvatarAssetsConfig*, int32_t))(Il2CppBase() + 0x35EC1DC))(this, ID);
	}
	template <typename T = int32_t> static T Compare(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35EC40C))(0, left, right);
	}

};

}
