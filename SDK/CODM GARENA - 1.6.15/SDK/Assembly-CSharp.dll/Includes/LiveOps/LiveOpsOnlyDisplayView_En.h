#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsOnlyDisplayViewEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsOnlyDisplayView_En"));
	}

	template <typename T = uintptr_t> T& SpriteRightPic() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& TextureRightPic() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ContainerWord() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& LabelTitle() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ContainerPic() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppString*> T& m_RightIconUrl() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetRightPic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRightTextureContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView(uintptr_t activity) {
		return ((T (*)(LiveOpsOnlyDisplayViewEn*, uintptr_t))(Il2CppBase() + 0x3511934))(this, activity);
	}
	template <typename T = void> T _SetRightPic(Il2CppString* icon, Il2CppString* iconUrl) {
		return ((T (*)(LiveOpsOnlyDisplayViewEn*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3511F00))(this, icon, iconUrl);
	}
	template <typename T = void> T SetRightTextureContent(Il2CppString* url, bool bSuccess, uintptr_t texture) {
		return ((T (*)(LiveOpsOnlyDisplayViewEn*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3512390))(this, url, bSuccess, texture);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(LiveOpsOnlyDisplayViewEn*, uintptr_t))(Il2CppBase() + 0x351253C))(this, P0);
	}

};

}
