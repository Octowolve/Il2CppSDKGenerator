#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRSoundVisibleManangerOB
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRSoundVisibleMananger_OB"));
	}

	template <typename T = int32_t> T& DepthOnTheTop() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSoundTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRSoundVisibleManangerOB*))(Il2CppBase() + 0x30C4D70))(this);
	}
	template <typename T = void> T UpdateSoundTips(Il2CppDictionary<uint32_t, uintptr_t>* soundInfoDict, Il2CppList<uintptr_t>* soundTipsSprite) {
		return ((T (*)(TacticalBRSoundVisibleManangerOB*, Il2CppDictionary<uint32_t, uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30C4EB4))(this, soundInfoDict, soundTipsSprite);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRSoundVisibleManangerOB*))(Il2CppBase() + 0x30C5CC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSoundTips(Il2CppDictionary<uint32_t, uintptr_t>* P0, Il2CppList<uintptr_t>* P1) {
		return ((T (*)(TacticalBRSoundVisibleManangerOB*, Il2CppDictionary<uint32_t, uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x30C5CC4))(this, P0, P1);
	}

};

}
