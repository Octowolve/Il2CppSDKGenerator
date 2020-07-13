#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAtlas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAtlas"));
	}

	template <typename T = bool> static T& LowQualitySetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mSprites() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mPixelSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mReplacement() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mCoordinates() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& sprites() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mPMA() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& mSpriteIndices() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isDynamicAtlas() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& mInited() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& bUseLowQualityAtlas() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = bool> T& m_CheckedBundle() {
		return *(T*)((uintptr_t)this + 0x2F);
	}
	template <typename T = Il2CppString*> static T& kPandoraShader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLowQualityAtlas() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkSpriteListAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SortAlphabetically() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetListOfSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetListOfSprites() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_References() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIfRelated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MarkAsChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Upgrade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T IsLowQualityAtlas() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4260758))(this);
	}
	template <typename T = uintptr_t> T get_spriteMaterial() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4260830))(this);
	}
	template <typename T = void> T set_spriteMaterial(uintptr_t value) {
		return ((T (*)(UIAtlas*, uintptr_t))(Il2CppBase() + 0x4260B98))(this, value);
	}
	template <typename T = bool> T get_premultipliedAlpha() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x426128C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_spriteList() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x42614B8))(this);
	}
	template <typename T = void> T set_spriteList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(UIAtlas*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4261D4C))(this, value);
	}
	template <typename T = uintptr_t> T get_texture() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4261E3C))(this);
	}
	template <typename T = float> T get_pixelSize() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4261F9C))(this);
	}
	template <typename T = void> T set_pixelSize(float value) {
		return ((T (*)(UIAtlas*, float))(Il2CppBase() + 0x4262088))(this, value);
	}
	template <typename T = uintptr_t> T get_replacement() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x42621F4))(this);
	}
	template <typename T = void> T set_replacement(uintptr_t value) {
		return ((T (*)(UIAtlas*, uintptr_t))(Il2CppBase() + 0x42621FC))(this, value);
	}
	template <typename T = uintptr_t> T GetSprite(Il2CppString* name) {
		return ((T (*)(UIAtlas*, Il2CppString*))(Il2CppBase() + 0x4262474))(this, name);
	}
	template <typename T = Il2CppString*> T GetRandomSprite(Il2CppString* startsWith) {
		return ((T (*)(UIAtlas*, Il2CppString*))(Il2CppBase() + 0x4262E38))(this, startsWith);
	}
	template <typename T = void> T MarkSpriteListAsChanged() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4262C80))(this);
	}
	template <typename T = void> T SortAlphabetically() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x426318C))(this);
	}
	template <typename T = void*> T GetListOfSprites() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x42633AC))(this);
	}
	template <typename T = void*> T GetListOfSprites_1(Il2CppString* match) {
		return ((T (*)(UIAtlas*, Il2CppString*))(Il2CppBase() + 0x4263684))(this, match);
	}
	template <typename T = bool> T References(uintptr_t atlas) {
		return ((T (*)(UIAtlas*, uintptr_t))(Il2CppBase() + 0x4263CA0))(this, atlas);
	}
	template <typename T = bool> static T CheckIfRelated(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4263EC8))(0, a, b);
	}
	template <typename T = void> T MarkAsChanged() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x4260D0C))(this);
	}
	template <typename T = bool> T Upgrade() {
		return ((T (*)(UIAtlas*))(Il2CppBase() + 0x42615E4))(this);
	}
	template <typename T = int32_t> static T SortAlphabeticallym__0(uintptr_t s1, uintptr_t s2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42640E0))(0, s1, s2);
	}

};

}
