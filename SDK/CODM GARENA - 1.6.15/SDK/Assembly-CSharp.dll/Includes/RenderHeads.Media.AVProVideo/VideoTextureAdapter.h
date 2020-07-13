#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class VideoTextureAdapter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "VideoTextureAdapter"));
	}

	template <typename T = uintptr_t> T& mTexture() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mFullScreen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& mHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& originWidth() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& originHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& cacheVideoWidth() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& cacheVideoHeight() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& bCacheVideoSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebindTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCacheVideoSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(VideoTextureAdapter*))(Il2CppBase() + 0x4128638))(this);
	}
	template <typename T = void> T RebindTexture() {
		return ((T (*)(VideoTextureAdapter*))(Il2CppBase() + 0x4127D1C))(this);
	}
	template <typename T = void> T SetCacheVideoSize(int32_t width, int32_t height) {
		return ((T (*)(VideoTextureAdapter*, int32_t, int32_t))(Il2CppBase() + 0x412912C))(this, width, height);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(VideoTextureAdapter*))(Il2CppBase() + 0x4129200))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pause) {
		return ((T (*)(VideoTextureAdapter*, bool))(Il2CppBase() + 0x41292A4))(this, pause);
	}
	template <typename T = float> T Resize() {
		return ((T (*)(VideoTextureAdapter*))(Il2CppBase() + 0x4128814))(this);
	}

};

}
