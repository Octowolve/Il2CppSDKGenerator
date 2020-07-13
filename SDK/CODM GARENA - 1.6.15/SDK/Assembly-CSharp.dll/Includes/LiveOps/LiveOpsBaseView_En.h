#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsBaseViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsBaseView_En"));
	}

	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TextureLeftPic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelActivityName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelActivityInterval() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelDesc() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LeftScrollView() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& m_LabelDistanceToButtom() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& m_bLeftAdaptation() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = bool> T& m_NeedAdjustLabels() {
		return *(T*)((uintptr_t)this + 0xA5);
	}
	template <typename T = Il2CppString*> T& m_LeftIconUrl() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshActivityState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLeftPicIconUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetLeftPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftSpriteView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftLabelView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T get_ActivityData() {
		return ((T (*)(LiveOpsBaseViewEn*))(Il2CppBase() + 0x356CDB0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LiveOpsBaseViewEn*))(Il2CppBase() + 0x356CDB8))(this);
	}
	template <typename T = bool> T _CheckDataValid() {
		return ((T (*)(LiveOpsBaseViewEn*))(Il2CppBase() + 0x356CF10))(this);
	}
	template <typename T = Il2CppString*> T _RefreshActivityState() {
		return ((T (*)(LiveOpsBaseViewEn*))(Il2CppBase() + 0x356CFB8))(this);
	}
	template <typename T = Il2CppString*> T _RefreshRemainTime(double endTime) {
		return ((T (*)(LiveOpsBaseViewEn*, double))(Il2CppBase() + 0x356D134))(this, endTime);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsBaseViewEn*, uintptr_t))(Il2CppBase() + 0x3542A20))(this, activity);
	}
	template <typename T = void> T GetLeftPicIconUrl(uintptr_t activity, uintptr_t* outSpriteIcon, uintptr_t* outSpriteIconUrl) {
		return ((T (*)(LiveOpsBaseViewEn*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x356E1B8))(this, activity, outSpriteIcon, outSpriteIconUrl);
	}
	template <typename T = void> T _SetLeftPic(uintptr_t activity) {
		return ((T (*)(LiveOpsBaseViewEn*, uintptr_t))(Il2CppBase() + 0x356D60C))(this, activity);
	}
	template <typename T = Il2CppString*> T GetDefaultSpriteName() {
		return ((T (*)(LiveOpsBaseViewEn*))(Il2CppBase() + 0x356E34C))(this);
	}
	template <typename T = void> T SetLeftTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsBaseViewEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x356E404))(this, url, bSuccess, texture);
	}
	template <typename T = void> T AdaptationLeftView(int32_t inLabelDistanceToButtom, int32_t inViewHeight, int32_t inViewWidth, int32_t inrightWidthMin) {
		return ((T (*)(LiveOpsBaseViewEn*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x353C3B4))(this, inLabelDistanceToButtom, inViewHeight, inViewWidth, inrightWidthMin);
	}
	template <typename T = void> T AdaptationLeftSpriteView(uintptr_t inSprite, uintptr_t tPanel) {
		return ((T (*)(LiveOpsBaseViewEn*, uintptr_t, uintptr_t))(Il2CppBase() + 0x356E5B0))(this, inSprite, tPanel);
	}
	template <typename T = void> T AdaptationLeftLabelView(int32_t inLabelDistanceToButtom) {
		return ((T (*)(LiveOpsBaseViewEn*, int32_t))(Il2CppBase() + 0x356DB84))(this, inLabelDistanceToButtom);
	}

};

}
