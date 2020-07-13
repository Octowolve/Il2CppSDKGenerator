#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class VideoDisplayNGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "VideoDisplayNGUI"));
	}

	template <typename T = uintptr_t> T& _uiTexture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _mediaPlayer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _defaultTexture() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _autoPlayWhenPause() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _textureAdapter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _mediaControl() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _isDirty() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _lastTextureApplied() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryUpdateTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Apply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMediaPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMediaPlayerEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_MediaControl() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x4127424))(this);
	}
	template <typename T = uintptr_t> T get_Player() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x412751C))(this);
	}
	template <typename T = void> T set_Player(uintptr_t value) {
		return ((T (*)(VideoDisplayNGUI*, uintptr_t))(Il2CppBase() + 0x4127524))(this, value);
	}
	template <typename T = void> T TryUpdateTexture() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x4127878))(this);
	}
	template <typename T = void> T Apply(uintptr_t texture) {
		return ((T (*)(VideoDisplayNGUI*, uintptr_t))(Il2CppBase() + 0x4127B88))(this, texture);
	}
	template <typename T = void> T ChangeMediaPlayer(uintptr_t newPlayer) {
		return ((T (*)(VideoDisplayNGUI*, uintptr_t))(Il2CppBase() + 0x41275F4))(this, newPlayer);
	}
	template <typename T = void> T OnMediaPlayerEvent(uintptr_t mp, uintptr_t et, uintptr_t errorCode) {
		return ((T (*)(VideoDisplayNGUI*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4127E04))(this, mp, et, errorCode);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x4127EF8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x412809C))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x41282DC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x4128380))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x4128424))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(VideoDisplayNGUI*))(Il2CppBase() + 0x41284CC))(this);
	}

};

}
