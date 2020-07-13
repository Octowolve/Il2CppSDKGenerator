#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UINetworkTexture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UINetworkTexture"));
	}

	template <typename T = uintptr_t> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& isNeedReposition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& textureUrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& targetTexture() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& DefaultTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& SpriteWidth() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SpriteHeight() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& OnSuccess() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& OnFailure() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> static T& SPRITENAME_NETWORKTEXTURE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpriteShaderDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SpriteShaderAndroid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultSpriteMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ms_default_mat_reference_count() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& m_IsCurrentTextureDefault() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_OnSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_OnSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_OnFailure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_OnFailure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTextureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTextureUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTextureVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T add_OnSuccess(uintptr_t value) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F66C30))(this, value);
	}
	template <typename T = void> T remove_OnSuccess(uintptr_t value) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F66E58))(this, value);
	}
	template <typename T = void> T add_OnFailure(uintptr_t value) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F67080))(this, value);
	}
	template <typename T = void> T remove_OnFailure(uintptr_t value) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F672A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_URL() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F674D0))(this);
	}
	template <typename T = uintptr_t> T get_color() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F674D8))(this);
	}
	template <typename T = void> T set_color(uintptr_t value) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F67504))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F67540))(this);
	}
	template <typename T = void> T DisplayImage(Il2CppString* url) {
		return ((T (*)(UINetworkTexture*, Il2CppString*))(Il2CppBase() + 0x2F676B8))(this, url);
	}
	template <typename T = void> T DownloadTextureCallback(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(UINetworkTexture*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x2F67A30))(this, url, isSuccess, texture);
	}
	template <typename T = void> T SetTextureUrl(Il2CppString* url) {
		return ((T (*)(UINetworkTexture*, Il2CppString*))(Il2CppBase() + 0x2F68180))(this, url);
	}
	template <typename T = bool> T IsTextureVisible() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F683FC))(this);
	}
	template <typename T = void> T SetTexture(uintptr_t texture) {
		return ((T (*)(UINetworkTexture*, uintptr_t))(Il2CppBase() + 0x2F67C28))(this, texture);
	}
	template <typename T = void> T SetGray() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F6854C))(this);
	}
	template <typename T = void> T SetNormal() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F68930))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UINetworkTexture*))(Il2CppBase() + 0x2F68BD4))(this);
	}

};

}
