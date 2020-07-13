#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsScrollPlayItemViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsScrollPlayItemView_En"));
	}

	template <typename T = uintptr_t> T& LabelName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& LabelTag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TexturePic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeBlack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& LabelRemainTimeRed() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& RemainTimeRoot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NewObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& activityData() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_IconUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ActivityState() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshActivityState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__RefreshRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetItemData(uintptr_t dataObj) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, uintptr_t))(Il2CppBase() + 0x4324954))(this, dataObj);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*))(Il2CppBase() + 0x43252F0))(this);
	}
	template <typename T = void> T _SetPic(Il2CppString* icon, Il2CppString* iconUrl) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4324E50))(this, icon, iconUrl);
	}
	template <typename T = void> T SetTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4325518))(this, url, bSuccess, texture);
	}
	template <typename T = void> T _RefreshActivityState(uintptr_t m_ActivityData) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, uintptr_t))(Il2CppBase() + 0x43253FC))(this, m_ActivityData);
	}
	template <typename T = void> T _RefreshRemainTime(double endTime) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, double))(Il2CppBase() + 0x43256C4))(this, endTime);
	}
	template <typename T = void> T xLuaBaseProxy_SetItemData(uintptr_t P0) {
		return ((T (*)(LiveOpsScrollPlayItemViewEn*, uintptr_t))(Il2CppBase() + 0x43259F8))(this, P0);
	}

};

}
