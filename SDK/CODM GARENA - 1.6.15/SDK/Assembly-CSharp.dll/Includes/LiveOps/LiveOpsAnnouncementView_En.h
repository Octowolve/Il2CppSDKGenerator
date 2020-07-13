#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsAnnouncementViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsAnnouncementView_En"));
	}

	template <typename T = uintptr_t> T& SpriteLeftPic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& TextureLeftPic() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ContainerWord() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ContainerPic() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteRightPic() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& TextureRightPic() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_Announcement() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& m_LeftIconUrl() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& m_RightIconUrl() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewWord() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetLeftPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLeftTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetRightPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementViewEn*))(Il2CppBase() + 0x356AFD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementViewEn*))(Il2CppBase() + 0x356B174))(this);
	}
	template <typename T = void> T UpdateViewWord(uintptr_t announcement) {
		return ((T (*)(LiveOpsAnnouncementViewEn*, uintptr_t))(Il2CppBase() + 0x356B314))(this, announcement);
	}
	template <typename T = void> T OnBtnGoClick() {
		return ((T (*)(LiveOpsAnnouncementViewEn*))(Il2CppBase() + 0x356C2CC))(this);
	}
	template <typename T = void> T _SetLeftPic(Il2CppString* icon, Il2CppString* iconUrl) {
		return ((T (*)(LiveOpsAnnouncementViewEn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x356B98C))(this, icon, iconUrl);
	}
	template <typename T = void> T SetLeftTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsAnnouncementViewEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x356C724))(this, url, bSuccess, texture);
	}
	template <typename T = void> T _SetRightPic(Il2CppString* icon, Il2CppString* iconUrl) {
		return ((T (*)(LiveOpsAnnouncementViewEn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x356BE2C))(this, icon, iconUrl);
	}
	template <typename T = void> T SetRightTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsAnnouncementViewEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x356C8D0))(this, url, bSuccess, texture);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementViewEn*))(Il2CppBase() + 0x356CA7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsAnnouncementViewEn*))(Il2CppBase() + 0x356CA84))(this);
	}

};

}
