#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePicturePopupView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePicturePopupView"));
	}

	template <typename T = int32_t> static T& FIXED_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& TexturePic() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& SpritePic() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& WidgetGo() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BtnGo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownLoadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FacePicturePopupView*, uintptr_t))(Il2CppBase() + 0x4BE27E4))(this, data);
	}
	template <typename T = void> T DownLoadTextureCallback(Il2CppString* textureUrl, bool bSucceed, uintptr_t texture) {
		return ((T (*)(FacePicturePopupView*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x4BE375C))(this, textureUrl, bSucceed, texture);
	}

};

}
