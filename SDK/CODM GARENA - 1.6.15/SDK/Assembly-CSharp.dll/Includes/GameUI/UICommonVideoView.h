#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonVideoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonVideoView"));
	}

	template <typename T = uintptr_t> T& BackgroundRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& MainMediaPlayer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& MediaTexture() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& MediaPlayerAdapter() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SkinBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& bPlaying() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& sVideoPath() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& sVideoSoundBeginCmd() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& sVideoSoundEndCmd() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& bLoop() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DontCacheFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVideo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishShowImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD2F70))(this);
	}
	template <typename T = bool> T DontCacheFlag() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD3068))(this);
	}
	template <typename T = void> T PlayVideo(Il2CppString* videoPath, Il2CppString* soundBegin, Il2CppString* soundEnd, bool loop) {
		return ((T (*)(UICommonVideoView*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x3AD236C))(this, videoPath, soundBegin, soundEnd, loop);
	}
	template <typename T = uintptr_t> T Play() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD3108))(this);
	}
	template <typename T = void> T FinishShow() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD31F0))(this);
	}
	template <typename T = void> T FinishShowImpl() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD329C))(this);
	}
	template <typename T = void> T CloseImpl() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD35D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD373C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_DontCacheFlag() {
		return ((T (*)(UICommonVideoView*))(Il2CppBase() + 0x3AD3744))(this);
	}

};

}
