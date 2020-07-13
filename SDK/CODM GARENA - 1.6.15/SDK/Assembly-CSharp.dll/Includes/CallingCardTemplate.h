#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallingCardTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CallingCardTemplate"));
	}

	template <typename T = uintptr_t> T& SpriteRoot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CardSprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& EffectRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& AssetIDRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _callingcardID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _showBigEffect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _curCallingCardPrefab() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<int64_t, uintptr_t>*> T& callingCardCach() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _showEffectStle() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _playAnimationOnReady() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCallingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCardOK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimationOnReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndPlayAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T ShowCallingCard(int64_t callingcardID, uintptr_t effectStyle) {
		return ((T (*)(CallingCardTemplate*, int64_t, uintptr_t))(Il2CppBase() + 0x53156F0))(this, callingcardID, effectStyle);
	}
	template <typename T = void> T LoadAssets() {
		return ((T (*)(CallingCardTemplate*))(Il2CppBase() + 0x53167C0))(this);
	}
	template <typename T = void> T OnCardOK(int32_t arg1, uintptr_t arg2) {
		return ((T (*)(CallingCardTemplate*, int32_t, uintptr_t))(Il2CppBase() + 0x5316E3C))(this, arg1, arg2);
	}
	template <typename T = void> T PlayAnimationOnReady(bool playAnimationOnReady) {
		return ((T (*)(CallingCardTemplate*, bool))(Il2CppBase() + 0x53173F4))(this, playAnimationOnReady);
	}
	template <typename T = void> T CheckAndPlayAnimation() {
		return ((T (*)(CallingCardTemplate*))(Il2CppBase() + 0x5316C30))(this);
	}
	template <typename T = void> T OnPlayFinished() {
		return ((T (*)(CallingCardTemplate*))(Il2CppBase() + 0x53175B0))(this);
	}
	template <typename T = void> T SetShowEffect() {
		return ((T (*)(CallingCardTemplate*))(Il2CppBase() + 0x531749C))(this);
	}

};

}
