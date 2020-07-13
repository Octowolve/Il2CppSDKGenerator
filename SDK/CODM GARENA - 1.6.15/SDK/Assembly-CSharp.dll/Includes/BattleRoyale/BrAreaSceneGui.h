#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BrAreaSceneGui
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BrAreaSceneGui"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& mCacheList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCacheList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BrAreaSceneGui*))(Il2CppBase() + 0x24CFF24))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BrAreaSceneGui*))(Il2CppBase() + 0x24D01F0))(this);
	}
	template <typename T = void> T ResetCacheList() {
		return ((T (*)(BrAreaSceneGui*))(Il2CppBase() + 0x24CFFC8))(this);
	}
	template <typename T = void> T CheckRotation() {
		return ((T (*)(BrAreaSceneGui*))(Il2CppBase() + 0x24D0294))(this);
	}

};

}
