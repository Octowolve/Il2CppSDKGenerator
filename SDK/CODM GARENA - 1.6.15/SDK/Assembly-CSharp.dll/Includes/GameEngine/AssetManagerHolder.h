#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetManagerHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetManagerHolder"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& m_AssetList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T GetAssetList() {
		return ((T (*)(AssetManagerHolder*))(Il2CppBase() + 0x2B83CAC))(this);
	}

};

}
