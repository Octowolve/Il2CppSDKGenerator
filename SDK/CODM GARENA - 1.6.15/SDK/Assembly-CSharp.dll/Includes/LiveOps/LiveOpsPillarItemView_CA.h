#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsPillarItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsPillarItemView_CA"));
	}

	template <typename T = uintptr_t> T& ContainerPanel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RedSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TexturePic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& HotSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& NewSprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ItemBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& BGSprite() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_TextureUrl() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = void*> T& m_SelectedItemCallback() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_MenuName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector2> T& m_SafeSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationNewAndHot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRedNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNewSpriteShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationSpriteSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x35197A4))(this);
	}
	template <typename T = void> T RegisterButtonClick() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x3519848))(this);
	}
	template <typename T = void> T UnRegisterButtonClick() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x35199DC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x3519B78))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x3519C1C))(this);
	}
	template <typename T = void> T OnItemClicked() {
		return ((T (*)(LiveOpsPillarItemViewCA*))(Il2CppBase() + 0x3519CC0))(this);
	}
	template <typename T = void> T SetTabData(uintptr_t inTopMenuData, void* inSelectedItemCallback) {
		return ((T (*)(LiveOpsPillarItemViewCA*, uintptr_t, void*))(Il2CppBase() + 0x3519D90))(this, inTopMenuData, inSelectedItemCallback);
	}
	template <typename T = void> T AdaptationNewAndHot(bool bShowNew, bool bShowHot) {
		return ((T (*)(LiveOpsPillarItemViewCA*, bool, bool))(Il2CppBase() + 0x351A7AC))(this, bShowNew, bShowHot);
	}
	template <typename T = void> T UpdateRedNum(uintptr_t inTopMenuData) {
		return ((T (*)(LiveOpsPillarItemViewCA*, uintptr_t))(Il2CppBase() + 0x351AC9C))(this, inTopMenuData);
	}
	template <typename T = void> T UpdateNewSpriteShow(bool bNew) {
		return ((T (*)(LiveOpsPillarItemViewCA*, bool))(Il2CppBase() + 0x351AEA0))(this, bNew);
	}
	template <typename T = void> T AdaptationView(int32_t inWidth, int32_t inHeight, Il2CppVector2 inSpriteSafeSize) {
		return ((T (*)(LiveOpsPillarItemViewCA*, int32_t, int32_t, Il2CppVector2))(Il2CppBase() + 0x351B000))(this, inWidth, inHeight, inSpriteSafeSize);
	}
	template <typename T = Il2CppVector2> T AdaptationSpriteSize(Il2CppVector2 inOldSize, int32_t inWidth, int32_t inHeight) {
		return ((T (*)(LiveOpsPillarItemViewCA*, Il2CppVector2, int32_t, int32_t))(Il2CppBase() + 0x351B844))(this, inOldSize, inWidth, inHeight);
	}
	template <typename T = void> T _SetPic(uintptr_t activityTopConfig) {
		return ((T (*)(LiveOpsPillarItemViewCA*, uintptr_t))(Il2CppBase() + 0x351A0C8))(this, activityTopConfig);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsPillarItemViewCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x351BA58))(this, url, bSuccess, texture);
	}
	template <typename T = bool> static T UpdateRedNumm__0(bool it) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x351BC04))(0, it);
	}

};

}
