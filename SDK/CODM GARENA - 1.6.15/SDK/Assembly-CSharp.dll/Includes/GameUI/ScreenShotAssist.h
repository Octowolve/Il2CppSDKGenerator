#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenShotAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenShotAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenShotResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScreenShotPicture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetScreenShotPictureSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScreenShotPictureCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureImediately() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnScreenShotResponse(uintptr_t tex) {
		return ((T (*)(ScreenShotAssist*, uintptr_t))(Il2CppBase() + 0x44775A4))(this, tex);
	}
	template <typename T = void> static T GetScreenShotPicture(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44777EC))(0, callback);
	}
	template <typename T = void> static T OnGetScreenShotPictureSuccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x4477BB0))(0);
	}
	template <typename T = uintptr_t> static T GetScreenShotPictureCoroutine(uintptr_t act, uintptr_t texture) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4477A94))(0, act, texture);
	}
	template <typename T = uintptr_t> static T GetTexture(Il2CppRect rect) {
		return ((T (*)(void *, Il2CppRect))(Il2CppBase() + 0x4477C78))(0, rect);
	}
	template <typename T = uintptr_t> static T GetTextureImediately(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4477E40))(0, texture);
	}

};

}
