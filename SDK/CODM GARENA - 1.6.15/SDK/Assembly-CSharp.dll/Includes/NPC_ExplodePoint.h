#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCExplodePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_ExplodePoint"));
	}

	template <typename T = int32_t> T& ExplodeEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCExplodePoint*))(Il2CppBase() + 0x3EE174C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCExplodePoint*))(Il2CppBase() + 0x3EE17E4))(this);
	}

};

}
