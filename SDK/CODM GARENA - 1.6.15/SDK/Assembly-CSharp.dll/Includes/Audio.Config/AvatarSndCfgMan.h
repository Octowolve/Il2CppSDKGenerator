#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.Config {

class AvatarSndCfgMan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.Config", "AvatarSndCfgMan"));
	}

	template <typename T = uintptr_t> T& mCfg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SearchForConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SearchForDefaultConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Term() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T SearchForConfig(uint64_t uRoleID, uintptr_t eCamp, bool is3P, bool isFemale, uintptr_t pawnCategoryType) {
		return ((T (*)(void *, uint64_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x44DF8C4))(0, uRoleID, eCamp, is3P, isFemale, pawnCategoryType);
	}
	template <typename T = uintptr_t> static T _SearchForDefaultConfig(uintptr_t pCfg, uintptr_t eCamp, bool is3P, bool isFemale, uintptr_t pawnCategoryType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool, bool, uintptr_t))(Il2CppBase() + 0x44DFA98))(0, pCfg, eCamp, is3P, isFemale, pawnCategoryType);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarSndCfgMan*))(Il2CppBase() + 0x44DFC1C))(this);
	}
	template <typename T = void> T Term() {
		return ((T (*)(AvatarSndCfgMan*))(Il2CppBase() + 0x44DFCC0))(this);
	}

};

}
