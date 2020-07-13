#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CallingCardPrefab
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CallingCardPrefab"));
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
	template <typename T = uintptr_t> T& EffectBig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& EffectSmall() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& HideSpriteWhenEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& efxShaderName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& effectCastInfos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& _callingcardID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCallingCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ShowCallingCard(int64_t callingcardID) {
		return ((T (*)(CallingCardPrefab*, int64_t))(Il2CppBase() + 0x5315DB4))(this, callingcardID);
	}
	template <typename T = void> T ShowEffect(bool showBigEffect) {
		return ((T (*)(CallingCardPrefab*, bool))(Il2CppBase() + 0x5315E78))(this, showBigEffect);
	}
	template <typename T = void> T ShowEffect_1(int32_t showBigEffectIdx) {
		return ((T (*)(CallingCardPrefab*, int32_t))(Il2CppBase() + 0x53160C4))(this, showBigEffectIdx);
	}

};

}
