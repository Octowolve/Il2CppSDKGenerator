#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class EntryItemLiveOpsEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "EntryItemLiveOps_En"));
	}

	template <typename T = uintptr_t> T& ContainerEnd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& texturePic() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BtnBg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Container_Other() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LabelTitle_Other() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& LabelDesc_Other() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Container_SingleTask() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LabelProgress_SingleTask() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SliderProgress_SingleTask() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& LabelTitle_SingleTask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& LabelDesc_SingleTask() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& ContainerWarmUp() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ContainerInProgress() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& BtnTemplateEnter() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& BtnTemplateClaim() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& SpriteAllFinish() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ObjRedBadget() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ObjEffects() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ObjNew() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& m_index() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_LiveOpsActivityDS() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& m_AnnouncementDS() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_TabData() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ActivityData() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_AnnouncementData() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ActivityState() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> static T& CHECK_INTERVAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_Num() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& m_IconUrl() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckActivityDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshActivityState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__UpdateAnnouncementView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnEnterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T get_LiveOpsActivityDS() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3550970))(this);
	}
	template <typename T = uintptr_t> T get_AnnouncementDS() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3550A20))(this);
	}
	template <typename T = uintptr_t> T get_TabData() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3550AD0))(this);
	}
	template <typename T = uintptr_t> T get_ActivityData() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3550AD8))(this);
	}
	template <typename T = void> T OnAwake() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3550AE0))(this);
	}
	template <typename T = uintptr_t> T get_ActivityState() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3551398))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x35513A0))(this);
	}
	template <typename T = bool> T _CheckActivityDataValid() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x35519F8))(this);
	}
	template <typename T = void> T _RefreshActivityState() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3551AA0))(this);
	}
	template <typename T = void> T _RefreshRemainTime(double endTime) {
		return ((T (*)(EntryItemLiveOpsEn*, double))(Il2CppBase() + 0x3551C60))(this, endTime);
	}
	template <typename T = void> T SetTabData(uintptr_t data, int32_t count) {
		return ((T (*)(EntryItemLiveOpsEn*, uintptr_t, int32_t))(Il2CppBase() + 0x3551F94))(this, data, count);
	}
	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(EntryItemLiveOpsEn*, uintptr_t))(Il2CppBase() + 0x3553A88))(this, activity);
	}
	template <typename T = void> T _SetPic(Il2CppString* icon, Il2CppString* iconUrl) {
		return ((T (*)(EntryItemLiveOpsEn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x355440C))(this, icon, iconUrl);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(EntryItemLiveOpsEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x35548A8))(this, url, bSuccess, texture);
	}
	template <typename T = void> T _UpdateAnnouncementView() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3552104))(this);
	}
	template <typename T = void> T SetBtnState() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3552304))(this);
	}
	template <typename T = void> T RefreshRedDot() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3552F28))(this);
	}
	template <typename T = void> T _OnBtnEnterClick() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3554AA0))(this);
	}
	template <typename T = void> T _OnBtnClaimClick() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x3554DA4))(this);
	}
	template <typename T = bool> static T SetBtnStatem__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35554E4))(0, it);
	}
	template <typename T = bool> static T SetBtnStatem__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3555514))(0, it);
	}
	template <typename T = bool> static T SetBtnStatem__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3555544))(0, it);
	}
	template <typename T = bool> static T RefreshRedDotm__3(uintptr_t x) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3555574))(0, x);
	}
	template <typename T = bool> static T _OnBtnClaimClickm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35555A0))(0, it);
	}
	template <typename T = bool> static T _OnBtnClaimClickm__5(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x35555D0))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(EntryItemLiveOpsEn*))(Il2CppBase() + 0x35555FC))(this);
	}

};

}
