#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AssetEffectTriggerPutDownAnim
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AssetEffect_TriggerPutDownAnim"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T TriggerAnim() {
		return ((T (*)(AssetEffectTriggerPutDownAnim*))(Il2CppBase() + 0x3B8E870))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerAnim() {
		return ((T (*)(AssetEffectTriggerPutDownAnim*))(Il2CppBase() + 0x3B8EA60))(this);
	}

};

}
