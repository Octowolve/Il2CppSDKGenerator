#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePictureTemplatePopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePictureTemplatePopupView"));
	}

	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelContent_1() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelContent_2() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelContent_3() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& LabelGo() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnShow() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> static T& FIXED_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& TexturePic() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& WidgetGo() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalDownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadCDNTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadLocalTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUsedTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownLoadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FacePictureTemplatePopupView*, uintptr_t))(Il2CppBase() + 0x3CBD63C))(this, data);
	}
	template <typename T = void> T DownloadTexture(uintptr_t data) {
		return ((T (*)(FacePictureTemplatePopupView*, uintptr_t))(Il2CppBase() + 0x3CBE060))(this, data);
	}
	template <typename T = void> T GetTextureURL(uintptr_t data, Il2CppArray<uintptr_t>** cdn, Il2CppArray<uintptr_t>** local) {
		return ((T (*)(FacePictureTemplatePopupView*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3CBE2A0))(this, data, cdn, local);
	}
	template <typename T = void> T InternalDownloadTexture(Il2CppArray<uintptr_t>* cdn, Il2CppArray<uintptr_t>* local) {
		return ((T (*)(FacePictureTemplatePopupView*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CBE164))(this, cdn, local);
	}
	template <typename T = bool> T DownloadCDNTexture(Il2CppArray<uintptr_t>* cdn, Il2CppArray<uintptr_t>* local) {
		return ((T (*)(FacePictureTemplatePopupView*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CBE398))(this, cdn, local);
	}
	template <typename T = bool> T LoadLocalTexture(Il2CppArray<uintptr_t>* local) {
		return ((T (*)(FacePictureTemplatePopupView*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3CBE68C))(this, local);
	}
	template <typename T = void> T ResetUsedTexture(bool useCDN) {
		return ((T (*)(FacePictureTemplatePopupView*, bool))(Il2CppBase() + 0x3CBE834))(this, useCDN);
	}
	template <typename T = void> T DownLoadTextureCallback(Il2CppString* textureUrl, bool bSucceed, uintptr_t texture) {
		return ((T (*)(FacePictureTemplatePopupView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3CBE93C))(this, textureUrl, bSucceed, texture);
	}
	template <typename T = bool> T get_isUseLocalWhenCDNDownloading() {
		return ((T (*)(FacePictureTemplatePopupView*))(Il2CppBase() + 0x3CBEB4C))(this);
	}

};

}
