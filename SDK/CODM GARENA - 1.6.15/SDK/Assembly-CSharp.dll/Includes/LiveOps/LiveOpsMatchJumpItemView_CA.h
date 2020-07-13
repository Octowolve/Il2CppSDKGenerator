#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMatchJumpItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMatchJumpItemView_CA"));
	}

	template <typename T = uintptr_t> T& RootWidget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& JumpBtn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& RemainTimeRoot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& BGSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& BGTexture() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ModWidget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_IconUrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_JumpData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GotoDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_JumpBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView_Height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*))(Il2CppBase() + 0x35013A8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*))(Il2CppBase() + 0x350153C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t matchJump) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, uintptr_t))(Il2CppBase() + 0x35016D0))(this, matchJump);
	}
	template <typename T = void> T _SetPic(uintptr_t matchJump) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, uintptr_t))(Il2CppBase() + 0x3501A68))(this, matchJump);
	}
	template <typename T = void> T SetLeftTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3502428))(this, url, bSuccess, texture);
	}
	template <typename T = void> T _RefreshRemainTime(int32_t endTime) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, int32_t))(Il2CppBase() + 0x3502008))(this, endTime);
	}
	template <typename T = void> T GotoDetail(uintptr_t obj) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, uintptr_t))(Il2CppBase() + 0x35025D4))(this, obj);
	}
	template <typename T = void> T JumpBtnClicked() {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*))(Il2CppBase() + 0x3502760))(this);
	}
	template <typename T = void> T AdaptationView(int32_t inwidth) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, int32_t))(Il2CppBase() + 0x350293C))(this, inwidth);
	}
	template <typename T = void> T AdaptationView_Height(int32_t inheight) {
		return ((T (*)(LiveOpsMatchJumpItemViewCA*, int32_t))(Il2CppBase() + 0x3502C5C))(this, inheight);
	}

};

}
