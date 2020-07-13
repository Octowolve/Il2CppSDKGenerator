#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimEventComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimEventComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& effectConfigs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cameraShakeConfigs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& soundCompnent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& screenEffectConfigs() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _UIRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShakeCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayScreenEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_SoundCompnent() {
		return ((T (*)(AnimEventComponent*))(Il2CppBase() + 0x22C4DB0))(this);
	}
	template <typename T = uintptr_t> T PlayEffect(Il2CppString* effectName) {
		return ((T (*)(AnimEventComponent*, Il2CppString*))(Il2CppBase() + 0x22C4F1C))(this, effectName);
	}
	template <typename T = void> T ShakeCamera(Il2CppString* camShakeName) {
		return ((T (*)(AnimEventComponent*, Il2CppString*))(Il2CppBase() + 0x22C57EC))(this, camShakeName);
	}
	template <typename T = uintptr_t> T get_UIRoot() {
		return ((T (*)(AnimEventComponent*))(Il2CppBase() + 0x22C5B44))(this);
	}
	template <typename T = uintptr_t> T PlayScreenEffect(Il2CppString* screenEffectName) {
		return ((T (*)(AnimEventComponent*, Il2CppString*))(Il2CppBase() + 0x22C5D18))(this, screenEffectName);
	}

};

}
