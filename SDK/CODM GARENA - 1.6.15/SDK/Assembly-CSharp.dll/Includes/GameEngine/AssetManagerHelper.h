#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetManagerHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetManagerHelper"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AssetConfigList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& m_Inst() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2B97D18))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AssetManagerHelper*))(Il2CppBase() + 0x2B981A0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AssetManagerHelper*))(Il2CppBase() + 0x2B98630))(this);
	}
	template <typename T = void> T RegisterAsset(int32_t assetId) {
		return ((T (*)(AssetManagerHelper*, int32_t))(Il2CppBase() + 0x2B987D0))(this, assetId);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AssetManagerHelper*))(Il2CppBase() + 0x2B988A0))(this);
	}

};

}
